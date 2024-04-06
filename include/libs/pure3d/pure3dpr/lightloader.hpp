#ifndef LIGHTLOADER_HPP
#define LIGHTLOADER_HPP

#include "loadmanager.hpp"

// text

class tLightLoader : public tChunkHandler {
public:
    tLightLoader(void);
private:
    // void LoadObject__12tLightLoaderP10tChunkFileP12tEntityStore();

private:
    /* 0x04 */ UNK_PAD unk_04[0x10];
}; // size = 0x14

class tLightGroupLoader : public tChunkHandler {
public:
    tLightGroupLoader(void);
private:
    // void LoadObject__17tLightGroupLoaderP10tChunkFileP12tEntityStore();

private:
    /* 0x04 */ UNK_PAD unk_04[0x10];
}; // size = 0x14

// void __tf12tLightLoader();
// void __tf17tLightGroupLoader();
// void func_00326640();
// void _$_12tLightLoader();
// void _$_17tLightGroupLoader();
// void __Q216radLoadInventoryt8SafeCast1Z6tLight();
// void func_00326730();
// void __tfQ216radLoadInventoryt8SafeCast1Z6tLight();
// void func_00326798();
// void safe_cast__Q216radLoadInventoryt8SafeCast1Z6tLightP9IRefCount();
// void func_003267F0();

// rodata

// extern UNK_TYPE D_0048E560;
// extern UNK_TYPE jtbl_0048E570;
// extern UNK_TYPE D_0048E590;
// extern UNK_TYPE D_0048E598;
// extern UNK_TYPE _vt$17tLightGroupLoader;
// extern UNK_TYPE _vt$12tLightLoader;
// extern UNK_TYPE D_0048E668;
// extern UNK_TYPE D_0048E678;
// extern UNK_TYPE _vt$Q216radLoadInventoryt8SafeCast1Z6tLight;
// extern UNK_TYPE D_0048E700;

#endif
