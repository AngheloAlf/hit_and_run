#include "libs/sim/simpr/simutility.hpp"

#include "include_asm.h"
#include "garbage_helper.h"

#include "libs/pure3d/pure3dpr/utility.hpp"
#include "libs/sim/simpr/collisionmanager.hpp"
#include "libs/sim/simpr/collisionobject.hpp"
#include "libs/sim/simpr/physicsobject.hpp"
#include "libs/sim/simpr/physicsproperties.hpp"

void sim::InstallSimLoaders(void) {
    tP3DFileHandler *temp_v0 = p3d::loadManager->GetP3DHandler();

    if (temp_v0 != NULL) {
        temp_v0->AddHandler(new sim::tExportInfoLoader());
        temp_v0->AddHandler(new sim::CollisionObjectLoader());
        temp_v0->AddHandler(new sim::PhysicsObjectLoader());
    }
}

INCLUDE_RODATA("asm/us_2003_07_10/nonmatchings/libs/sim/simpr/simutility", D_00485390);

void sim::InitializeSimulation(sim::GeometryUnitsEnum arg0) {
    f32 var_f20 = 1.0f;
    f32 var_f21 = 1.0f;

    switch (arg0) {
        case GEOMETRY_UNITS_ENUM_0:
            var_f20 = 10.0f;
            break;

        case GEOMETRY_UNITS_ENUM_1:
            var_f20 = 1.0f;
            break;

        case GEOMETRY_UNITS_ENUM_2:
            var_f20 = 0.01f;
            break;

        case GEOMETRY_UNITS_ENUM_3:
            var_f20 = 0.00001f;
            break;

        case GEOMETRY_UNITS_ENUM_4:
            var_f20 = 0.3937f;
            break;

        case GEOMETRY_UNITS_ENUM_5:
            var_f20 = 0.03281f;
            break;

        case GEOMETRY_UNITS_ENUM_6:
            var_f20 = 0.01094f;
            break;

        case GEOMETRY_UNITS_ENUM_7:
            var_f20 = 0.0006214f;
            break;

        case GEOMETRY_UNITS_ENUM_8:
            break;
    }

    sim::SimUnitsManager sp;
    sim::SimUnits::sL = var_f20;
    sim::SimUnits::sM = var_f21;
    sim::SimUnits::sT = var_f21;
    sim::SimUnits::sUnitSet = 1;
}

#if 0
void sim::ResetSimulation(void) {
    if (sim::CollisionManager::sInstance != NULL) {
        sim::CollisionManager::sInstance->virtual_14();
    }
    if (sim::SimEnvironment::sDefaultSimEnvironment != NULL) {
        sim::SimEnvironment::sDefaultSimEnvironment->virtual_14();
    }

    tPlatform::GetPlatform().unk_0;
    #if 0
    temp_s1 = **GetPlatform__9tPlatform();
    temp_s0 = *temp_s1;
    temp_s0_2 = temp_s0 + 0x40;
    temp_s1_2 = temp_s1 + temp_s0->unk_40;
    temp_s0_2->unk_4(temp_s1_2, DefaultPhysicsProperties__Q23sim17PhysicsPropertiesP12tEntityStore(0));
    #endif
    sim::PhysicsProperties::DefaultPhysicsProperties(NULL);

    sim::SimUnits::Reset();
    sim::PhysicsObject::ResetUnitsRelatedValues();
}
#else
INCLUDE_ASM("asm/us_2003_07_10/nonmatchings/libs/sim/simpr/simutility", ResetSimulation__3simv);
#endif

INCLUDE_ASM("asm/us_2003_07_10/nonmatchings/libs/sim/simpr/simutility", SetupLineDrawing__3simv);

#if 0
void sim::CleanupLineDrawing(void) {
    #if 0
    s32 temp_a0;
    void *temp_s0;
    void *temp_v0;

    temp_v0 = _3sim$g_pDefaultShader->unk_8;
    temp_v0->unk_14(_3sim$g_pDefaultShader + temp_v0->unk_10);
    temp_s0 = _3sim$g_pLineElemArray;
    if (temp_s0 != NULL) {
        temp_a0 = temp_s0->unk_8;
        if (temp_a0 != 0) {
            __builtin_vec_delete(temp_a0);
        }
        __builtin_delete(temp_s0);
    }
    #endif
}
#else
INCLUDE_ASM("asm/us_2003_07_10/nonmatchings/libs/sim/simpr/simutility", CleanupLineDrawing__3simv);
#endif

#if 0
sim::tExportInfoLoader::tExportInfoLoader() {
    this->unk_08 = 0x7030;
    this->unk_10 = 0;
}
#else
INCLUDE_ASM("asm/us_2003_07_10/nonmatchings/libs/sim/simpr/simutility", __Q23sim17tExportInfoLoader);
#endif

#if 0
UNK_RET sim::tExportInfoLoader::LoadObject(tChunkFile *arg1, tEntityStore *arg2) {
    u8 sp80;
    UNK_TYPE **temp_s0;
    UNK_TYPE **temp_s0_2;
    UNK_TYPE **temp_v0;
    UNK_TYPE var_a0;
    s32 var_s4;
    void **temp_v1;
    void **temp_v1_2;
    void **temp_v1_3;
    void **temp_v1_4;
    void **temp_v1_5;
    void **temp_v1_6;
    void *temp_v0_2;
    void *temp_v0_3;
    void *temp_v0_4;
    void *temp_v0_5;
    void *temp_v0_6;
    void *temp_v0_7;

    var_s4 = 0;
    temp_v1 = arg1->unk_210;
    #if 0
    temp_v0_2 = *temp_v1;
    temp_v0_2->unk_64(temp_v1 + temp_v0_2->unk_60, &sp80, 1, 1);
    temp_v1_2 = arg1->unk_210;
    temp_v0_3 = *temp_v1_2;
    temp_v0_3->unk_64(temp_v1_2 + temp_v0_3->unk_60, sp, sp80, 1);
    *(sp + sp80) = 0;
    temp_v0 = __nw__13radLoadObjectUi(0x34);
    __7tEntity(temp_v0);
    *temp_v0 = &_vt$Q23sim11tExportInfo;
    SetText__5tNamePCc(temp_v0 + 8, sp);
loop_5:
    if ((ChunksRemaining__10tChunkFile(arg1) != 0) && (var_s4 == 0)) {
        BeginChunk__10tChunkFile(arg1);
        temp_v1_3 = arg1->unk_210;
        temp_v0_4 = *temp_v1_3;
        temp_v0_4->unk_64(temp_v1_3 + temp_v0_4->unk_60, &sp80, 1, 1);
        temp_v1_4 = arg1->unk_210;
        temp_v0_5 = *temp_v1_4;
        temp_v0_5->unk_64(temp_v1_4 + temp_v0_5->unk_60, sp, sp80, 1);
        *(sp + sp80) = 0;
        if (strcmp(sp, &D_004853D0) == 0) {
            temp_v1_5 = arg1->unk_210;
            temp_v0_6 = *temp_v1_5;
            temp_s0 = temp_v0 + 0x10;
            var_s4 = 1;
            temp_v0_6->unk_64(temp_v1_5 + temp_v0_6->unk_60, &sp80, 1, 1);
            temp_v1_6 = arg1->unk_210;
            temp_v0_7 = *temp_v1_6;
            temp_v0_7->unk_64(temp_v1_6 + temp_v0_7->unk_60, temp_s0, sp80, 1);
            *(temp_s0 + sp80) = 0;
        }
        EndChunk__10tChunkFile(arg1);
        goto loop_5;
    }

    if (_Q23sim8SimUnits$sUnitSet == 0) {
        temp_s0_2 = temp_v0 + 0x10;
        if (temp_v0 != NULL) {
            if (strcmp(temp_s0_2, &D_004853E0) == 0) {
                var_a0 = 0;
            } else if (strcmp(temp_s0_2, &D_004853F0) == 0) {
                var_a0 = 1;
            } else if (strcmp(temp_s0_2, &D_00485400) == 0) {
                var_a0 = 2;
            } else if (strcmp(temp_s0_2, &D_00485408) == 0) {
                var_a0 = 3;
            } else if (strcmp(temp_s0_2, &D_00485418) == 0) {
                var_a0 = 4;
            } else if (strcmp(temp_s0_2, &D_00485420) == 0) {
                var_a0 = 5;
            } else if (strcmp(temp_s0_2, &D_00485428) == 0) {
                var_a0 = 6;
            } else {
                var_a0 = (strcmp(temp_s0_2, &D_00485430) == 0) ? 7 : 8;
            }
            InitializeSimulation__3simQ23sim17GeometryUnitsEnum(var_a0);
        }
    }
    return temp_v0;
#endif
}
#else
INCLUDE_ASM("asm/us_2003_07_10/nonmatchings/libs/sim/simpr/simutility", LoadObject__Q23sim17tExportInfoLoaderP10tChunkFileP12tEntityStore);
#endif

INCLUDE_ASM("asm/us_2003_07_10/nonmatchings/libs/sim/simpr/simutility", func_002D8080);

INCLUDE_RODATA("asm/us_2003_07_10/nonmatchings/libs/sim/simpr/simutility", _vt$Q23sim17tExportInfoLoader);

INCLUDE_RODATA("asm/us_2003_07_10/nonmatchings/libs/sim/simpr/simutility", _vt$Q23sim11tExportInfo);

INCLUDE_ASM("asm/us_2003_07_10/nonmatchings/libs/sim/simpr/simutility", __tfQ23sim11tExportInfo);

INCLUDE_ASM("asm/us_2003_07_10/nonmatchings/libs/sim/simpr/simutility", _$_Q23sim17tExportInfoLoader);

INCLUDE_ASM("asm/us_2003_07_10/nonmatchings/libs/sim/simpr/simutility", __tfQ23sim17tExportInfoLoader);

INCLUDE_ASM("asm/us_2003_07_10/nonmatchings/libs/sim/simpr/simutility", func_002D8190);

INCLUDE_ASM("asm/us_2003_07_10/nonmatchings/libs/sim/simpr/simutility", _$_Q23sim11tExportInfo);

INCLUDE_ASM("asm/us_2003_07_10/nonmatchings/libs/sim/simpr/simutility", _$_Q23sim15SimUnitsManager);

INCLUDE_ASM("asm/us_2003_07_10/nonmatchings/libs/sim/simpr/simutility", __Q23sim15SimUnitsManager);

INCLUDE_ASM("asm/us_2003_07_10/nonmatchings/libs/sim/simpr/simutility", func_002D8248);

INCLUDE_RODATA("asm/us_2003_07_10/nonmatchings/libs/sim/simpr/simutility", _vt$Q23sim15SimUnitsManager);

INCLUDE_ASM("asm/us_2003_07_10/nonmatchings/libs/sim/simpr/simutility", __tfQ23sim15SimUnitsManager);

INCLUDE_ASM("asm/us_2003_07_10/nonmatchings/libs/sim/simpr/simutility", UpdateUnits__Q23sim15SimUnitsManager);

INCLUDE_RODATA("asm/us_2003_07_10/nonmatchings/libs/sim/simpr/simutility", D_00485578);
