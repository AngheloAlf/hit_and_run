#include "libs/pure3d/pure3dpr/entity.hpp"

#include "include_asm.h"

#include "garbage_helper.h"

UNK_TYPE4 tName::s_allocator = 0;

tName::tName(): tUidUnaligned(0) {
}

tName::tName(char const *arg1): tUidUnaligned(0) {
    this->SetText(arg1);
}

tName::tName(tUidUnaligned arg1) {
    this->SetUID(arg1);
}

tName::tName(tName const &arg1) {
    this->SetUID(arg1);
}

tName::~tName(void) {
}

GARBAGE_INSTR("sw          $4, 0x0($2)");

void tName::SetText(char const * arg1) {
    if (arg1 != NULL) {
        this->SetUID(tName::MakeUID(arg1));
    } else {
        this->SetUID(0);
    }

    this->SetTextOnly(arg1);
}

void tName::SetTextOnly(char const *) {
}

void tName::SetUID(tUidUnaligned arg1) {
    this->unk_00 = arg1.unk_00;
    this->unk_04 = arg1.unk_04;
}

char D_00436570[] = "NO_NAME_TEXT";

const char *tName::GetText(void) const {
    return D_00436570;
}

#if 0
bool tName::operator==(tName const &arg1) const {
    /*
    ? sp10;

    __13tUidUnalignedRC13tUidUnaligned(sp);
    __13tUidUnalignedRC13tUidUnaligned(&sp10, arg0);
    __eq__C13tUidUnalignedG13tUidUnaligned(&sp10, sp);
    */
    return tUidUnaligned(*this) == tUidUnaligned(arg1);
}
#else
INCLUDE_ASM("asm/us_2003_07_10/nonmatchings/libs/pure3d/pure3dpr/entity", __eq__C5tNameRC5tName);
#endif

bool tName::operator!=(tName const &arg1) const {
    return !(*this == arg1);
}

tName &tName::operator=(tName const &arg1) {
    if (this != &arg1) {
        this->SetUID(arg1);
    }
    return *this;
}

#if 0
tUidUnaligned tName::MakeUID(char const *arg1) {
    tUidUnaligned sp0(0);

    if (arg1 != NULL) {
        while (*arg1 != '\0') {
            sp0 *= 0x1003F;
            sp0 = sp0 ^ tUidUnaligned ((u64)*arg1++);
        }
        return sp0;
    } else {
        return sp0;
    }
}
#else
INCLUDE_ASM("asm/us_2003_07_10/nonmatchings/libs/pure3d/pure3dpr/entity", MakeUID__5tNamePCc);
#endif

#if 0
tEntity::tEntity(void) {}
#else
INCLUDE_ASM("asm/us_2003_07_10/nonmatchings/libs/pure3d/pure3dpr/entity", __7tEntity);
#endif

GARBAGE_INSTR("addiu       $29, $29, 0x30");

#if 0
tEntity::~tEntity(void) {}
#else
INCLUDE_ASM("asm/us_2003_07_10/nonmatchings/libs/pure3d/pure3dpr/entity", _$_7tEntity);
#endif

void tEntity::CopyName(tEntity *arg1) {
    this->unk_08 = arg1->unk_08;
}

const char *tEntity::GetNameDangerous(void) {
    return this->unk_08.GetText();
}

INCLUDE_RODATA("asm/us_2003_07_10/nonmatchings/libs/pure3d/pure3dpr/entity", D_0048D3A8);

INCLUDE_RODATA("asm/us_2003_07_10/nonmatchings/libs/pure3d/pure3dpr/entity", _vt$7tEntity);

INCLUDE_ASM("asm/us_2003_07_10/nonmatchings/libs/pure3d/pure3dpr/entity", __tf7tEntity);

INCLUDE_ASM("asm/us_2003_07_10/nonmatchings/libs/pure3d/pure3dpr/entity", func_0031E148);
