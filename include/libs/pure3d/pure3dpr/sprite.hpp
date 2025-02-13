#ifndef SPRITE_HPP
#define SPRITE_HPP

#include "loadmanager.hpp"

// text

// void __7tSpriteP6tImageP7tShaderiiiP15tImageConverter();
// void __7tSpritePP8tTextureiiiP7tShaderiiiP15tImageConverter();
// void _$_7tSprite();
// void ProcessShaders__7tSpriteRQ29tDrawable14ShaderCallback();
// void SelectSegment__7tSpritei();
// void SetBlitBorder__7tSpritei();
// void CalcSections__7tSpritePP5tRectRiT2();
// void func_0032F348();
// void BuildSections__7tSpriteP6tImageP15tImageConverter();
// void BuildTexture__7tSpriteiR5tRectiiP6tImageT5P15tImageConverter();
// void BuildPoly__7tSpriteiR5tRectii();
// void SetColour__7tSpriteG10pddiColour();
// void Display__7tSprite();

class tSpriteLoader : public tSimpleChunkHandler {
public:
    tSpriteLoader(void);
private:
    // void _$_13tSpriteLoader();
    virtual UNK_RET LoadObject(tChunkFile *, tEntityStore *); // void LoadObject__13tSpriteLoaderP10tChunkFileP12tEntityStore();
    // void LoadImage__13tSpriteLoaderP10tChunkFilei();
    // void LoadTexture__13tSpriteLoaderP10tChunkFilei();

private:
    /* 0x04 */ UNK_PAD unk_04[0x20];
}; // size = 0x24

// void __tf7tSprite();
// void __tf13tSpriteLoader();
// void func_00331330();
// void __9sprVertex();
// void GetBoundingBox__7tSpritePQ218RadicalMathLibrary5Box3D();
// void GetBoundingSphere__7tSpritePQ218RadicalMathLibrary6Sphere();
// void func_003313A8();
// void SetNormalization__13tSpriteLoaderb();
// void GetNormalization__13tSpriteLoader();
// void func_003313C0();

// data

// extern UNK_TYPE _7tSprite$createLinear;
// extern UNK_TYPE D_004365DD;
// extern UNK_TYPE D_004365E0;

// bss

// extern UNK_TYPE D_004B2E90;

// rodata

// extern UNK_TYPE D_0048F890;
// extern UNK_TYPE D_0048F8A0;
// extern UNK_TYPE D_0048F8A8;
// extern UNK_TYPE _vt$13tSpriteLoader;
// extern UNK_TYPE _vt$7tSprite;
// extern UNK_TYPE D_0048F980;
// extern UNK_TYPE D_0048F990;

#endif
