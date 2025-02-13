#ifndef SIMUTILITY_HPP
#define SIMUTILITY_HPP

#include "libs/pure3d/pure3dpr/loadmanager.hpp"

// text

namespace sim {
    void InstallSimLoaders(void);

    enum GeometryUnitsEnum {
        /* 0 */ GEOMETRY_UNITS_ENUM_0,
        /* 1 */ GEOMETRY_UNITS_ENUM_1,
        /* 2 */ GEOMETRY_UNITS_ENUM_2,
        /* 3 */ GEOMETRY_UNITS_ENUM_3,
        /* 4 */ GEOMETRY_UNITS_ENUM_4,
        /* 5 */ GEOMETRY_UNITS_ENUM_5,
        /* 6 */ GEOMETRY_UNITS_ENUM_6,
        /* 7 */ GEOMETRY_UNITS_ENUM_7,
        /* 8 */ GEOMETRY_UNITS_ENUM_8,
    };
    void InitializeSimulation(sim::GeometryUnitsEnum); // void InitializeSimulation__3simQ23sim17GeometryUnitsEnum();

    void ResetSimulation(void); // void ResetSimulation__3simv();
    void SetupLineDrawing(void); // void SetupLineDrawing__3simv();
    void CleanupLineDrawing(void); // void CleanupLineDrawing__3simv();

    // inherits from:
    // polymorphism: tChunkHandler
    // vtable: +radLoadObject, tChunkHandler, tSimpleChunkHandler
    // constructor: +radLoadDataLoader
    class tExportInfoLoader: public tSimpleChunkHandler {
        tExportInfoLoader(void); // void __Q23sim17tExportInfoLoader();
        virtual UNK_RET LoadObject(tChunkFile *, tEntityStore *); // void LoadObject__Q23sim17tExportInfoLoaderP10tChunkFileP12tEntityStore();
        // void func_002D8080();
        // void __tfQ23sim11tExportInfo();
        virtual ~tExportInfoLoader(void); // void _$_Q23sim17tExportInfoLoader();
        // void __tfQ23sim17tExportInfoLoader();
    };

    // void func_002D8190();
    // void _$_Q23sim11tExportInfo();
    // void _$_Q23sim15SimUnitsManager();
    // void __Q23sim15SimUnitsManager();
    // void func_002D8248();
    // void __tfQ23sim15SimUnitsManager();
    // void UpdateUnits__Q23sim15SimUnitsManager();
};

// rodata

// extern UNK_TYPE D_00485390;
// extern UNK_TYPE jtbl_004853A0;
// extern UNK_TYPE D_004853C8;
// extern UNK_TYPE D_004853D0;
// extern UNK_TYPE D_004853E0;
// extern UNK_TYPE D_004853F0;
// extern UNK_TYPE D_00485400;
// extern UNK_TYPE D_00485408;
// extern UNK_TYPE D_00485418;
// extern UNK_TYPE D_00485420;
// extern UNK_TYPE D_00485428;
// extern UNK_TYPE D_00485430;
// extern UNK_TYPE _vt$Q23sim17tExportInfoLoader;
// extern UNK_TYPE _vt$Q23sim11tExportInfo;
// extern UNK_TYPE D_004854C0;
// extern UNK_TYPE D_004854D8;
// extern UNK_TYPE _vt$Q23sim15SimUnitsManager;
// extern UNK_TYPE D_00485560;
// extern UNK_TYPE D_00485578;

#endif
