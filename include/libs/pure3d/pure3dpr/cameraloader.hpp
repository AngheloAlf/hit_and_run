#ifndef CAMERALOADER_HPP
#define CAMERALOADER_HPP

#include "loadmanager.hpp"

// text

class tCameraLoader : public tSimpleChunkHandler {
public:
    tCameraLoader(void);
private:
    virtual UNK_RET LoadObject(tChunkFile *, tEntityStore *); // void LoadObject__13tCameraLoaderP10tChunkFileP12tEntityStore();

private:
    /* 0x04 */ UNK_PAD unk_04[0x10];
}; // size = 0x14

// void __tf13tCameraLoader();
// void func_0031C5E8();
// void _$_13tCameraLoader();
// void func_0031C648();

// rodata

// extern UNK_TYPE D_0048D018;
// extern UNK_TYPE _vt$13tCameraLoader;
// extern UNK_TYPE D_0048D080;

#endif
