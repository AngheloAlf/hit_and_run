#ifndef TEXTUREFONT_HPP
#define TEXTUREFONT_HPP

#include "loadmanager.hpp"

// text

// void __13tTextureGlyph();
// void _$_13tTextureGlyph();

class tTextureFont {
private:
    // void __12tTextureFont();
    // void _$_12tTextureFont();
    // void GetTextHeight__C12tTextureFontPCUs();
    // void GetTextWidth__C12tTextureFontPCUs();
    // void SetShader__12tTextureFontP7tShader();

public:
    void SetMissingLetter(u16);

private:
    // void GetLineWidth__C12tTextureFontPCUs();
    // void DisplayLine__C12tTextureFontPCUsi();
    // void FindGlyph__C12tTextureFontUs();
    // void DrawGlyph__C12tTextureFontP13ps2PrimStreamUif();
    // void DrawBlank__C12tTextureFontP13ps2PrimStreamff();
};

class tTextureFontLoader : public tSimpleChunkHandler {
public:
    tTextureFontLoader(void);
private:
    virtual UNK_RET LoadObject(tChunkFile *, tEntityStore *); // void LoadObject__18tTextureFontLoaderP10tChunkFileP12tEntityStore();

private:
    /* 0x04 */ UNK_PAD unk_04[0x10];
}; // size = 0x14

// void __tf12tTextureFont();
// void __tf18tTextureFontLoader();
// void func_00335440();
// void __5tFont();
// void GetFontSize__C12tTextureFont();
// void GetFontWidth__C12tTextureFont();
// void GetFontHeight__C12tTextureFont();
// void GetFontBaseLine__C12tTextureFont();
// void GetLineSpacing__C12tTextureFont();
// void SetLineSpacing__12tTextureFontf();
// void GetColour__C12tTextureFont();
// void SetColour__12tTextureFontG10pddiColour();
// void GetShader__C12tTextureFont();

// void func_003354D0();
// void _$_18tTextureFontLoader();
// void func_00335530();

// rodata

// extern UNK_TYPE D_0048FDC0;
// extern UNK_TYPE D_0048FDC8;
// extern UNK_TYPE D_0048FDD0;
// extern UNK_TYPE _vt$18tTextureFontLoader;
// extern UNK_TYPE _vt$12tTextureFont;
// extern UNK_TYPE D_0048FEE0;
// extern UNK_TYPE D_0048FEF0;

#endif
