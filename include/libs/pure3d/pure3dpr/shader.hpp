#ifndef SHADER_HPP
#define SHADER_HPP

#include "loadmanager.hpp"

// text

// void __7tShader();
// void __7tShaderPcT1();
// void _$_7tShader();

class tShaderLoader: public tSimpleChunkHandler {
public:
    tShaderLoader(void);
private:
    // void func_0032DA78();
    virtual UNK_RET LoadObject(tChunkFile *, tEntityStore *); // void LoadObject__13tShaderLoaderP10tChunkFileP12tEntityStore();

private:
    /* 0x04 */ UNK_PAD unk_04[0x10];
}; // size = 0x14

// void CheckChunkID__23tShaderDefinitionLoaderUi();
// void Load__23tShaderDefinitionLoaderP10tChunkFileP12tEntityStore();
// void func_0032E5D8();
// void __tf7tShader();
// void __tf13tShaderLoader();
// void __tf23tShaderDefinitionLoader();
// void func_0032E6E8();
// void _$_13tShaderLoader();
// void _$_23tShaderDefinitionLoader();
// void func_0032E7D0();

// rodata

// extern UNK_TYPE D_0048F5D0;
// extern UNK_TYPE D_0048F5D8;
// extern UNK_TYPE D_0048F608;
// extern UNK_TYPE D_0048F610;
// extern UNK_TYPE D_0048F618;
// extern UNK_TYPE D_0048F620;
// extern UNK_TYPE jtbl_0048F630;
// extern UNK_TYPE _vt$23tShaderDefinitionLoader;
// extern UNK_TYPE _vt$13tShaderLoader;
// extern UNK_TYPE _vt$7tShader;
// extern UNK_TYPE D_0048F738;
// extern UNK_TYPE D_0048F748;
// extern UNK_TYPE D_0048F758;

#endif
