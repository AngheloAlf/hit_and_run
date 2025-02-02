#include "libs/scrooby/scroobypr/UnicodeString.hpp"

#include "garbage_helper.h"
#include "include_asm.h"

#include "sce_libs/gcc/ee/libg/assert.h"
#include "sce_libs/gcc/ee/libg/memcpy.h"
#include "sce_libs/gcc/ee/libg/strlen.h"

// probably inline static
extern bool D_0043653C;

void test(void) {
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

UnicodeString::UnicodeString(UnicodeString const &arg1) {
    this->buffer = NULL;
    if (this != &arg1) {
        this->Clear();
        *this = arg1;
    }
}

UnicodeString::UnicodeString(char const *arg1) {
    this->buffer = NULL;
    this->ReadAscii(arg1, strlen(arg1));
}

UnicodeString::~UnicodeString(void) {
    this->Clear();
}

UnicodeString &UnicodeString::operator=(UnicodeString const &arg1) {
    if (&arg1 == this) {
        return *this;
    }

    if (this->unk_4 < arg1.unk_4) {
        this->Clear();
        this->Resize(arg1.unk_4);
    }
    if (this->unk_4 > 0) {
        if (arg1.buffer != NULL) {
            memcpy(this->buffer, arg1.buffer, (arg1.unk_4 + 1) * 2);
        } else {
            this->buffer[0] = 0;
        }
    }
    return *this;
}

GARBAGE_INSTR("nop");

void UnicodeString::operator+=(UnicodeString const &arg1) {
    s32 temp_s1 = this->Length();
    s32 temp_v0 = arg1.Length();
    s32 temp_s2 = temp_s1 + temp_v0;

    if (temp_s2 > 0) {
        u16* temp_v0_2 = new u16[temp_s2 + 1];
        memcpy(temp_v0_2, this->buffer, temp_s1 * 2);
        memcpy(&temp_v0_2[temp_s1], arg1.buffer, temp_v0 * 2);
        temp_v0_2[temp_s2] = 0;
        this->Clear();
        this->buffer = temp_v0_2;
        this->unk_4 = temp_s2;
    }
}

void UnicodeString::operator+=(unsigned short const &arg1) {
    UnicodeString sp00;

    sp00.Resize(1);
    sp00[0] = arg1;
    *this += sp00;
}

GARBAGE_INSTR("addiu       $29, $29, 0x60");

const u16 &UnicodeString::operator[](int arg1) const {
    if (arg1 >= (this->Length() + 1)) {
        __assert("../../src/strings/UnicodeString.cpp", 0x11E, "index < Length() + 1");
    }
    return this->buffer[arg1];
}

u16 &UnicodeString::operator[](int arg1) {
    if (arg1 >= (this->Length() + 1)) {
        __assert("../../src/strings/UnicodeString.cpp", 0x130, "index < Length() + 1");
    }
    return this->buffer[arg1];
}

void UnicodeString::Append(unsigned short const &arg1) {
    s32 temp_v0 = this->Length();
    s32 temp_a0 = temp_v0 + 2;

    if (this->unk_4 < temp_a0) {
        u16* temp_v0_2 = new u16[temp_a0];

        memcpy(temp_v0_2, this->buffer, temp_v0 * 2);
        this->Clear();
        this->buffer = temp_v0_2;
        this->unk_4 = (s32) (temp_v0 + 1);
    }
    this->buffer[temp_v0] = arg1;
    this->buffer[temp_v0+1] = 0;
}

void UnicodeString::Clear(void) {
    if (this->buffer != NULL) {
        delete[] this->buffer;
        this->buffer = NULL;
    }
    this->unk_4 = 0;
}

int UnicodeString::FindFirstSubstring(UnicodeString const &arg1) const {
    s32 temp_s4 = arg1.Length();
    s32 temp_s3 = this->Length() - temp_s4 + 1;

    for (int var_s1 = 0; var_s1 < temp_s3; var_s1++) {
        bool var_s7 = true;

        for (s32 var_s2 = 0; var_s2 < temp_s4; var_s2++) {
            if ((*this)[var_s1 + var_s2] != arg1[var_s2]) {
                var_s7 = false;
                break;
            }
        }

        if (var_s7) {
            return var_s1;
        }
    }

    return -1;
}

const u16 *UnicodeString::GetBuffer(void) {
    return this->buffer;
}

int UnicodeString::Length(void) const {
    int var_v1;

    if (this->buffer == NULL) {
        return 0;
    }

    for (var_v1 = 0; this->buffer[var_v1] != 0; var_v1++) {
        ;
    }
    return var_v1;
}

void UnicodeString::MakeAscii(char *arg1, int arg2) const {
    s32 i;

    if (arg2 < (this->Length() + 1)) {
        __assert("../../src/strings/UnicodeString.cpp", 0x1B5, "size >= length + 1");
    }

    for (i = 0; i < this->Length(); i++) {
        // Around here:
        u16 w = this->buffer[i];
        arg1[i] = (w  != (u8)this->buffer[i]) ? '?' : w;
    }
    arg1[i] = 0;
}

GARBAGE_INSTR("addiu       $29, $29, 0x40");

// `extern` needed to avoid those strings from being optimized out
extern const char D_0048A3E0[] = "size >= Length() + 1";
extern const char D_0048A3F8[] = "lengthInBytes % sizeof(UnicodeChar) == 0";

void UnicodeString::ReadAscii(char const *arg1, int arg2) {
    s32 var_a1;

    this->Clear();
    if (arg2 == -1) {
        arg2 = strlen(arg1);
    }
    this->Resize(arg2);
    var_a1 = 0;
    while (var_a1 < arg2) {
        this->buffer[var_a1] = arg1[var_a1];
        var_a1 += 1;
    }
    this->buffer[arg2] = 0;
}

void UnicodeString::ReadUnicode(unsigned short const *arg1, int arg2) {
    this->Clear();
    this->unk_4 = arg2;
    if (arg2 < 0) {
        this->unk_4 = 0;
        while (arg1[this->unk_4] != 0) {
            this->unk_4 = this->unk_4 + 1;
        }
    }
    this->Resize(this->unk_4);
    memcpy(this->buffer, arg1, (this->unk_4 + 1) * 2);
    this->buffer[this->unk_4] = 0;
}

GARBAGE_INSTR("addiu       $29, $29, 0x40");

void UnicodeString::Replace(UnicodeString const &arg1, UnicodeString const &arg2) {
    s32 temp_s0;
    s32 temp_s2;
    int temp_v0;

    temp_v0 = this->FindFirstSubstring(arg1);
    if (temp_v0 != -1) {
        temp_s0 = this->Length();
        temp_s2 = arg1.Length();

        UnicodeString sp00 = this->Substring(0, temp_v0);
        UnicodeString sp10 = this->Substring(temp_v0 + temp_s2, (temp_s0 - temp_v0) - temp_s2);
        UnicodeString sp20(sp00);

        sp20 += arg2;
        sp20 += sp10;
        *this = sp20;
    }
}

void UnicodeString::Resize(unsigned int arg1) {
    this->Clear();
    this->unk_4 = arg1;
    this->buffer = new u16[arg1 + 1];

    s32 end = this->unk_4 + 1;
    for (s32 var_a0 = 0; var_a0 < end; var_a0++) {
        this->buffer[var_a0] = 0;
    }
}

UnicodeString UnicodeString::Substring(unsigned int arg2, unsigned int arg3) const {
    UnicodeString sp00;

    for (u32 var_s0 = arg2; var_s0 < arg2 + arg3; var_s0++) {
        sp00 += (*this)[var_s0];
    }
    return sp00;
}
