#include "libs/sim/simpr/simutility.hpp"

#include "include_asm.h"
#include "garbage_helper.h"

#include "libs/pure3d/pure3dpr/utility.hpp"

#if 0
void sim::InstallSimLoaders(void) {
    tP3DFileHandler *temp_v0 = p3d::loadManager->GetP3DHandler();

    if (temp_v0 != NULL) {
        temp_v0->AddHandler(new sim::tExportInfoLoader());
        temp_v0->AddHandler(new sim::CollisionObjectLoader());
        temp_v0->AddHandler(new sim::PhysicsObjectLoader());
    }
}
#else
INCLUDE_ASM("asm/us_2003_07_10/nonmatchings/libs/sim/simpr/simutility", InstallSimLoaders__3simv);
#endif

INCLUDE_RODATA("asm/us_2003_07_10/nonmatchings/libs/sim/simpr/simutility", D_00485390);

INCLUDE_ASM("asm/us_2003_07_10/nonmatchings/libs/sim/simpr/simutility", InitializeSimulation__3simQ23sim17GeometryUnitsEnum);

INCLUDE_ASM("asm/us_2003_07_10/nonmatchings/libs/sim/simpr/simutility", ResetSimulation__3simv);

INCLUDE_ASM("asm/us_2003_07_10/nonmatchings/libs/sim/simpr/simutility", SetupLineDrawing__3simv);

INCLUDE_ASM("asm/us_2003_07_10/nonmatchings/libs/sim/simpr/simutility", CleanupLineDrawing__3simv);

INCLUDE_ASM("asm/us_2003_07_10/nonmatchings/libs/sim/simpr/simutility", __Q23sim17tExportInfoLoader);

INCLUDE_ASM("asm/us_2003_07_10/nonmatchings/libs/sim/simpr/simutility", LoadObject__Q23sim17tExportInfoLoaderP10tChunkFileP12tEntityStore);

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
