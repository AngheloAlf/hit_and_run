#include "libs/radcontent/radcontentpr/object.hpp"

#include "include_asm.h"

#include "garbage_helper.h"

UNK_TYPE4 radLoadObject::s_allocator = 0;

radLoadObject::radLoadObject(void) : reference_count(0) {
}

// vt shenaningans
#if 0
radLoadObject::~radLoadObject(void) {
}
#else
INCLUDE_ASM("asm/us_2003_07_10/nonmatchings/libs/radcontent/radcontentpr/object", _$_13radLoadObject);
#endif

#if 0
void radLoadObject::AddRef(void) {
    this->reference_count++;
}
#else
INCLUDE_ASM("asm/us_2003_07_10/nonmatchings/libs/radcontent/radcontentpr/object", AddRef__13radLoadObject);
#endif

#if 0
void radLoadObject::Release(void) {
    if (this->reference_count <= 1) {
        this->reference_count = 0x08000000;
        delete this;
    } else {
        this->reference_count--;
    }
}
#else
INCLUDE_ASM("asm/us_2003_07_10/nonmatchings/libs/radcontent/radcontentpr/object", Release__13radLoadObject);
#endif

void radLoadObject::ReleaseVerified(void) {
    radLoadObject::Release();
}

void *radLoadObject::operator new(size_t size) {
    //! @bug? using `new []` here and plain `delete` in the overloaded operator
    // sounds like a bug waiting to happen.
    return new char[size];
}

void *radLoadObject::operator new(size_t size, int) {
    return new char[size];
}

GARBAGE_INSTR("addiu       $29, $29, 0x10");
GARBAGE_INSTR("addiu       $29, $29, 0x10");


void radLoadObject::operator delete(void *ptr) {
    delete (char *)ptr;
}

GARBAGE_INSTR("addiu       $29, $29, 0x10");

INCLUDE_RODATA("asm/us_2003_07_10/nonmatchings/libs/radcontent/radcontentpr/object", _vt$13radLoadObject);

INCLUDE_ASM("asm/us_2003_07_10/nonmatchings/libs/radcontent/radcontentpr/object", __tf13radLoadObject);

GARBAGE_INSTR("sw          $3, 0x0($4)");
GARBAGE_INSTR("addiu       $29, $29, 0x20");
