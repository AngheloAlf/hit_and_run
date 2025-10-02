#include "libs/pure3d/pure3dpr/multicontroller.hpp"

#include "include_asm.h"

#include "garbage_helper.h"

#include "libs/radLoadInventory.hpp"

#include "libs/pure3d/pure3dpr/platform.hpp"
#include "libs/pure3d/pure3dpr/utility.hpp"

tMultiController::tMultiController(int arg1, float arg2) {
    size_t i;

    this->unk_18 = arg2;
    this->unk_14 = 0.0f;
    this->unk_1C = 0;
    this->unk_30 = arg1;
    this->unk_20 = 0.0f;
    this->unk_2C = P3DCYCLEMODE_0;
    this->unk_28 = 1.0f;
    this->unk_24 = 1.0f;

    this->unk_34 = new tMultiController_unk_34[this->unk_30];
    this->unk_38 = new tFrameController * [this->unk_30];

    for (i = 0; i < this->unk_30; i++) {
        this->unk_38[i] = NULL;
    }

    this->unk_10 = 0.0f;
    this->unk_3C = 0;
}

// Triggers virtual table generation
#if 0
tMultiController::~tMultiController(void) {
    size_t i;

    for (i = 0; i < this->unk_30; i++) {
        tFrameController* temp_3 = this->unk_38[i];

        if (temp_3 != NULL) {
            temp_3->Release();
        }
    }

    delete [] this->unk_34;
    delete [] this->unk_38;

}
#else
INCLUDE_ASM("asm/us_2003_07_10/nonmatchings/libs/pure3d/pure3dpr/multicontroller", _$_16tMultiController);
#endif

s32 tMultiController::Clone(void) {
    return 0;
}

#ifdef NON_MATCHING
// float regalloc
void tMultiController::Advance(float arg1, bool arg2) {
    this->unk_10 += arg1 * this->unk_28;
    this->unk_20 += this->unk_10;
    if (arg2) {
        this->virtual_84(arg1 * this->unk_28);
    }
}
#else
INCLUDE_ASM("asm/us_2003_07_10/nonmatchings/libs/pure3d/pure3dpr/multicontroller", Advance__16tMultiControllerfb);
#endif

bool D_00436614 = true;
bool D_00436615 = true;

void tMultiController::SetFrame(float arg1) {
    float temp_f5;
    size_t var_17;
    float dunno;

    if ((arg1 != 0.0f) && D_00436614) {
        D_00436614 = false;
    }

    this->unk_10 = 0;
    this->unk_1C = 0;
    this->unk_20 = (arg1 / this->unk_24) * 1000.0f;
    temp_f5 = (this->unk_18 / this->unk_24) * 1000.0f;
    dunno = ((this->unk_18 - this->unk_14) / this->unk_24) * 1000.0f;
    switch (this->unk_2C) {
    case P3DCYCLEMODE_0:
        break;

    case P3DCYCLEMODE_1:
        while (temp_f5 <= this->unk_20) {
            this->unk_20 -= dunno;
        }
        break;
    case P3DCYCLEMODE_2:
        if (temp_f5 < this->unk_20) {
            this->unk_20 = temp_f5;
        }
        break;
    }

    for (var_17 = 0; var_17 < this->unk_30; var_17++) {
        tFrameController *temp_6 = this->unk_38[var_17];

        if (temp_6 != NULL) {
            temp_6->virtual_44(arg1 + this->unk_34[var_17].unk_08);
        }
    }
}

float tMultiController::GetFrame() {
    return this->unk_20 * this->unk_24 * 0.001f;
}

#if 0
void tMultiController::SetFrameRange(float arg1, float arg2) {
    D_00436615 = false;

    this->unk_14 = this->unk_14 > arg1 ? this->unk_14 : arg1;
    this->unk_18 = this->unk_18 > arg2 ? this->unk_18 : arg2;

    for (size_t var_16 = 0; var_16 < this->unk_30; var_16++) {
        tFrameController *temp_3;
        temp_3 = this->unk_38[var_16];
        if (temp_3 != NULL) {
            temp_3->virtual_54(arg1, arg2);
        }
    }
}
#else
INCLUDE_ASM("asm/us_2003_07_10/nonmatchings/libs/pure3d/pure3dpr/multicontroller", SetFrameRange__16tMultiControllerff);
#endif

INCLUDE_RODATA("asm/us_2003_07_10/nonmatchings/libs/pure3d/pure3dpr/multicontroller", R_00492700);
INCLUDE_RODATA("asm/us_2003_07_10/nonmatchings/libs/pure3d/pure3dpr/multicontroller", R_STR_00492708);
INCLUDE_RODATA("asm/us_2003_07_10/nonmatchings/libs/pure3d/pure3dpr/multicontroller", R_STR_00492768);

GARBAGE_INSTR("swc1        $f0, 0x0($6)");

const tFrameController *tMultiController::GetTrack(size_t arg1) {
    if (arg1 >= this->unk_30) {
        return NULL;
    }
    return this->unk_38[arg1];
}

// regalloc
#if 0
void tMultiController::SetTrack(size_t arg1, tFrameController *arg2) {
    if (arg1 < this->unk_30) {
        tFrameController **temp_17;
        temp_17 = &this->unk_38[arg1];

        if (arg2 != NULL) {
            arg2->AddRef();
        }
        if (*temp_17 != NULL) {
            (*temp_17)->Release();
        }
        *temp_17 = arg2;
    }
}
#else
INCLUDE_ASM("asm/us_2003_07_10/nonmatchings/libs/pure3d/pure3dpr/multicontroller", SetTrack__16tMultiControllerUiP16tFrameController);
#endif

GARBAGE_INSTR("addiu       $29, $29, 0x50");

void tMultiController::Update(void) {
    f32 temp_f20;
    f32 temp_f3_2;
    s32 var_19;
    u32 var_17;
    float dunno;

    if (this->unk_20 < 0.0f) {
        this->unk_20 = 0.0f;
    }

    temp_f3_2 = (this->unk_18 / this->unk_24) * 1000.0f;
    temp_f20 = (this->unk_14 / this->unk_24) * 1000.0f;
    dunno = temp_f3_2 - temp_f20;

    switch (this->unk_2C) {
    case P3DCYCLEMODE_1:
        var_19 = 0;
        while (temp_f3_2 <= this->unk_20) {
            var_19 = 1;
            this->unk_20 -= dunno;
            this->unk_1C += 1;
        }

        var_17 = 0;
        while (var_17 < this->unk_30) {
            if (this->unk_38[var_17] != NULL) {
                if (var_19 != 0) {
                    this->unk_38[var_17]->virtual_44(this->unk_34[var_17].unk_08);
                    this->unk_38[var_17]->virtual_24(1, this->unk_20 - temp_f20);
                } else {
                    this->unk_38[var_17]->virtual_24(1, this->unk_10);
                }
            }
            var_17 += 1;
        }
        break;
    case P3DCYCLEMODE_2:
        if (this->unk_20 <= temp_f3_2) {
            var_17 = 0;
            while (var_17 < this->unk_30) {
                if (this->unk_38[var_17] != NULL) {
                    this->unk_38[var_17]->virtual_24(1, this->unk_10);
                }
                var_17 += 1;
            }
        } else {
            this->unk_1C = 1;
        }
        break;

    case P3DCYCLEMODE_0:
    default:
        this->unk_1C = 1;
        var_17 = 0;
        while (var_17 < this->unk_30) {
            if (this->unk_38[var_17] != NULL) {
                this->unk_38[var_17]->virtual_24(1, this->unk_10);
                this->unk_1C &= this->unk_38[var_17]->virtual_74();
            }

            var_17 += 1;
        }
        break;
    }

    this->unk_10 = 0.0f;
}

#if 0
tMultiControllerLoader::tMultiControllerLoader(void) {
    this->unk_08 = 0x48A0;
    this->unk_10 = 0;
}
#else
INCLUDE_ASM("asm/us_2003_07_10/nonmatchings/libs/pure3d/pure3dpr/multicontroller", __22tMultiControllerLoader);
#endif

#ifdef NON_EQUIVALENT
UNK_TYPE *tMultiControllerLoader::LoadObject(tChunkFile *arg1, tEntityStore *arg2) {
    char sp[0x100];
    size_t var_30 = 0;

    u8 sp100;
    arg1->unk_210->virtual_64(&sp100, 1, 1);
    u8 temp = sp100;
    arg1->unk_210->virtual_64(sp, temp, 1);
    sp[temp] = 0;

    UNK_TYPE sp270;
    arg1->unk_210->virtual_64(&sp270, 1, 4);

    float sp274;
    arg1->unk_210->virtual_64(&sp274, 1, 4);

    float sp278;
    arg1->unk_210->virtual_64(&sp278, 1, 4);
    float sp278_2 = sp278;

    int sp27C;
    arg1->unk_210->virtual_64(&sp27C, 1, 4);
    int sp27C_2 = sp27C;

    tMultiController *temp_2 = new tMultiController(sp27C_2, sp274);
    temp_2->unk_08.SetText(sp);
    temp_2->unk_24 = sp278_2;

    tFrameController *var_16;
    while (arg1->ChunksRemaining() != 0) {
        switch (arg1->BeginChunk()) {
        case 0x48A1:
            {
                tMultiController_unk_34 sp100;

                s32 sp280;
                arg1->unk_210->virtual_64(&sp280, 1, 4);

                for (size_t var_23 = sp280; var_23 > 0; var_23--) {
                    char sp110[0x200-0x110];

                    char sp210;
                    arg1->unk_210->virtual_64(&sp210, 1, 1);
                    u8 temp = sp210;
                    arg1->unk_210->virtual_64(sp110, temp, 1);
                    sp110[temp] = 0;

                    f32 sp284;
                    arg1->unk_210->virtual_64(&sp284, 1, 4);
                    sp100.unk_00 = sp284;

                    f32 sp288;
                    arg1->unk_210->virtual_64(&sp288, 1, 4);
                    sp100.unk_04 = sp288;

                    f32 sp28C;
                    arg1->unk_210->virtual_64(&sp28C, 1, 4);
                    sp100.unk_0C = sp28C;

                    {
                        tName sp220(sp110);

                        if ((sp220 == tName::MakeUID("")) || (sp220 == tName::MakeUID("NO_NAME_TEXT"))) {
                            var_16 = NULL;
                        } else {
                            radLoadInventory::SafeCast<tFrameController> sp230;

                            var_16 = arg2->virtual_24(sp230, sp220);
                            tInventory *temp_17 = tPlatform::GetPlatform().unk_0->unk_00;
                            if ((var_16 == NULL) && (temp_17 != arg2)) {
                                temp_17->virtual_24(sp230, sp220);
                            }
                        }
                    }

                    temp_2->SetTrack(var_30, var_16);

                    {
                        tName sp210(sp110);

                        if ((sp210 == tName::MakeUID("")) || (sp210 == tName::MakeUID("NO_NAME_TEXT"))) {
                            var_16 = NULL;
                        } else {
                            radLoadInventory::SafeCast<tFrameController> sp220;

                            var_16 = arg2->virtual_24(sp220, sp210);
                            tInventory *temp_17 = tPlatform::GetPlatform().unk_0->unk_00;
                            if ((var_16 == NULL) && (temp_17 != arg2)) {
                                temp_17->virtual_24(sp220, sp210);
                            }
                        }
                    }

                    if (var_16 != NULL) {
                        sp100.unk_08 = var_16->virtual_4C();
                    } else {
                        p3d::printf("multicontroller (%s) has invalid track (%s)\n", sp, sp110);
                        sp100.unk_08 = 0.0f;
                    }

                    if (var_30 < temp_2->unk_30) {
                        temp_2->unk_34[var_30] = sp100;
                    }
                    var_30 += 1;
                }
            }
            break;

        case 0x48A2:
            {
                char sp100[0x100];
                tMultiController_unk_34 sp200;

                {
                    char sp210;
                    arg1->unk_210->virtual_64(&sp210, 1, 1);
                    u8 temp = sp210;
                    arg1->unk_210->virtual_64(sp100, temp, 1);
                    sp100[temp] = 0;

                    f32 sp290;
                    arg1->unk_210->virtual_64(&sp290, 1, 4);
                    sp200.unk_00 = sp290;

                    f32 sp294;
                    arg1->unk_210->virtual_64(&sp294, 1, 4);
                    sp200.unk_04 = sp294;

                    f32 sp298;
                    arg1->unk_210->virtual_64(&sp298, 1, 4);
                    sp200.unk_0C = sp298;
                }
                {
                    tName sp210(sp100);

                    if ((sp210 == tName::MakeUID("")) || (sp210 == tName::MakeUID("NO_NAME_TEXT"))) {
                        var_16 = NULL;
                    } else {
                        radLoadInventory::SafeCast<tFrameController> sp220;

                        var_16 = arg2->virtual_24(sp220, sp210);
                        tInventory *temp_17 = tPlatform::GetPlatform().unk_0->unk_00;
                        if ((var_16 == NULL) && (temp_17 != arg2)) {
                            temp_17->virtual_24(sp220, sp210);
                        }
                    }
                }

                temp_2->SetTrack(var_30, var_16);

                {
                    tName sp210(sp100);

                    if ((sp210 == tName::MakeUID("")) || (sp210 == tName::MakeUID("NO_NAME_TEXT"))) {
                        var_16 = NULL;
                    } else {
                        radLoadInventory::SafeCast<tFrameController> sp220;

                        var_16 = arg2->virtual_24(sp220, sp210);
                        tInventory *temp_17 = tPlatform::GetPlatform().unk_0->unk_00;
                        if ((var_16 == NULL) && (temp_17 != arg2)) {
                            temp_17->virtual_24(sp220, sp210);
                        }
                    }
                }

                if (var_16 != NULL) {
                    sp200.unk_08 = var_16->virtual_4C();
                } else {
                    p3d::printf("multicontroller (%s) has invalid track (%s)\n", sp, sp100);
                    sp200.unk_08 = 0.0f;
                }

                if (var_30 < temp_2->unk_30) {
                    temp_2->unk_34[var_30] = sp200;
                }
                var_30 += 1;
            }
            break;

        }

        arg1->EndChunk();
    }

    return (UNK_TYPE *)temp_2;
}
#else
INCLUDE_ASM("asm/us_2003_07_10/nonmatchings/libs/pure3d/pure3dpr/multicontroller", LoadObject__22tMultiControllerLoaderP10tChunkFileP12tEntityStore);
#endif

INCLUDE_RODATA("asm/us_2003_07_10/nonmatchings/libs/pure3d/pure3dpr/multicontroller", _vt$22tMultiControllerLoader);

INCLUDE_RODATA("asm/us_2003_07_10/nonmatchings/libs/pure3d/pure3dpr/multicontroller", _vt$16tMultiController);

INCLUDE_ASM("asm/us_2003_07_10/nonmatchings/libs/pure3d/pure3dpr/multicontroller", __tf16tMultiController);

INCLUDE_ASM("asm/us_2003_07_10/nonmatchings/libs/pure3d/pure3dpr/multicontroller", __tf22tMultiControllerLoader);

GARBAGE_INSTR("addiu       $29, $29, 0x20");

p3dCycleMode tMultiController::GetCycleMode(void) {
    return this->unk_2C;
}

void tMultiController::SetCycleMode(p3dCycleMode arg1) {
    this->unk_2C = arg1;
}

float tMultiController::GetNumFrames(void) {
    return this->unk_18 - this->unk_14;
}

GARBAGE_INSTR("daddu       $2, $0, $0");


void tMultiController::SetRelativeSpeed(float arg1) {
    this->unk_28 = arg1;
}
float tMultiController::GetRelativeSpeed() {
    return this->unk_28;
}
UNK_TYPE tMultiController::LastFrameReached() {
    return this->unk_1C;
}

void tMultiController::Reset() {
    this->virtual_44(0);
}

GARBAGE_INSTR("addiu       $29, $29, 0x20");

INCLUDE_ASM("asm/us_2003_07_10/nonmatchings/libs/pure3d/pure3dpr/multicontroller", _$_22tMultiControllerLoader);

GARBAGE_INSTR("addiu       $29, $29, 0x20");
GARBAGE_INSTR("addiu       $29, $29, 0x20");
GARBAGE_INSTR("addiu       $29, $29, 0x20");
GARBAGE_INSTR("addiu       $29, $29, 0x20");
GARBAGE_INSTR("sw          $3, 0x0($4)");
GARBAGE_INSTR("addiu       $29, $29, 0x10");
GARBAGE_INSTR("addiu       $29, $29, 0x20");
