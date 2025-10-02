#ifndef CHUNKFILE_HPP
#define CHUNKFILE_HPP

#include "types.h"
#include "unk.h"

// text

class tChunkFile_unk_210 {
private:
    /* vt 0x0C */ virtual UNK_RET virtual_0C(UNK_ARGS);
    /* vt 0x14 */ virtual UNK_RET virtual_14(UNK_ARGS);
    /* vt 0x1C */ virtual UNK_RET virtual_1C(UNK_ARGS);
    /* vt 0x24 */ virtual UNK_RET virtual_24(UNK_ARGS);
    /* vt 0x2C */ virtual UNK_RET virtual_2C(UNK_ARGS);
    /* vt 0x34 */ virtual UNK_RET virtual_34(UNK_ARGS);
    /* vt 0x3C */ virtual UNK_RET virtual_3C(UNK_ARGS);
    /* vt 0x44 */ virtual UNK_RET virtual_44(UNK_ARGS);
    /* vt 0x4C */ virtual UNK_RET virtual_4C(UNK_ARGS);
    /* vt 0x54 */ virtual UNK_RET virtual_54(UNK_ARGS);
    /* vt 0x5C */ virtual UNK_RET virtual_5C(UNK_ARGS);
public:
    // arg3 is some kind of bytesize?
    /* vt 0x64 */ virtual UNK_RET virtual_64(void *arg1, UNK_TYPE4 arg2, UNK_TYPE4 arg3);
};

class tChunkFile {
    /* 0x000 */ UNK_PAD unk_000[0x210];
public:
    /* 0x210 */ tChunkFile_unk_210 *unk_210;
private:
    /*       */ // size >= 0x211

private:
    // void __10tChunkFileP5tFile();
    // void _$_10tChunkFile();
public:
    UNK_TYPE ChunksRemaining(void); // void ChunksRemaining__10tChunkFile();
    UNK_TYPE4 BeginChunk(void); // void BeginChunk__10tChunkFile();
private:
    // void BeginChunk__10tChunkFileUi();
public:
    void EndChunk(void); // void EndChunk__10tChunkFile();
private:
    // void GetCurrentID__10tChunkFile();
    // void BeginInset__10tChunkFile();
    // void EndInset__10tChunkFileP5tFile();
    // void __tf10tChunkFile();
    // void Read__10tChunkFilePvUiUi();
    // void GetSize__10tChunkFile();
    // void GetPosition__10tChunkFile();
    // extern UNK_TYPE _vt$10tChunkFile;
};

// void _$_13radLoadStream();
// void GetEndianSwap__13radLoadStream();
// void SetEndianSwap__13radLoadStreamb();
// void func_0031CD50();
// void func_0031CE28();
// void __tf13radLoadStream();

// rodata

// extern UNK_TYPE D_0048D128;
// extern UNK_TYPE D_0048D138;

#endif
