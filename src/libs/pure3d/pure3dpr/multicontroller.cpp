#include "libs/pure3d/pure3dpr/multicontroller.hpp"

#include "include_asm.h"

#include "garbage_helper.h"

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

// TODO: bool?
extern u8 D_00436614;
extern s8 D_00436615;


#if 1
void tMultiController::SetFrame(float arg1) {
    float temp_f5;
    size_t var_17;
    float dunno;

    if ((arg1 != 0.0f) && (D_00436614 != 0)) {
        D_00436614 = 0;
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
#else
INCLUDE_ASM("asm/us_2003_07_10/nonmatchings/libs/pure3d/pure3dpr/multicontroller", SetFrame__16tMultiControllerf);

INCLUDE_ASM("asm/us_2003_07_10/nonmatchings/libs/pure3d/pure3dpr/multicontroller", GetFrame__16tMultiController);
#endif

#if 0
void tMultiController::SetFrameRange(float arg1, float arg2) {
    D_00436615 = 0;

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

GARBAGE_INSTR("swc1        $f0, 0x0($6)");

const tFrameController *tMultiController::GetTrack(size_t arg1) {
    if (arg1 >= this->unk_30) {
        return NULL;
    }
    return this->unk_38[arg1];
}
// INCLUDE_ASM("asm/us_2003_07_10/nonmatchings/libs/pure3d/pure3dpr/multicontroller", GetTrack__16tMultiControllerUi);

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

INCLUDE_RODATA("asm/us_2003_07_10/nonmatchings/libs/pure3d/pure3dpr/multicontroller", D_00492700);

extern const char D_004927D0[];
INCLUDE_RODATA("asm/us_2003_07_10/nonmatchings/libs/pure3d/pure3dpr/multicontroller", D_004927D0);

// disaster
#ifdef NON_EQUIVALENT
UNK_TYPE *tMultiControllerLoader::LoadObject(tChunkFile *arg1, tEntityStore *arg2) {
    char sp[0x100];
    char sp100[4];
    #if 0
    f32 sp104;
    f32 sp108;
    f32 sp10C;
    #endif
    char sp110[0x200-0x110];
    #if 0
    f32 sp200;
    f32 sp204;
    f32 sp208;
    f32 sp20C;
    u8 sp210;
    u8 sp220;
    u8 sp230;
    u8 sp240;
    u8 sp250;
    u8 sp260;
    UNK_TYPE sp270;
    #endif
    float sp274;
    f32 sp278;
    int sp27C;
    #if 0
    s32 sp280;
    f32 sp284;
    f32 sp288;
    f32 sp28C;
    f32 sp290;
    f32 sp294;
    f32 sp298;
    #endif
    s32 temp_2_8; // 
    s32 var_23; //
    #if 0
    s32 var_2;
    s32 var_2_2;
    s32 var_2_3;
    s32 var_2_4;
    #endif
    size_t var_30;
    tMultiController* temp_2;
    #if 0
    void* temp_2_10;
    void* temp_2_11;
    void* temp_2_12;
    void* temp_2_13;
    void* temp_2_14;
    void* temp_2_15;
    void* temp_2_16;
    void* temp_2_17;
    void* temp_2_18;
    void* temp_2_19;
    void* temp_2_20;
    void* temp_2_21;
    void* temp_2_22;
    void* temp_2_23;
    void* temp_2_24;
    void* temp_2_25;
    void* temp_2_26;
    void* temp_2_27;
    void* temp_2_28;
    void* temp_2_29;
    void* temp_2_2;
    void* temp_2_3;
    void* temp_2_4;
    void* temp_2_5;
    void* temp_2_6;
    void* temp_2_7;
    void* temp_2_9;
    void** temp_17;
    void** temp_17_2;
    void** temp_17_3;
    void** temp_17_4;
    void** temp_3;
    void** temp_3_10;
    void** temp_3_11;
    void** temp_3_12;
    void** temp_3_13;
    void** temp_3_14;
    void** temp_3_15;
    void** temp_3_16;
    void** temp_3_17;
    void** temp_3_2;
    void** temp_3_3;
    void** temp_3_4;
    void** temp_3_5;
    void** temp_3_6;
    void** temp_3_7;
    void** temp_3_8;
    void** temp_3_9;
    #endif
    tFrameController  * var_16; //
    void** var_16_2; //
    tFrameController * var_16_3; //
    void** var_16_4; //

    (void)arg2;

    var_30 = 0;
#if 0
    temp_3 = arg1->unk210;
    temp_2_2 = *temp_3;
    temp_2_2->unk64(temp_3 + temp_2_2->unk60, &sp100, 1, 1);
    temp_3_2 = arg1->unk210;
    temp_2_3 = *temp_3_2;
    temp_2_3->unk64(temp_3_2 + temp_2_3->unk60, sp, sp100, 1);
    temp_3_3 = arg1->unk210;
    *(sp + sp100) = 0;
    temp_2_4 = *temp_3_3;
    temp_2_4->unk64(temp_3_3 + temp_2_4->unk60, &sp270, 1, 4);
    temp_3_4 = arg1->unk210;
    temp_2_5 = *temp_3_4;
    temp_2_5->unk64(temp_3_4 + temp_2_5->unk60, &sp274, 1, 4);
    temp_3_5 = arg1->unk210;
    temp_2_6 = *temp_3_5;
    temp_2_6->unk64(temp_3_5 + temp_2_6->unk60, &sp278, 1, 4);
    temp_3_6 = arg1->unk210;
    temp_2_7 = *temp_3_6;
    temp_2_7->unk64(temp_3_6 + temp_2_7->unk60, &sp27C, 1, 4);
#endif

    temp_2 = new tMultiController(sp27C, sp274);
    temp_2->unk_08.SetText(sp);
    temp_2->unk_24 = sp278;

    while (arg1->ChunksRemaining() != 0) {
        temp_2_8 = arg1->BeginChunk();
        switch (temp_2_8) {                         /* irregular */
        case 0x48A2:
        #if 0
            temp_3_7 = arg1->unk210;
            temp_2_9 = *temp_3_7;
            temp_2_9->unk64(temp_3_7 + temp_2_9->unk60, &sp210, 1, 1);
            temp_3_8 = arg1->unk210;
            temp_2_10 = *temp_3_8;
            temp_2_10->unk64(temp_3_8 + temp_2_10->unk60, &sp100, sp210, 1);
            temp_3_9 = arg1->unk210;
            (&sp100)[sp210] = 0;
            temp_2_11 = *temp_3_9;
            temp_2_11->unk64(temp_3_9 + temp_2_11->unk60, &sp290, 1, 4);
            temp_3_10 = arg1->unk210;
            sp200 = sp290;
            temp_2_12 = *temp_3_10;
            temp_2_12->unk64(temp_3_10 + temp_2_12->unk60, &sp294, 1, 4);
            temp_3_11 = arg1->unk210;
            sp204 = sp294;
            temp_2_13 = *temp_3_11;
            temp_2_13->unk64(temp_3_11 + temp_2_13->unk60, &sp298, 1, 4);
            sp20C = sp298;
            #endif
            {
                tName sp210(sp100);
                tUidUnaligned sp220 = tName::MakeUID(D_004927D0);
                tUidUnaligned sp230(sp210);

                bool var_2 = 0;
                if (sp230 == sp220) {
                    var_2 = 1;
                } else {
                    sp220 = tName::MakeUID("NO_NAME_TEXT");
                    tUidUnaligned sp240(sp220);
                    if (sp240 == sp220) {
                        var_2 = true;
                    } else {
                        var_2 = false;
                    }
                }
                var_16 = NULL;
                if (!var_2) {

                }
                #if 0
                //__5tNamePCc(&sp210, &sp100);
                // MakeUID__5tNamePCc(&sp220, &D_004927D0);
                //__13tUidUnalignedRC13tUidUnaligned(&sp230, &sp210);
                /*
                if (
                    (__eq__C13tUidUnalignedG13tUidUnaligned(&sp230, &sp220) != 0)
                ) {
                    var_2 = 1 & 0xFF;
                } else {
                    MakeUID__5tNamePCc(&sp220, "NO_NAME_TEXT");
                    __13tUidUnalignedRC13tUidUnaligned(&sp240, &sp210);
                    if (
                        (__eq__C13tUidUnalignedG13tUidUnaligned(&sp240, &sp220) != 0)
                    ) {
                        var_2 = 1 & 0xFF;
                    } else {
                        var_2 = 0 & 0xFF;
                    }
                }
                */
                // var_16 = NULL;
                if (var_2 == 0) {
                    __Q216radLoadInventoryt8SafeCast1Z16tFrameController(&sp220);
                    __13tUidUnalignedRC13tUidUnaligned(&sp250, &sp210);
                    temp_2_14 = *arg2;
                    var_16 = temp_2_14->unk24(arg2 + temp_2_14->unk20, &sp220, &sp250);
                    temp_17 = **GetPlatform__9tPlatform();
                    if ((var_16 == NULL) && (temp_17 != arg2)) {
                        __13tUidUnalignedRC13tUidUnaligned(&sp250, &sp210);
                        temp_2_15 = *temp_17;
                        var_16 = temp_2_15->unk24(temp_17 + temp_2_15->unk20, &sp220, &sp250);
                    }
                }
                // _$_5tName(&sp210, 2);
                #endif
            }
            temp_2->SetTrack(var_30, var_16);
            {
                tName sp210(sp100);
                tUidUnaligned sp220 = tName::MakeUID(D_004927D0);
                tUidUnaligned sp230(sp210);

                bool var_2_2 = 0;
                if (sp230 == sp220) {
                    var_2_2 = 1;
                } else {
                    sp220 = tName::MakeUID("NO_NAME_TEXT");
                    tUidUnaligned sp240(sp220);
                    if (sp240 == sp220) {
                        var_2_2 = true;
                    } else {
                        var_2_2 = false;
                    }
                }
                var_16_2 = NULL;
                if (!var_2_2) {

                }

                #if 0
                //__5tNamePCc(&sp210, &sp100);
                //MakeUID__5tNamePCc(&sp220, &D_004927D0);
                //__13tUidUnalignedRC13tUidUnaligned(&sp230, &sp210);
                //if ((__eq__C13tUidUnalignedG13tUidUnaligned(&sp230, &sp220) != 0) || (MakeUID__5tNamePCc(&sp220, "NO_NAME_TEXT"), __13tUidUnalignedRC13tUidUnaligned(&sp240, &sp210), var_2_2 = 0 & 0xFF, (__eq__C13tUidUnalignedG13tUidUnaligned(&sp240, &sp220) != 0))) {
                //    var_2_2 = 1 & 0xFF;
                //}
                var_16_2 = NULL;
                if (var_2_2 == 0) {
                    __Q216radLoadInventoryt8SafeCast1Z16tFrameController(&sp220);
                    __13tUidUnalignedRC13tUidUnaligned(&sp250, &sp210);
                    temp_2_16 = *arg2;
                    var_16_2 = temp_2_16->unk24(arg2 + temp_2_16->unk20, &sp220, &sp250);
                    temp_17_2 = **GetPlatform__9tPlatform();
                    if ((var_16_2 == NULL) && (temp_17_2 != arg2)) {
                        __13tUidUnalignedRC13tUidUnaligned(&sp250, &sp210);
                        temp_2_17 = *temp_17_2;
                        var_16_2 = temp_2_17->unk24(temp_17_2 + temp_2_17->unk20, &sp220, &sp250);
                    }
                }
                //_$_5tName(&sp210, 2);
                #endif
            }

            if (var_16_2 != NULL) {
            #if 0
                temp_2_18 = *var_16_2;
                sp208 = temp_2_18->unk4C(var_16_2 + temp_2_18->unk48);
            #endif
            } else {
                p3d::printf("multicontroller (%s) has invalid track (%s)\n", sp, sp100);
                #if 0
                sp208 = 0.0f;
                #endif
            }

            #if 0
            if (var_30 < (u32) temp_2->unk30) {
                M2C_ERROR(/* unknown instruction: ldl $a0, 0x207($sp) */);
                M2C_ERROR(/* unknown instruction: ldr $a0, 0x200($sp) */);
                M2C_ERROR(/* unknown instruction: ldl $a1, 0x20f($sp) */);
                M2C_ERROR(/* unknown instruction: ldr $a1, 0x208($sp) */);
                M2C_ERROR(/* unknown instruction: sdl $a0, 0x7($v0) */);
                M2C_ERROR(/* unknown instruction: sdr $a0, ($v0) */);
                M2C_ERROR(/* unknown instruction: sdl $a1, 0xf($v0) */);
                M2C_ERROR(/* unknown instruction: sdr $a1, 0x8($v0) */);
            }
        #endif
            var_30 += 1;
            break;

        case 0x48A1:
            #if 0
            temp_3_12 = arg1->unk210;
            temp_2_19 = *temp_3_12;
            temp_2_19->unk64(temp_3_12 + temp_2_19->unk60, &sp280, 1, 4);
            var_23 = sp280;
            #endif
            while (var_23 != 0) {
                #if 0
                temp_3_13 = arg1->unk210;
                temp_2_20 = *temp_3_13;
                temp_2_20->unk64(temp_3_13 + temp_2_20->unk60, &sp210, 1, 1);
                temp_3_14 = arg1->unk210;
                temp_2_21 = *temp_3_14;
                temp_2_21->unk64(temp_3_14 + temp_2_21->unk60, &sp110, sp210, 1);
                temp_3_15 = arg1->unk210;
                (&sp110)[sp210] = 0;
                temp_2_22 = *temp_3_15;
                temp_2_22->unk64(temp_3_15 + temp_2_22->unk60, &sp284, 1, 4);
                temp_3_16 = arg1->unk210;
                sp100 = sp284;
                temp_2_23 = *temp_3_16;
                temp_2_23->unk64(temp_3_16 + temp_2_23->unk60, &sp288, 1, 4);
                temp_3_17 = arg1->unk210;
                sp104 = sp288;
                temp_2_24 = *temp_3_17;
                temp_2_24->unk64(temp_3_17 + temp_2_24->unk60, &sp28C, 1, 4);
                sp10C = sp28C;
                #endif
                {
                    tName sp220(sp110);
                    tUidUnaligned sp230 = tName::MakeUID(D_004927D0);
                    tUidUnaligned sp240(sp220);

                    bool var_2_3;
                    if (sp240 == sp230) {
                        var_2_3 = true;
                    } else {
                        sp230 = tName::MakeUID("NO_NAME_TEXT");
                        tUidUnaligned sp250(sp220);
                        if (sp250 == sp230) {
                            var_2_3 = true;
                        } else {
                            var_2_3 = false;
                        }
                    }
                    var_16_3 = NULL;
                    if (!var_2_3) {

                    }
                    #if 0
                    // __5tNamePCc(&sp220, &sp110);
                    //MakeUID__5tNamePCc(&sp230, &D_004927D0);
                    //__13tUidUnalignedRC13tUidUnaligned(&sp240, &sp220);
                    //if ((__eq__C13tUidUnalignedG13tUidUnaligned(&sp240, &sp230) != 0) || (MakeUID__5tNamePCc(&sp230, "NO_NAME_TEXT"), __13tUidUnalignedRC13tUidUnaligned(&sp250, &sp220), var_2_3 = 0 & 0xFF, (__eq__C13tUidUnalignedG13tUidUnaligned(&sp250, &sp230) != 0))) {
                    //    var_2_3 = 1 & 0xFF;
                    //}
                    //var_16_3 = NULL;
                    if (var_2_3 == 0) {
                        __Q216radLoadInventoryt8SafeCast1Z16tFrameController(&sp230);
                        __13tUidUnalignedRC13tUidUnaligned(&sp260, &sp220);
                        temp_2_25 = *arg2;
                        var_16_3 = temp_2_25->unk24(arg2 + temp_2_25->unk20, &sp230, &sp260);
                        temp_17_3 = **GetPlatform__9tPlatform();
                        if ((var_16_3 == NULL) && (temp_17_3 != arg2)) {
                            __13tUidUnalignedRC13tUidUnaligned(&sp260, &sp220);
                            temp_2_26 = *temp_17_3;
                            var_16_3 = temp_2_26->unk24(temp_17_3 + temp_2_26->unk20, &sp230, &sp260);
                        }
                    }
                    // _$_5tName(&sp220, 2);
                    #endif
                }
                temp_2->SetTrack(var_30, var_16_3);

                {
                    tName sp210(sp110);
                    tUidUnaligned sp220 = tName::MakeUID(D_004927D0);
                    tUidUnaligned sp230(sp210);

                    bool var_2_4;
                    if (sp230 == sp220) {
                        var_2_4 = true;
                    } else {
                        sp220 = tName::MakeUID("NO_NAME_TEXT");
                        tUidUnaligned sp240(sp210);
                        if (sp240 == sp220) {
                            var_2_4 = true;
                        } else {
                            var_2_4 = false;
                        }
                    }
                    var_16_4 = NULL;
                    if (!var_2_4) {

                    }

                    #if 0
                    //__5tNamePCc(&sp210, &sp110);
                    //MakeUID__5tNamePCc(&sp220, &D_004927D0);
                    //__13tUidUnalignedRC13tUidUnaligned(&sp230, &sp210);
                    //if ((__eq__C13tUidUnalignedG13tUidUnaligned(&sp230, &sp220) != 0) || (MakeUID__5tNamePCc(&sp220, "NO_NAME_TEXT"), __13tUidUnalignedRC13tUidUnaligned(&sp240, &sp210), var_2_4 = 0 & 0xFF, (__eq__C13tUidUnalignedG13tUidUnaligned(&sp240, &sp220) != 0))) {
                    //    var_2_4 = 1 & 0xFF;
                    //}
                    var_16_4 = NULL;
                    if (var_2_4 == 0) {
                        __Q216radLoadInventoryt8SafeCast1Z16tFrameController(&sp220);
                        __13tUidUnalignedRC13tUidUnaligned(&sp250, &sp210);
                        temp_2_27 = *arg2;
                        var_16_4 = temp_2_27->unk24(arg2 + temp_2_27->unk20, &sp220, &sp250);
                        temp_17_4 = **GetPlatform__9tPlatform();
                        if ((var_16_4 == NULL) && (temp_17_4 != arg2)) {
                            __13tUidUnalignedRC13tUidUnaligned(&sp250, &sp210);
                            temp_2_28 = *temp_17_4;
                            var_16_4 = temp_2_28->unk24(temp_17_4 + temp_2_28->unk20, &sp220, &sp250);
                        }
                    }
                    //_$_5tName(&sp210, 2);
                    #endif
                }
                if (var_16_4 != NULL) {
                    #if 0
                    temp_2_29 = *var_16_4;
                    sp108 = temp_2_29->unk4C(var_16_4 + temp_2_29->unk48);
                    #endif
                } else {
                    p3d::printf("multicontroller (%s) has invalid track (%s)\n", sp, sp110);
                    #if 0
                    sp108 = 0.0f;
                    #endif
                }
                #if 0
                if (var_30 < (u32) temp_2->unk30) {
                    M2C_ERROR(/* unknown instruction: ldl $a0, 0x107($sp) */);
                    M2C_ERROR(/* unknown instruction: ldr $a0, 0x100($sp) */);
                    M2C_ERROR(/* unknown instruction: ldl $a1, 0x10f($sp) */);
                    M2C_ERROR(/* unknown instruction: ldr $a1, 0x108($sp) */);
                    M2C_ERROR(/* unknown instruction: sdl $a0, 0x7($v0) */);
                    M2C_ERROR(/* unknown instruction: sdr $a0, ($v0) */);
                    M2C_ERROR(/* unknown instruction: sdl $a1, 0xf($v0) */);
                    M2C_ERROR(/* unknown instruction: sdr $a1, 0x8($v0) */);
                }
                #endif
                var_23 -= 1;
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
