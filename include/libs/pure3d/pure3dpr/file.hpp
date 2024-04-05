#ifndef FILE_HPP
#define FILE_HPP

#include "types.h"
#include "unk.h"

#include "libs/radcontent/radcontentpr/object.hpp"

// text

class tFile : public radLoadObject {
    // void __5tFile();
    // void _$_5tFile();
public:
    void SetFilename(char const *);
private:
    // void UncompressBlock__5tFilePUcUiT1Ui();
};

class tFileMem : public tFile {
public:
    tFileMem(u8 *, u32, bool);
private:
    // void _$_8tFileMem();
    // void GetData__8tFileMemPvUiQ25tFile8DataType();
    // void EndOfFile__8tFileMem();
    // void GetSize__8tFileMem();
    // void Advance__8tFileMemUi();
    // void GetPosition__8tFileMem();
    // void GetMemory__8tFileMem();
    // void SetCompressed__8tFileMemb();
    // void SetUncompressedSize__8tFileMemi();

private:
    /* 0x08 */ UNK_PAD unk_04[0x24];
}; // size = 0x28

// void __tf5tFile();
// void __tf8tFileMem();
// void func_0031E9E8();
// void SetPosition__5tFilei();
// void Read__5tFilePvUiUi();
// void SetCompressed__5tFileb();
// void SetUncompressedSize__5tFilei();
// void func_0031EA30();
// void GetEndianSwap__8tFileMem();
// void SetEndianSwap__8tFileMemb();
// void func_0031EAA0();

// rodata

// extern UNK_TYPE D_0048D4B0;
// extern UNK_TYPE D_0048D4B8;
// extern UNK_TYPE _vt$8tFileMem;
// extern UNK_TYPE _vt$5tFile;
// extern UNK_TYPE D_0048D5C8;
// extern UNK_TYPE D_0048D5D0;

#endif
