#ifndef ALLLOADMANAGER_HPP
#define ALLLOADMANAGER_HPP

#include "libs/pure3d/pure3dpr/loadmanager.hpp"

// text

class CameraDataLoader : public tChunkHandler {
public:
    CameraDataLoader(void);
private:
    // void _$_16CameraDataLoader();
    virtual UNK_RET Load(tChunkFile *, tEntityStore *); // void Load__16CameraDataLoaderP10tChunkFileP12tEntityStore();
    // void __tf16CameraDataLoader();
    virtual UNK_RET CheckChunkID(unsigned int); // void CheckChunkID__16CameraDataLoaderUi();
    virtual UNK_RET GetChunkID(void); // void GetChunkID__16CameraDataLoader();
    // extern UNK_TYPE _vt$16CameraDataLoader;
private:
    /* 0x04 */ UNK_PAD unk_04[0x4];
}; // size = 0x8

// void __17CementFileHandlerPQ214LoadingManager19CementLibraryStruct();
// void _$_17CementFileHandler();
// void LoadFile__17CementFileHandlerPCcPQ211FileHandler16LoadFileCallbackPv19GameMemoryAllocator();
// void LoadFileSync__17CementFileHandlerPCc();
// void OnCementLibraryRegistered__17CementFileHandlerPv();
// void __17ChoreoFileHandler();
// void _$_17ChoreoFileHandler();
// void LoadFile__17ChoreoFileHandlerPCcPQ211FileHandler16LoadFileCallbackPv19GameMemoryAllocator();
// void OnFileOperationsComplete__17ChoreoFileHandlerPv();
// void LoadFileSync__17ChoreoFileHandlerPCc();
// void SetSectionName__17ChoreoFileHandlerPCc();
// void __18ConsoleFileHandler();
// void _$_18ConsoleFileHandler();
// void LoadFile__18ConsoleFileHandlerPCcPQ211FileHandler16LoadFileCallbackPv19GameMemoryAllocator();
// void OnFileOperationsComplete__18ConsoleFileHandlerPv();
// void LoadFileSync__18ConsoleFileHandlerPCc();
// void CreateFileHandler__18FileHandlerFactory15FileHandlerEnumPCc();
// void __15IconFileHandler();
// void _$_15IconFileHandler();
// void LoadFile__15IconFileHandlerPCcPQ211FileHandler16LoadFileCallbackPv19GameMemoryAllocator();
// void OnFileOperationsComplete__15IconFileHandlerPv();
// void LoadFileSync__15IconFileHandlerPCc();

class IntersectionLoader : public tChunkHandler {
public:
    IntersectionLoader(void);
private:
    // void _$_18IntersectionLoader();
    virtual UNK_RET Load(tChunkFile *, tEntityStore *); // void Load__18IntersectionLoaderP10tChunkFileP12tEntityStore();
    virtual UNK_RET CheckChunkID(unsigned int); // void CheckChunkID__18IntersectionLoaderUi();
    virtual UNK_RET GetChunkID(void); // void GetChunkID__18IntersectionLoader();

private:
    /* 0x04 */ UNK_PAD unk_04[0x4];
}; // size = 0x8

class LoadingManager {
public:
    static LoadingManager *GetInstance(void);
    static void CreateInstance(void);
    static void DestroyInstance(void);

private:
// void AddCallback__14LoadingManagerPQ214LoadingManager23ProcessRequestsCallbackPv();
// void AddRequest__14LoadingManager15FileHandlerEnumPCc19GameMemoryAllocatorT2T2PQ214LoadingManager23ProcessRequestsCallbackPv();
// void OnLoadFileComplete__14LoadingManagerPv();
public:
    void CancelPendingRequests(void);
private:
// void RegisterCementLibrary__14LoadingManagerPCc();
// void UnregisterCementLibrary__14LoadingManageri();
// void __14LoadingManager();
// void _$_14LoadingManager();
// void ProcessNextRequest__14LoadingManager();
};

// void __13LocatorLoader();
// void _$_13LocatorLoader();
// void LoadObject__13LocatorLoaderP10tChunkFileP12tEntityStore();
// void SetRegdListener__13LocatorLoaderP21ChunkListenerCallbacki();
// void ModRegdListener__13LocatorLoaderP21ChunkListenerCallbacki();
// void LoadTriggerVolume__13LocatorLoaderP10tChunkFileP14TriggerLocatorb();
// void LoadSpline__13LocatorLoaderP10tChunkFileP13SplineLocator();
// void __14P3DFileHandler();
// void _$_14P3DFileHandler();
// void LoadFile__14P3DFileHandlerPCcPQ211FileHandler16LoadFileCallbackPv19GameMemoryAllocator();
// void Done__14P3DFileHandler11tLoadStatusP12tLoadRequest();
// void LoadFileSync__14P3DFileHandlerPCc();
// void SetSectionName__14P3DFileHandlerPCc();

class RoadDataSegmentLoader : public tChunkHandler {
public:
    RoadDataSegmentLoader(void);
private:
    // void _$_21RoadDataSegmentLoader();
    virtual UNK_RET Load(tChunkFile *, tEntityStore *); // void Load__21RoadDataSegmentLoaderP10tChunkFileP12tEntityStore();
    virtual UNK_RET CheckChunkID(unsigned int); // void CheckChunkID__21RoadDataSegmentLoaderUi();
    virtual UNK_RET GetChunkID(void); // void GetChunkID__21RoadDataSegmentLoader();

private:
    /* 0x04 */ UNK_PAD unk_04[0x4];
}; // size = 0x8

// void __10RoadLoader();
// void _$_10RoadLoader();
// void Load__10RoadLoaderP10tChunkFileP12tEntityStore();
// void CheckChunkID__10RoadLoaderUi();
// void LoadObject__10RoadLoaderP10tChunkFileP12tEntityStore();
// void SetRegdListener__10RoadLoaderP21ChunkListenerCallbacki();
// void ModRegdListener__10RoadLoaderP21ChunkListenerCallbacki();
// void LoadRoadSegment__10RoadLoaderP10tChunkFileRUi();
// void __18ScroobyFileHandler();
// void _$_18ScroobyFileHandler();
// void LoadFile__18ScroobyFileHandlerPCcPQ211FileHandler16LoadFileCallbackPv19GameMemoryAllocator();
// void OnProjectLoadComplete__18ScroobyFileHandlerPQ27Scrooby7Project();
// void LoadFileSync__18ScroobyFileHandlerPCc();
// void SetSectionName__18ScroobyFileHandlerPCc();
// void __16SoundFileHandler();
// void _$_16SoundFileHandler();
// void LoadFile__16SoundFileHandlerPCcPQ211FileHandler16LoadFileCallbackPv19GameMemoryAllocator();
// void LoadFileSync__16SoundFileHandlerPCc();
// void LoadCompleted__16SoundFileHandler();
// void __10PathLoader();
// void _$_10PathLoader();
// void CheckChunkID__10PathLoaderUi();
// void Load__10PathLoaderP10tChunkFileP12tEntityStore();
// void LoadObject__10PathLoaderP10tChunkFileP12tEntityStore();
// void SetRegdListener__10PathLoaderP21ChunkListenerCallbacki();
// void ModRegdListener__10PathLoaderP21ChunkListenerCallbacki();
// void func_001618A0();
// void clear__t10_List_base2ZP11RoadSegmentZt7s2alloc1ZP11RoadSegment();
// void __tfQ212tLoadRequest8Callback();
// void func_001619C0();
// void __tf11FileHandler();
// void __tf14LoadingManager();
// void __tf17CementFileHandler();
// void __tf17ChoreoFileHandler();
// void __tf18ConsoleFileHandler();
// void __tf14P3DFileHandler();
// void __tf15IconFileHandler();
// void __tf18ScroobyFileHandler();
// void __tf16SoundFileHandler();
// void __tf18IntersectionLoader();
// void __tf14IWrappedLoader();
// void __tf13LocatorLoader();
// void __tf15PedGroupLocator();
// void func_00161E58();
// void __tf21RoadDataSegmentLoader();
// void __tf10RoadLoader();
// void __tf10PathLoader();
// void __15radLoadCallback();
// void func_00161FB0();
// void _$_Q212tLoadRequest8Callback();
// void Done__Q212tLoadRequest8Callback();
// void _$_18WalkerCamDataChunk();
// void __35IRadCementLibraryCompletionCallback();
// void func_00162150();
// void __Q211FileHandler16LoadFileCallback();
// void _$_11FileHandler();
// void AddRef__11FileHandler();
// void Release__11FileHandler();
// void AddRef__17CementFileHandler();
// void Release__17CementFileHandler();
// void AddRef__17ChoreoFileHandler();
// void Release__17ChoreoFileHandler();
// void AddRef__18ConsoleFileHandler();
// void Release__18ConsoleFileHandler();
// void AddRef__14P3DFileHandler();
// void Release__14P3DFileHandler();
// void AddRef__15IconFileHandler();
// void Release__15IconFileHandler();
// void __Q27Scrooby19LoadProjectCallback();
// void _$_14IWrappedLoader();
// void _$_15PedGroupLocator();
// void GetDataType__C15PedGroupLocator();
// void _$_t16_List_alloc_base3ZP11RoadSegmentZt7s2alloc1ZP11RoadSegmentb0();
// void __tf15radLoadCallback();
// void func_001624F8();
// void __tf35IRadCementLibraryCompletionCallback();
// void func_00162558();
// void __tfQ211FileHandler16LoadFileCallback();
// void __tfQ27Scrooby19LoadProjectCallback();
// void func_001625F0();
// void _$_15radLoadCallback();
// void func_00162640();

// data

// extern UNK_TYPE _14LoadingManager$spInstance;
// extern UNK_TYPE D_00427100;
// extern UNK_TYPE _13LocatorLoader$msZoneNameCount;
// extern UNK_TYPE D_00427120;
// extern UNK_TYPE D_00427124;
// extern UNK_TYPE D_00427144;
// extern UNK_TYPE D_00427148;

// rodata

// extern UNK_TYPE D_0045C150;
// extern UNK_TYPE D_0045C178;
// extern UNK_TYPE D_0045C188;
// extern UNK_TYPE D_0045C1B8;
// extern UNK_TYPE D_0045C1C0;
// extern UNK_TYPE D_0045C1C8;
// extern UNK_TYPE D_0045C1D0;
// extern UNK_TYPE jtbl_0045C1E0;
// extern UNK_TYPE D_0045C208;
// extern UNK_TYPE D_0045C210;
// extern UNK_TYPE D_0045C238;
// extern UNK_TYPE D_0045C260;
// extern UNK_TYPE D_0045C278;
// extern UNK_TYPE D_0045C280;
// extern UNK_TYPE D_0045C290;
// extern UNK_TYPE D_0045C2A8;
// extern UNK_TYPE D_0045C2B8;
// extern UNK_TYPE D_0045C308;
// extern UNK_TYPE D_0045C348;
// extern UNK_TYPE D_0045C358;
// extern UNK_TYPE D_0045C360;
// extern UNK_TYPE D_0045C368;
// extern UNK_TYPE D_0045C378;
// extern UNK_TYPE D_0045C388;
// extern UNK_TYPE D_0045C398;
// extern UNK_TYPE D_0045C3A8;
// extern UNK_TYPE D_0045C3B0;
// extern UNK_TYPE jtbl_0045C3C0;
// extern UNK_TYPE D_0045C400;
// extern UNK_TYPE D_0045C428;
// extern UNK_TYPE D_0045C448;
// extern UNK_TYPE D_0045C458;
// extern UNK_TYPE D_0045C468;
// extern UNK_TYPE D_0045C478;
// extern UNK_TYPE D_0045C488;
// extern UNK_TYPE D_0045C498;
// extern UNK_TYPE D_0045C4A8;
// extern UNK_TYPE _vt$10PathLoader$14IWrappedLoader;
// extern UNK_TYPE _vt$10PathLoader;
// extern UNK_TYPE _vt$10RoadLoader$14IWrappedLoader;
// extern UNK_TYPE _vt$10RoadLoader;
// extern UNK_TYPE _vt$21RoadDataSegmentLoader;
// extern UNK_TYPE _vt$15PedGroupLocator$18IHudMapIconLocator;
// extern UNK_TYPE _vt$15PedGroupLocator;
// extern UNK_TYPE _vt$13LocatorLoader$14IWrappedLoader;
// extern UNK_TYPE _vt$13LocatorLoader;
// extern UNK_TYPE _vt$14IWrappedLoader;
// extern UNK_TYPE _vt$18IntersectionLoader;
// extern UNK_TYPE _vt$16SoundFileHandler;
// extern UNK_TYPE _vt$18ScroobyFileHandler$Q27Scrooby19LoadProjectCallback;
// extern UNK_TYPE _vt$18ScroobyFileHandler;
// extern UNK_TYPE _vt$15IconFileHandler$26IRadFileCompletionCallback;
// extern UNK_TYPE _vt$15IconFileHandler;
// extern UNK_TYPE _vt$14P3DFileHandler$11FileHandler;
// extern UNK_TYPE _vt$14P3DFileHandler;
// extern UNK_TYPE _vt$18ConsoleFileHandler$26IRadFileCompletionCallback;
// extern UNK_TYPE _vt$18ConsoleFileHandler;
// extern UNK_TYPE _vt$17ChoreoFileHandler$26IRadFileCompletionCallback;
// extern UNK_TYPE _vt$17ChoreoFileHandler;
// extern UNK_TYPE _vt$17CementFileHandler$35IRadCementLibraryCompletionCallback;
// extern UNK_TYPE _vt$17CementFileHandler;
// extern UNK_TYPE _vt$14LoadingManager;
// extern UNK_TYPE _vt$11FileHandler;
// extern UNK_TYPE _vt$18WalkerCamDataChunk;
// extern UNK_TYPE _vt$Q212tLoadRequest8Callback;
// extern UNK_TYPE D_0045CC18;
// extern UNK_TYPE D_0045CC38;
// extern UNK_TYPE D_0045CC68;
// extern UNK_TYPE D_0045CC78;
// extern UNK_TYPE D_0045CC90;
// extern UNK_TYPE D_0045CCA8;
// extern UNK_TYPE D_0045CCB8;
// extern UNK_TYPE D_0045CCD0;
// extern UNK_TYPE D_0045CCE0;
// extern UNK_TYPE D_0045CCF8;
// extern UNK_TYPE D_0045CD10;
// extern UNK_TYPE D_0045CD20;
// extern UNK_TYPE D_0045CD38;
// extern UNK_TYPE D_0045CD50;
// extern UNK_TYPE D_0045CD60;
// extern UNK_TYPE D_0045CD78;
// extern UNK_TYPE D_0045CD90;
// extern UNK_TYPE D_0045CDA8;
// extern UNK_TYPE D_0045CDB8;
// extern UNK_TYPE D_0045CDC8;
// extern UNK_TYPE D_0045CDE0;
// extern UNK_TYPE D_0045CE00;
// extern UNK_TYPE D_0045CE18;
// extern UNK_TYPE D_0045CE28;
// extern UNK_TYPE _t13_Alloc_traits2ZP11RoadSegmentZt7s2alloc1ZP11RoadSegment$_S_instanceless;
// extern UNK_TYPE _vt$Q27Scrooby19LoadProjectCallback;
// extern UNK_TYPE _vt$Q211FileHandler16LoadFileCallback;
// extern UNK_TYPE _vt$35IRadCementLibraryCompletionCallback;
// extern UNK_TYPE _vt$15radLoadCallback;
// extern UNK_TYPE D_0045CF20;
// extern UNK_TYPE D_0045CF50;
// extern UNK_TYPE D_0045CF98;
// extern UNK_TYPE D_0045CFC0;

#endif
