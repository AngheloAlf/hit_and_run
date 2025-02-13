#ifndef OPTICLOADER_HPP
#define OPTICLOADER_HPP

#include "loadmanager.hpp"

// text

class tLensFlareGroupLoader : public tSimpleChunkHandler {
public:
    tLensFlareGroupLoader(void);
private:
    virtual UNK_RET LoadObject(tChunkFile *, tEntityStore *); // void LoadObject__21tLensFlareGroupLoaderP10tChunkFileP12tEntityStore();
    // void LoadLensFlare__21tLensFlareGroupLoaderP10tChunkFileP12tEntityStore();

private:
    /* 0x04 */ UNK_PAD unk_04[0x10];
}; // size = 0x14

// void __tf21tLensFlareGroupLoader();
// void func_003579F8();
// void _$_21tLensFlareGroupLoader();
// void func_00357A58();

// rodata

// extern UNK_TYPE D_004945F8;
// extern UNK_TYPE D_00494600;
// extern UNK_TYPE D_00494608;
// extern UNK_TYPE _vt$21tLensFlareGroupLoader;
// extern UNK_TYPE D_00494678;

#endif
