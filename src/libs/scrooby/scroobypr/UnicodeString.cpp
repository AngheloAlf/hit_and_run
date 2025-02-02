#include "libs/scrooby/scroobypr/UnicodeString.hpp"

#include "garbage_helper.h"
#include "include_asm.h"

#include "sce_libs/gcc/ee/libg/assert.h"
#include "sce_libs/gcc/ee/libg/memcpy.h"
#include "sce_libs/gcc/ee/libg/strlen.h"

void test(void) {
    static bool D_0043653C = false;

    if (!D_0043653C) {
        D_0043653C = true;

        UnicodeString sp00("x%dx");
        UnicodeString sp10("300");
        UnicodeString sp20("%d");

        sp00.Replace(sp20, sp10);
    }
}

UnicodeString::UnicodeString(void) {
    this->buffer = NULL;
    this->Clear();
    test();
}

UnicodeString::UnicodeString(UnicodeString const &other) {
    this->buffer = NULL;
    if (this != &other) {
        this->Clear();
        *this = other;
    }
}

UnicodeString::UnicodeString(char const *ascii_str) {
    this->buffer = NULL;
    this->ReadAscii(ascii_str, strlen(ascii_str));
}

UnicodeString::~UnicodeString(void) {
    this->Clear();
}

UnicodeString &UnicodeString::operator=(UnicodeString const &other) {
    if (&other == this) {
        return *this;
    }

    if (this->capacity < other.capacity) {
        this->Clear();
        this->Resize(other.capacity);
    }
    if (this->capacity > 0) {
        if (other.buffer != NULL) {
            memcpy(this->buffer, other.buffer, (other.capacity + 1) * sizeof(UnicodeChar));
        } else {
            this->buffer[0] = 0;
        }
    }
    return *this;
}

GARBAGE_INSTR("nop");

void UnicodeString::operator+=(UnicodeString const &other) {
    int length = this->Length();
    int other_length = other.Length();
    int new_capacity = length + other_length;

    if (new_capacity > 0) {
        UnicodeChar* new_buff = new UnicodeChar[new_capacity + 1];

        memcpy(new_buff, this->buffer, length * sizeof(UnicodeChar));
        memcpy(&new_buff[length], other.buffer, other_length * sizeof(UnicodeChar));
        new_buff[new_capacity] = 0;

        this->Clear();
        this->buffer = new_buff;
        this->capacity = new_capacity;
    }
}

void UnicodeString::operator+=(UnicodeChar const &w) {
    UnicodeString sp00;

    sp00.Resize(1);
    sp00[0] = w;
    *this += sp00;
}

GARBAGE_INSTR("addiu       $29, $29, 0x60");

const u16 &UnicodeString::operator[](int index) const {
    ASSERT(index < Length() + 1, "../../src/strings/UnicodeString.cpp", 286);

    return this->buffer[index];
}

u16 &UnicodeString::operator[](int index) {
    ASSERT(index < Length() + 1, "../../src/strings/UnicodeString.cpp", 304);

    return this->buffer[index];
}

void UnicodeString::Append(UnicodeChar const &w) {
    int length = this->Length();

    if (this->capacity < length + 2) {
        UnicodeChar* new_buff = new UnicodeChar[length + 2];

        memcpy(new_buff, this->buffer, length * sizeof(UnicodeChar));

        this->Clear();
        this->buffer = new_buff;
        this->capacity = length + 1;
    }

    this->buffer[length] = w;
    this->buffer[length + 1] = 0;
}

void UnicodeString::Clear(void) {
    if (this->buffer != NULL) {
        delete[] this->buffer;
        this->buffer = NULL;
    }
    this->capacity = 0;
}

int UnicodeString::FindFirstSubstring(UnicodeString const &sub) const {
    int sub_length = sub.Length();
    int end = this->Length() - sub_length + 1;

    for (int index = 0; index < end; index++) {
        bool found = true;

        for (int j = 0; j < sub_length; j++) {
            if ((*this)[index + j] != sub[j]) {
                found = false;
                break;
            }
        }

        if (found) {
            return index;
        }
    }

    return -1;
}

const UnicodeChar *UnicodeString::GetBuffer(void) {
    return this->buffer;
}

int UnicodeString::Length(void) const {
    if (this->buffer == NULL) {
        return 0;
    }

    int i;
    for (i = 0; this->buffer[i] != 0; i++) {
        ;
    }
    return i;
}

void UnicodeString::MakeAscii(char *dst, int size) const {
    int length = this->Length();
    ASSERT(size >= length + 1, "../../src/strings/UnicodeString.cpp", 437);

    int i;
    for (i = 0; i < this->Length(); i++) {
        UnicodeChar w = this->buffer[i];
        dst[i] = (w != (u8)this->buffer[i]) ? '?' : w;
    }
    dst[i] = 0;
}

GARBAGE_INSTR("addiu       $29, $29, 0x40");

// `extern` needed to avoid those strings from being optimized out
extern const char D_0048A3E0[] = "size >= Length() + 1";
extern const char D_0048A3F8[] = "lengthInBytes % sizeof(UnicodeChar) == 0";

void UnicodeString::ReadAscii(char const *src, int size) {
    this->Clear();
    if (size == -1) {
        size = strlen(src);
    }
    this->Resize(size);

    for (int index = 0; index < size; index++) {
        this->buffer[index] = src[index];
    }
    this->buffer[size] = 0;
}

void UnicodeString::ReadUnicode(UnicodeChar const *src, int size) {
    this->Clear();
    this->capacity = size;

    if (size < 0) {
        this->capacity = 0;
        while (src[this->capacity] != 0) {
            this->capacity++;
        }
    }

    this->Resize(this->capacity);
    memcpy(this->buffer, src, (this->capacity + 1) * sizeof(UnicodeChar));
    this->buffer[this->capacity] = 0;
}

GARBAGE_INSTR("addiu       $29, $29, 0x40");

void UnicodeString::Replace(UnicodeString const &old_sub, UnicodeString const &new_sub) {
    int old_sub_index = this->FindFirstSubstring(old_sub);

    if (old_sub_index != -1) {
        int length = this->Length();
        int old_length = old_sub.Length();

        UnicodeString left = this->Substring(0, old_sub_index);
        UnicodeString right = this->Substring(old_sub_index + old_length, length - old_sub_index - old_length);
        UnicodeString ret(left);

        ret += new_sub;
        ret += right;
        *this = ret;
    }
}

void UnicodeString::Resize(size_t new_capacity) {
    this->Clear();
    this->capacity = new_capacity;
    this->buffer = new UnicodeChar[new_capacity + 1];

    int end = this->capacity + 1;
    for (int index = 0; index < end; index++) {
        this->buffer[index] = 0;
    }
}

UnicodeString UnicodeString::Substring(size_t start, size_t end) const {
    UnicodeString ret;

    for (size_t index = start; index < start + end; index++) {
        ret += (*this)[index];
    }
    return ret;
}
