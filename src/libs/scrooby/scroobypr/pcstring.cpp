#include "libs/scrooby/scroobypr/pcstring.hpp"

#include "garbage_helper.h"
#include "include_asm.h"

#include "sce_libs/gcc/ee/libg/assert.h"
#include "sce_libs/gcc/ee/libg/ctype_.h"
#include "sce_libs/gcc/ee/libg/strcat.h"
#include "sce_libs/gcc/ee/libg/strcmp.h"
#include "sce_libs/gcc/ee/libg/strcpy.h"
#include "sce_libs/gcc/ee/libg/strlen.h"
#include "sce_libs/gcc/ee/libg/strncpy.h"
#include "sce_libs/gcc/ee/libg/strstr.h"

#include "libs/radcore/radcorepr/memorymanager.hpp"

#include "libs/scrooby/scroobypr/stricmp.hpp"

size_t g_ScroobyMemoryCount = 0;

PascalCString::PascalCString() {
    this->unk_C = 0x10;
    this->m_ichMac = 0;
    this->capacity = 0;
    g_ScroobyMemoryCount += this->capacity;
    this->buffer = NULL;
}

PascalCString::~PascalCString() {
    g_ScroobyMemoryCount -= this->capacity;
    if (this->buffer != NULL) {
        delete [] this->buffer;
    }
}

GARBAGE_INSTR("addiu       $29, $29, 0x30");

PascalCString::PascalCString(char const *arg1) {
    this->unk_C = 0x10;
    this->capacity = 0;
    if (arg1 != NULL) {
        this->m_ichMac = strlen(arg1);
        this->AdjustMaxArraySize(this->m_ichMac + 1);

        g_ScroobyMemoryCount += this->capacity;

        this->buffer = new char[this->capacity];
        strcpy(this->buffer, arg1);
    } else {
        this->buffer[0] = 0;
        this->m_ichMac = 0;
    }
}

PascalCString::PascalCString(char arg1) {
    this->capacity = 0;
    this->unk_C = 0x10;
    this->m_ichMac = 1;

    this->AdjustMaxArraySize(2);

    g_ScroobyMemoryCount += this->capacity;

    this->buffer = new char[this->capacity];
    this->buffer[0] = arg1;
    this->buffer[1] = 0;
}

PascalCString::PascalCString(PascalCString const &arg1) {
    this->capacity = 0;
    this->unk_C = arg1.unk_C;
    this->m_ichMac = arg1.m_ichMac;
    this->AdjustMaxArraySize(arg1.capacity);

    g_ScroobyMemoryCount += this->capacity;

    this->buffer = new char[this->capacity];
    strcpy(this->buffer, arg1.buffer);
}

PascalCString &PascalCString::operator=(PascalCString const &arg1) {
    if (this != &arg1) {
        g_ScroobyMemoryCount -= this->capacity;

        if (this->capacity < arg1.Length() + 1) {
            this->AdjustMaxArraySize(arg1.capacity);

            if (this->buffer != NULL) {
                delete [] this->buffer;
            }
            this->buffer = new char[this->capacity];
        }

        this->unk_C = arg1.unk_C;
        this->m_ichMac = arg1.m_ichMac;
        g_ScroobyMemoryCount += this->capacity;

        strcpy(this->buffer, arg1.buffer);
    }

    return *this;
}

PascalCString &PascalCString::operator=(char const *arg1) {
    if (arg1 != NULL) {
        this->m_ichMac = strlen(arg1);
        this->Grow(this->m_ichMac);
        strcpy(this->buffer, arg1);
    } else {
        this->m_ichMac = 0;
        this->Grow(this->m_ichMac);
        this->buffer[0] = 0;
    }

    return *this;
}

GARBAGE_INSTR("addiu       $29, $29, 0x30");

void PascalCString::Grow(size_t arg1) {
    if (arg1 < this->capacity) {
        return;
    }

    if (this->buffer != NULL) {
        g_ScroobyMemoryCount -= this->capacity;
    }

    this->AdjustMaxArraySize(arg1 + 1);
    g_ScroobyMemoryCount += this->capacity;

    int temp_s0 = radMemorySetCurrentAllocator(1);
    char* szString = new char[this->capacity]();
    radMemorySetCurrentAllocator(temp_s0);

    ASSERT(szString, "../../src/strings/pcstring.cpp", 319);

    if (this->buffer != NULL) {
        strcpy(szString, this->buffer);
        if (this->buffer != NULL) {
            delete [] this->buffer;
        }
        this->buffer = NULL;
    }
    this->buffer = szString;
}

PascalCString &PascalCString::operator+=(PascalCString const &arg1) {
    this->m_ichMac += arg1.m_ichMac;
    this->Grow(this->m_ichMac);
    strcat(this->buffer, arg1.buffer);

    return *this;
}

PascalCString &PascalCString::operator+=(char const * arg1) {
    if (arg1 != NULL) {
        this->m_ichMac += strlen(arg1);
        this->Grow(this->m_ichMac);
        strcat(this->buffer, arg1);
    }

    return *this;
}

PascalCString &PascalCString::operator+=(char arg1) {
    this->m_ichMac += 1;
    this->Grow(this->m_ichMac);
    this->buffer[this->m_ichMac - 1] = arg1;
    this->buffer[this->m_ichMac] = 0;

    return *this;
}

GARBAGE_INSTR("addiu       $29, $29, 0x10");

bool PascalCString::operator==(char const *arg1) const {
    if (arg1 != NULL) {
        return strcmp(this->buffer, arg1) == 0;
    }
    return false;
}

GARBAGE_INSTR("addiu       $29, $29, 0x10");

bool PascalCString::operator!=(char const *arg1) const {
    return !(*this == arg1);
}

GARBAGE_INSTR("addiu       $29, $29, 0x10");
GARBAGE_INSTR("addiu       $29, $29, 0x10");
GARBAGE_INSTR("addiu       $29, $29, 0x10");
GARBAGE_INSTR("addiu       $29, $29, 0x10");
GARBAGE_INSTR("addiu       $29, $29, 0x10");
GARBAGE_INSTR("addiu       $29, $29, 0x10");
GARBAGE_INSTR("addiu       $29, $29, 0x10");
GARBAGE_INSTR("addiu       $29, $29, 0x10");
GARBAGE_INSTR("addu        $2, $2, $5");

int PascalCString::Length() const {
    return this->m_ichMac;
}

void PascalCString::Reserve(int arg1) {
    this->Grow(arg1);
}

PascalCString::operator char *(void) {
    return this->buffer;
}

void PascalCString::AdjustMaxArraySize(size_t arg1) {
    if (0) {
        // Optimized out usage of an empty string.
        // It probably doesn't belong in this function, but it must be placed anywhere between the
        // last string from `PascalCString::Grow` and before the first string from PascalCString::SubString.
        // There's no evidence that this usage may have been an strcmp.
        strcmp("", "");
    }

    if (this->capacity < arg1) {
        this->capacity = arg1 + this->unk_C;
    }
}

GARBAGE_INSTR("addiu       $29, $29, 0x30");
GARBAGE_INSTR("addiu       $29, $29, 0x50");

PascalCString PascalCString::SubString(int iStart, int iChars) {
    ASSERT(iStart + iChars <= int( m_ichMac + 1 ), "../../src/strings/pcstring.cpp", 950);

    int allocator = radMemorySetCurrentAllocator(1);
    char* new_buff = new char[iChars + 1];
    radMemorySetCurrentAllocator(allocator);

    strncpy(new_buff, &this->buffer[iStart], iChars);
    new_buff[iChars] = '\0';

    allocator = radMemorySetCurrentAllocator(1);
    PascalCString sp00(new_buff);
    radMemorySetCurrentAllocator(allocator);

    if (new_buff != NULL) {
        delete [] new_buff;
    }

    return sp00;
}

GARBAGE_INSTR("addiu       $29, $29, 0x30");

PascalCString PascalCString::StreamFirstWord(char arg2) {
    u32 var_s1;

    for (var_s1 = 0; var_s1 < this->m_ichMac; var_s1++) {
        if (this->buffer[var_s1] == arg2) {
            break;
        }
    }

    PascalCString sp00 = this->SubString(0, var_s1);

    s32 temp_a3 = this->m_ichMac - (var_s1 + 1);
    if (temp_a3 > 0) {
        *this = this->SubString(var_s1 + 1, temp_a3);
    } else {
        *this = "";
    }

    return sp00;
}

bool PascalCString::Find(char arg1) {
    for (int var_v1 = 0; var_v1 < this->m_ichMac; var_v1++) {
        if (this->buffer[var_v1] == arg1) {
            return true;
        }
    }
    return false;
}

bool PascalCString::EqualsInsensitive(char const *arg1) {
    if (this->m_ichMac == strlen(arg1)) {
        return rstricmp(this->buffer, arg1) == 0;
    }
    return false;
}

void PascalCString::Replace(PascalCString const &arg1, PascalCString const &arg2) {
    if (arg1.Length() > this->Length()) {
        return;
    }

    char* var_s1 = this->buffer;
    char* var_s0 = strstr(var_s1, arg1.buffer);

    if (var_s0 != NULL) {
        int temp_s4 = radMemorySetCurrentAllocator(1);
        PascalCString sp00("");

        while (var_s0 != NULL) {
            *var_s0 = 0;
            sp00 += var_s1;
            sp00 += arg2;
            var_s1 = &var_s0[arg1.Length()];
            var_s0 = strstr(var_s1, arg1.buffer);
        }

        sp00 += var_s1;
        radMemorySetCurrentAllocator(temp_s4);
        *this = sp00;
    }
}

void PascalCString::ToUpper(void) {
    for (int var_s0 = 0; var_s0 < this->Length(); var_s0++) {
        this->buffer[var_s0] = toupper(this->buffer[var_s0]);
    }
}

GARBAGE_INSTR("addiu       $29, $29, 0x30");

PascalCString PascalCString::FullFilename(void) {
    int var_s1;

    for (var_s1 = this->Length(); var_s1 >= 0; var_s1--) {
        if (this->buffer[var_s1] == '/') {
            break;
        }
        if (this->buffer[var_s1] == '\\') {
            break;
        }
    }

    int temp_s0 = radMemorySetCurrentAllocator(1);
    PascalCString sp00(&this->buffer[var_s1] + 1);
    radMemorySetCurrentAllocator(temp_s0);

    return sp00;
}

PascalCString PascalCString::JustFilename(void) {
    //! @bug: this is an stack overflow waiting to happen
    char sp[0x20];
    int var_s0;

    for (var_s0 = this->Length(); var_s0 >= 0; var_s0--) {
        if (this->buffer[var_s0] == '/') {
            break;
        }
        if (this->buffer[var_s0] == '\\') {
            break;
        }
    }

    strcpy(sp, &this->buffer[var_s0] + 1);

    for (var_s0 = 0; var_s0 < (s32)strlen(sp); var_s0++) {
        if (sp[var_s0] == '.') {
            sp[var_s0] = 0;
            break;
        }
    }

    PascalCString sp20(sp);
    return sp20;
}

PascalCString PascalCString::JustExtension(void) {
    bool var_s2 = false;
    int var_s0;

    for (var_s0 = this->Length(); var_s0 > 0; var_s0--) {
        if (this->buffer[var_s0] == '.') {
            var_s2 = true;
            break;
        }
    }

    int temp_s3 = radMemorySetCurrentAllocator(1);
    PascalCString sp;
    if (var_s2) {
        sp = &this->buffer[var_s0] + 1;
    } else {
        sp = "";
    }
    radMemorySetCurrentAllocator(temp_s3);

    return sp;
}

PascalCString PascalCString::JustPath(void) {
    int var_a3;

    for (var_a3 = this->Length(); var_a3 > 0; var_a3--) {
        if (this->buffer[var_a3] == '/') {
            break;
        }
        if (this->buffer[var_a3] == '\\') {
            break;
        }
    }

    return this->SubString(0, var_a3);
}
