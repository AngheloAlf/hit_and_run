#ifndef LOCATOR_HPP
#define LOCATOR_HPP

#include "loadmanager.hpp"

// text

// void __8tLocator();
// void _$_8tLocator();
// void SetPosition__8tLocatorGQ218RadicalMathLibrary6Vector();

class tLocatorLoader : public tSimpleChunkHandler {
public:
    tLocatorLoader(void);
private:
    virtual UNK_TYPE *LoadObject(tChunkFile *, tEntityStore *); // void LoadObject__14tLocatorLoaderP10tChunkFileP12tEntityStore();

private:
    /* 0x04 */ UNK_PAD unk_04[0x10];
}; // size = 0x14

// void __tf8tLocator();
// void __tf14tLocatorLoader();
// void func_00326B20();
// void _$_14tLocatorLoader();
// void func_00326B80();

// rodata

// extern UNK_TYPE _vt$14tLocatorLoader;
// extern UNK_TYPE _vt$8tLocator;
// extern UNK_TYPE D_0048E7F0;
// extern UNK_TYPE D_0048E800;

#endif
