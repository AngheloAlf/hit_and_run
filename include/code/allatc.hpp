#ifndef ALLATC_HPP
#define ALLATC_HPP

#include "libs/pure3d/pure3dpr/loadmanager.hpp"

// text

class ATCManager {
public:
    static void CreateInstance();

private:
// void GetInstance__10ATCManager();

public:
    static void DestroyInstance(void);

private:
// void CreateCollisionAttributes__10ATCManagerUiUif();
// void Init__10ATCManager();
// void SetATCTable__10ATCManagerP12AttributeRowUi();
// void __10ATCManager();
// void _$_10ATCManager();
};

class ATCLoader : public tSimpleChunkHandler {
public:
    ATCLoader(void);
private:
    // void _$_9ATCLoader();
    virtual UNK_TYPE *LoadObject(tChunkFile *, tEntityStore *); // void LoadObject__9ATCLoaderP10tChunkFileP12tEntityStore();

private:
    /* 0x04 */ UNK_PAD unk_04[0x10];
}; // size = 0x14

// void __tf9ATCLoader();

// data

// extern UNK_TYPE _10ATCManager$spInstance;
// extern UNK_TYPE D_00424B5C;

// rodata

// extern UNK_TYPE D_00455FB8;
// extern UNK_TYPE D_00455FC8;
// extern UNK_TYPE D_00455FD8;
// extern UNK_TYPE D_00455FE0;
// extern UNK_TYPE D_00455FE8;
// extern UNK_TYPE _vt$9ATCLoader;
// extern UNK_TYPE D_00456050;
// extern UNK_TYPE D_00456090;

#endif
