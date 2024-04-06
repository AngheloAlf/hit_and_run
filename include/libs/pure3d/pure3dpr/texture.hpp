#ifndef TEXTURE_HPP
#define TEXTURE_HPP

#include "loadmanager.hpp"

// text

// void __8tTexture();
// void _$_8tTexture();
// void Create__8tTextureiiiii15pddiTextureType20pddiTextureUsageHint();
// void func_00332688();

class tSetLoader : public tChunkHandler {
public:
    tSetLoader(void);
private:
    // void _$_10tSetLoader();
    // void func_00332720();
    // void Load__10tSetLoaderP10tChunkFileP12tEntityStore();
    // void CheckChunkID__10tSetLoaderUi();
    // void GetChunkID__10tSetLoader();
};

class tTextureLoader : public tChunkHandler {
public:
    void TextureLoader(void);
private:
    // void _$_14tTextureLoader();
    // void LoadObject__14tTextureLoaderP10tChunkFileP12tEntityStore();
    // void LoadTexture__14tTextureLoaderP10tChunkFile();
    // void LoadImage__14tTextureLoaderP10tChunkFileP13tImageFactoryP8tTexturei();
    // void LoadVolumeImage__14tTextureLoaderP10tChunkFileP13tImageFactoryP8tTextureii();
};

// void func_003332B0();
// void __tf8tTexture();
// void __tf14tTextureLoader();
// void __tf10tSetLoader();
// void func_00333408();
// void _GLOBAL_$I$__8tTexture();
// void _GLOBAL_$D$__8tTexture();

// rodata

// extern UNK_TYPE D_0048FC60;
// extern UNK_TYPE _vt$10tSetLoader;
// extern UNK_TYPE _vt$14tTextureLoader;
// extern UNK_TYPE _vt$8tTexture;
// extern UNK_TYPE D_0048FD40;
// extern UNK_TYPE D_0048FD50;
// extern UNK_TYPE D_0048FD68;

// data

// extern UNK_TYPE _10tSetLoader$m_Random;

#endif
