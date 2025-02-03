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

UNK_TYPE g_ScroobyMemoryCount = 0;

// TODO: inlining those strings produces a silly reorder
const char D_0048A310[] = "../../src/strings/pcstring.cpp";
const char D_0048A330[] = "szString";
const char D_0048A340[1] = {0};
const char D_0048A348[] = "iStart + iChars <= int( m_ichMac + 1 )";

PascalCString::PascalCString() {
    this->unk_C = 0x10;
    this->unk_4 = 0;
    this->unk_8 = 0;
    g_ScroobyMemoryCount += this->unk_8;
    this->unk_0 = NULL;
}

PascalCString::~PascalCString() {
    g_ScroobyMemoryCount -= this->unk_8;
    if (this->unk_0 != NULL) {
        delete [] this->unk_0;
    }
}

GARBAGE_INSTR("addiu       $29, $29, 0x30");

PascalCString::PascalCString(char const *arg1) {
    this->unk_C = 0x10;
    this->unk_8 = 0;
    if (arg1 != NULL) {
        this->unk_4 = strlen(arg1);
        this->AdjustMaxArraySize(this->unk_4 + 1);

        g_ScroobyMemoryCount += this->unk_8;

        this->unk_0 = new char[this->unk_8];
        strcpy(this->unk_0, arg1);
    } else {
        this->unk_0[0] = 0;
        this->unk_4 = 0;
    }
}

PascalCString::PascalCString(char arg1) {
    this->unk_8 = 0;
    this->unk_C = 0x10;
    this->unk_4 = 1;

    this->AdjustMaxArraySize(2);

    g_ScroobyMemoryCount += this->unk_8;

    this->unk_0 = new char[this->unk_8];
    this->unk_0[0] = arg1;
    this->unk_0[1] = 0;
}

PascalCString::PascalCString(PascalCString const &arg1) {
    this->unk_8 = 0;
    this->unk_C = arg1.unk_C;
    this->unk_4 = arg1.unk_4;
    this->AdjustMaxArraySize(arg1.unk_8);

    g_ScroobyMemoryCount += this->unk_8;

    this->unk_0 = new char[this->unk_8];
    strcpy(this->unk_0, arg1.unk_0);
}

PascalCString &PascalCString::operator=(PascalCString const &arg1) {
    if (this != &arg1) {
        g_ScroobyMemoryCount -= this->unk_8;

        if ((u32) this->unk_8 < (u32) (arg1.Length() + 1)) {
            this->AdjustMaxArraySize(arg1.unk_8);

            if (this->unk_0 != NULL) {
                delete [] this->unk_0;
            }
            this->unk_0 = new char[this->unk_8];
        }

        this->unk_C = arg1.unk_C;
        this->unk_4 = arg1.unk_4;
        g_ScroobyMemoryCount += this->unk_8;

        strcpy(this->unk_0, arg1.unk_0);
    }

    return *this;
}

PascalCString &PascalCString::operator=(char const *arg1) {
    if (arg1 != NULL) {
        this->unk_4 = strlen(arg1);
        this->Grow(this->unk_4);
        strcpy(this->unk_0, arg1);
    } else {
        this->unk_4 = 0;
        this->Grow(this->unk_4);
        this->unk_0[0] = 0;
    }

    return *this;
}

GARBAGE_INSTR("addiu       $29, $29, 0x30");

void PascalCString::Grow(unsigned int arg1) {
    if (arg1 < this->unk_8) {
        return;
    }

    if (this->unk_0 != NULL) {
        g_ScroobyMemoryCount -= this->unk_8;
    }

    this->AdjustMaxArraySize(arg1 + 1);
    g_ScroobyMemoryCount += this->unk_8;

    int temp_s0 = radMemorySetCurrentAllocator(1);
    char* temp_s2 = new char[this->unk_8];
    radMemorySetCurrentAllocator(temp_s0);

    if (temp_s2 == NULL) {
        __assert(D_0048A310, 319, D_0048A330);
    }

    if (this->unk_0 != NULL) {
        strcpy(temp_s2, this->unk_0);
        if (this->unk_0 != NULL) {
            delete [] this->unk_0;
        }
        this->unk_0 = NULL;
    }
    this->unk_0 = temp_s2;
}

PascalCString &PascalCString::operator+=(PascalCString const &arg1) {
    this->unk_4 += arg1.unk_4;
    this->Grow(this->unk_4);
    strcat(this->unk_0, arg1.unk_0);

    return *this;
}

PascalCString &PascalCString::operator+=(char const * arg1) {
    if (arg1 != NULL) {
        this->unk_4 += strlen(arg1);
        this->Grow(this->unk_4);
        strcat(this->unk_0, arg1);
    }

    return *this;
}

PascalCString &PascalCString::operator+=(char arg1) {
    this->unk_4 += 1;
    this->Grow(this->unk_4);
    this->unk_0[this->unk_4 - 1] = arg1;
    this->unk_0[this->unk_4] = 0;

    return *this;
}

GARBAGE_INSTR("addiu       $29, $29, 0x10");

bool PascalCString::operator==(char const *arg1) const {
    if (arg1 != NULL) {
        return strcmp(this->unk_0, arg1) == 0;
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
    return this->unk_4;
}

void PascalCString::Reserve(int arg1) {
    this->Grow(arg1);
}

PascalCString::operator char *(void) {
    return this->unk_0;
}

void PascalCString::AdjustMaxArraySize(unsigned int arg1) {
    if (this->unk_8 < arg1) {
        this->unk_8 = arg1 + this->unk_C;
    }
}

GARBAGE_INSTR("addiu       $29, $29, 0x30");
GARBAGE_INSTR("addiu       $29, $29, 0x50");

// extern const char D_0048A340[] = "";

PascalCString PascalCString::SubString(int arg2, int arg3) {
    s32 temp_s0;
    char* temp_s1;

    if ((this->unk_4 + 1) < (arg2 + arg3)) {
        __assert(D_0048A310, 950, D_0048A348);
    }

    temp_s0 = radMemorySetCurrentAllocator(1);
    temp_s1 = new char[arg3 + 1];
    radMemorySetCurrentAllocator(temp_s0);

    strncpy(temp_s1, this->unk_0 + arg2, arg3);

    temp_s1[arg3] = 0;

    temp_s0 = radMemorySetCurrentAllocator(1);
    PascalCString sp00(temp_s1);
    radMemorySetCurrentAllocator(temp_s0);

    if (temp_s1 != NULL) {
        delete [] temp_s1;
    }

    return sp00;
}

GARBAGE_INSTR("addiu       $29, $29, 0x30");

PascalCString PascalCString::StreamFirstWord(char arg2) {
    u32 var_s1;

    for (var_s1 = 0; var_s1 < this->unk_4; var_s1++) {
        if (this->unk_0[var_s1] == arg2) {
            break;
        }
    }

    PascalCString sp00 = this->SubString(0, var_s1);

    s32 temp_a3 = this->unk_4 - (var_s1 + 1);
    if (temp_a3 > 0) {
        *this = this->SubString(var_s1 + 1, temp_a3);
    } else {
        *this = D_0048A340;
    }

    return sp00;
}

bool PascalCString::Find(char arg1) {
    for (int var_v1 = 0; var_v1 < this->unk_4; var_v1++) {
        if (this->unk_0[var_v1] == arg1) {
            return true;
        }
    }
    return false;
}

bool PascalCString::EqualsInsensitive(char const *arg1) {
    if (this->unk_4 == strlen(arg1)) {
        return rstricmp(this->unk_0, arg1) == 0;
    }
    return false;
}

void PascalCString::Replace(PascalCString const &arg1, PascalCString const &arg2) {
    if (arg1.Length() > this->Length()) {
        return;
    }

    char* var_s1 = this->unk_0;
    char* var_s0 = strstr(var_s1, arg1.unk_0);

    if (var_s0 != NULL) {
        int temp_s4 = radMemorySetCurrentAllocator(1);
        PascalCString sp00(D_0048A340);

        while (var_s0 != NULL) {
            *var_s0 = 0;
            sp00 += var_s1;
            sp00 += arg2;
            var_s1 = &var_s0[arg1.Length()];
            var_s0 = strstr(var_s1, arg1.unk_0);
        }

        sp00 += var_s1;
        radMemorySetCurrentAllocator(temp_s4);
        *this = sp00;
    }
}

void PascalCString::ToUpper(void) {
    for (int var_s0 = 0; var_s0 < this->Length(); var_s0++) {
        this->unk_0[var_s0] = toupper(this->unk_0[var_s0]);
    }
}

GARBAGE_INSTR("addiu       $29, $29, 0x30");

PascalCString PascalCString::FullFilename(void) {
    int var_s1;

    for (var_s1 = this->Length(); var_s1 >= 0; var_s1--) {
        if (this->unk_0[var_s1] == '/') {
            break;
        }
        if (this->unk_0[var_s1] == '\\') {
            break;
        }
    }

    int temp_s0 = radMemorySetCurrentAllocator(1);
    PascalCString sp00(&this->unk_0[var_s1] + 1);
    radMemorySetCurrentAllocator(temp_s0);

    return sp00;
}

PascalCString PascalCString::JustFilename(void) {
    //! @bug: this is an stack overflow waiting to happen
    char sp[0x20];
    int var_s0;

    for (var_s0 = this->Length(); var_s0 >= 0; var_s0--) {
        if (this->unk_0[var_s0] == '/') {
            break;
        }
        if (this->unk_0[var_s0] == '\\') {
            break;
        }
    }

    strcpy(sp, &this->unk_0[var_s0] + 1);

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
        if (this->unk_0[var_s0] == '.') {
            var_s2 = true;
            break;
        }
    }

    int temp_s3 = radMemorySetCurrentAllocator(1);
    PascalCString sp;
    if (var_s2) {
        sp = &this->unk_0[var_s0] + 1;
    } else {
        sp = D_0048A340;
    }
    radMemorySetCurrentAllocator(temp_s3);

    return sp;
}

PascalCString PascalCString::JustPath(void) {
    int var_a3;

    for (var_a3 = this->Length(); var_a3 > 0; var_a3--) {
        if (this->unk_0[var_a3] == '/') {
            break;
        }
        if (this->unk_0[var_a3] == '\\') {
            break;
        }
    }

    return this->SubString(0, var_a3);
}
