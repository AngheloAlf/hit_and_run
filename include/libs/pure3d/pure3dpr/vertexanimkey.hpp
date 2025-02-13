#ifndef VERTEXANIMKEY_HPP
#define VERTEXANIMKEY_HPP

#include "loadmanager.hpp"

// text

// void __16tOffsetIndexList();
// void _$_16tOffsetIndexList();
// void CreateIndex__16tOffsetIndexListi();
// void __17tColourOffsetList();
// void _$_17tColourOffsetList();
// void CreateOffsets__17tColourOffsetListi();
// void __17tVectorOffsetList();
// void _$_17tVectorOffsetList();
// void CreateOffsets__17tVectorOffsetListi();
// void __18tVector2OffsetList();
// void _$_18tVector2OffsetList();
// void CreateOffsets__18tVector2OffsetListi();
// void func_00354888();
// void __14tVertexAnimKey();
// void _$_14tVertexAnimKey();

class tVertexAnimKeyLoader : public tSimpleChunkHandler {
public:
    tVertexAnimKeyLoader(void);
private:
    virtual UNK_RET LoadObject(tChunkFile *, tEntityStore *); // void LoadObject__20tVertexAnimKeyLoaderP10tChunkFileP12tEntityStore();

private:
    /* 0x04 */ UNK_PAD unk_04[0x10];
}; // size = 0x14

// void LoadObject__17tOffsetListLoaderP10tChunkFileP12tEntityStoreUiRi();
// void LoadVectorOffsetList__17tOffsetListLoaderP10tChunkFileP12tEntityStoreRi();
// void LoadVector2OffsetList__17tOffsetListLoaderP10tChunkFileP12tEntityStoreRi();
// void LoadColourOffsetList__17tOffsetListLoaderP10tChunkFileP12tEntityStore();
// void __tf16tOffsetIndexList();
// void __tf17tColourOffsetList();
// void __tf17tVectorOffsetList();
// void __tf18tVector2OffsetList();
// void __tf14tVertexAnimKey();
// void __tf20tVertexAnimKeyLoader();
// void func_00355388();
// void _$_20tVertexAnimKeyLoader();
// void func_003553F0();

// rodata

// extern UNK_TYPE _vt$20tVertexAnimKeyLoader;
// extern UNK_TYPE _vt$14tVertexAnimKey;
// extern UNK_TYPE _vt$18tVector2OffsetList;
// extern UNK_TYPE _vt$17tVectorOffsetList;
// extern UNK_TYPE _vt$17tColourOffsetList;
// extern UNK_TYPE _vt$16tOffsetIndexList;
// extern UNK_TYPE D_00494328;
// extern UNK_TYPE D_00494340;
// extern UNK_TYPE D_00494358;
// extern UNK_TYPE D_00494370;
// extern UNK_TYPE D_00494388;
// extern UNK_TYPE D_004943A0;

#endif
