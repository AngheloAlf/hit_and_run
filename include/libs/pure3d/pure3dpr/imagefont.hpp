#ifndef IMAGEFONT_HPP
#define IMAGEFONT_HPP

#include "loadmanager.hpp"

// text

// void __11tImageGlyph();
// void _$_11tImageGlyph();
// void __10tImageFont();
// void _$_10tImageFont();
// void GetTextHeight__C10tImageFontPCUs();
// void GetTextWidth__C10tImageFontPCUs();
// void DisplayText__C10tImageFontP6tImageiiPCUsi();
// void func_00323148();
// void GetLineWidth__C10tImageFontPCUs();
// void DisplayLine__C10tImageFontP6tImageiiPCUsi();
// void FindGlyph__C10tImageFontUs();

class tImageFontLoader : public tSimpleChunkHandler {
public:
    tImageFontLoader(void);
private:
    virtual UNK_RET LoadObject(tChunkFile *, tEntityStore *); // void LoadObject__16tImageFontLoaderP10tChunkFileP12tEntityStore();

private:
    /* 0x04 */ UNK_PAD unk_04[0x10];
}; // size = 0x14

// void __tf10tImageFont();
// void __tf16tImageFontLoader();
// void func_00323B90();
// void GetFontSize__C10tImageFont();
// void GetFontWidth__C10tImageFont();
// void GetFontHeight__C10tImageFont();
// void GetFontBaseLine__C10tImageFont();
// void GetLineSpacing__C10tImageFont();
// void SetLineSpacing__10tImageFontUi();
// void GetColour__C10tImageFont();
// void SetColour__10tImageFontG10pddiColour();
// void func_00323BD8();
// void _$_16tImageFontLoader();
// void func_00323C38();

// rodata

// extern UNK_TYPE D_0048DF80;
// extern UNK_TYPE _vt$16tImageFontLoader;
// extern UNK_TYPE _vt$10tImageFont;
// extern UNK_TYPE D_0048E078;
// extern UNK_TYPE D_0048E088;

#endif
