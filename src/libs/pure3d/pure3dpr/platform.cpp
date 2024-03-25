#include "libs/pure3d/pure3dpr/platform.hpp"

#include "include_asm.h"

#include "libs/pure3d/pure3dpr/utility.hpp"
#include "libs/pure3d/pure3dpr/memory.hpp"
#include "libs/pure3d/pure3dpr/error.hpp"

// bss

extern tPlatform D_004B2DE8;


INCLUDE_ASM("asm/us_2003_07_10/nonmatchings/libs/pure3d/pure3dpr/platform", func_003120E8);

tContextInitData::tContextInitData(void) {
    this->unk_00 = 0x280;
    this->unk_04 = 0;
    this->unk_08 = 0;
    this->unk_0C = 1;
    this->unk_1C = 0;
    this->unk_18 = 0;
    this->unk_14 = 0;

    //! @bug unitialized this->unk_10
}

tPlatform::tPlatform(void) {
    this->unk_0 = NULL;
}

tPlatform::~tPlatform(void) {
}

void tPlatform::Create(void) {
    p3d::platform = &D_004B2DE8;
}

INCLUDE_RODATA("asm/us_2003_07_10/nonmatchings/libs/pure3d/pure3dpr/platform", D_0048C9B8);

tContext *tPlatform::CreateContext(tContextInitData *arg1) {
    pddiDevice *sp0 = NULL;
    pddiRenderContext *temp_s0;
    pddiDisplay *temp_v0_2;

    p3d::printf("Pure3D v%s, released %s\n", "2.0", "10-Dec-2002");

    p3d::UsePermanentMem(true);

    pddiCreate(0x11, 2, &sp0);
    tDebug::CapturePDDIMessages(sp0);

    temp_v0_2 = sp0->virtual_44(0);
    temp_v0_2->virtual_34(arg1);
    temp_s0 = sp0->virtual_4C(temp_v0_2);

    this->unk_0 = new tContext(sp0, temp_v0_2, temp_s0);
    this->unk_0->Setup();

    p3d::context = this->unk_0;
    p3d::inventory = this->unk_0->unk_00;

    p3d::stack = this->unk_0->GetMatrixStack(P3DMATRIXTYPE_0);
    p3d::loadManager = this->unk_0->unk_04;
    p3d::pddi = this->unk_0->unk_EC;
    p3d::device = this->unk_0->unk_E8;
    p3d::display = this->unk_0->unk_F0;


    p3d::UsePermanentMem(false);

    return this->unk_0;
}

tPlatform *tPlatform::GetPlatform(void) {
    return &D_004B2DE8;
}

INCLUDE_ASM("asm/us_2003_07_10/nonmatchings/libs/pure3d/pure3dpr/platform", func_003122E8);

INCLUDE_ASM("asm/us_2003_07_10/nonmatchings/libs/pure3d/pure3dpr/platform", _GLOBAL_$I$malloc_uncached__Fi);

INCLUDE_ASM("asm/us_2003_07_10/nonmatchings/libs/pure3d/pure3dpr/platform", _GLOBAL_$D$malloc_uncached__Fi);
