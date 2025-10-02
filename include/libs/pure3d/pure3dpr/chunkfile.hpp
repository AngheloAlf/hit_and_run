#ifndef CHUNKFILE_HPP
#define CHUNKFILE_HPP

#include "types.h"
#include "unk.h"

// text

class tChunkFile {
    /* 0x000 */ UNK_PAD unk_000[0x210];
public:

private:
    // void __10tChunkFileP5tFile();
    // void _$_10tChunkFile();
public:
    UNK_RET ChunksRemaining(void); // void ChunksRemaining__10tChunkFile();
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
