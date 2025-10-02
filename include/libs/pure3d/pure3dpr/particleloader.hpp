#ifndef PARTICLELOADER_HPP
#define PARTICLELOADER_HPP

#include "loadmanager.hpp"

// text

// void LoadGeneratorFactory__23tGeneratorFactoryLoaderUiP10tChunkFileP12tEntityStore();
// void LoadEmitterFactory__21tEmitterFactoryLoaderP10tChunkFileP12tEntityStore();
// void LoadBaseEmitterFactoryData__21tEmitterFactoryLoaderP10tChunkFileP12tEntityStoreP19tBaseEmitterFactory();
// void LoadSpriteEmitterFactoryData__21tEmitterFactoryLoaderP10tChunkFileP12tEntityStoreP21tSpriteEmitterFactory();
// void LoadBaseParticleData__21tEmitterFactoryLoaderP10tAnimationP19tBaseEmitterFactory();
// void LoadSpriteParticleData__21tEmitterFactoryLoaderP10tAnimationP21tSpriteEmitterFactory();

class tParticleSystemFactoryLoader : public tSimpleChunkHandler {
public:
    tParticleSystemFactoryLoader(void);
private:
    virtual UNK_TYPE *LoadObject(tChunkFile *, tEntityStore *); // void LoadObject__28tParticleSystemFactoryLoaderP10tChunkFileP12tEntityStore();

private:
    /* 0x04 */ UNK_PAD unk_04[0x10];
}; // size = 0x14

class tParticleSystemLoader : public tSimpleChunkHandler {
public:
    tParticleSystemLoader(void);
private:
    virtual UNK_TYPE *LoadObject(tChunkFile *, tEntityStore *); // void LoadObject__21tParticleSystemLoaderP10tChunkFileP12tEntityStore();

private:
    /* 0x04 */ UNK_PAD unk_04[0x10];
}; // size = 0x14

// void func_00359138();
// void __tf28tParticleSystemFactoryLoader();
// void __tf21tParticleSystemLoader();
// void func_00359240();
// void _$_28tParticleSystemFactoryLoader();
// void _$_21tParticleSystemLoader();
// void func_003592F8();
// void __Q216radLoadInventoryt8SafeCast1Z22tParticleSystemFactory();
// void func_00359338();
// void __tfQ216radLoadInventoryt8SafeCast1Z22tParticleSystemFactory();
// void func_003593A8();
// void safe_cast__Q216radLoadInventoryt8SafeCast1Z22tParticleSystemFactoryP9IRefCount();
// void func_00359400();
// void _GLOBAL_$I$LoadGeneratorFactory__23tGeneratorFactoryLoaderUiP10tChunkFileP12tEntityStore();

// rodata

// extern UNK_TYPE D_00494770;
// extern UNK_TYPE D_00494778;
// extern UNK_TYPE D_00494780;
// extern UNK_TYPE _vt$21tParticleSystemLoader;
// extern UNK_TYPE _vt$28tParticleSystemFactoryLoader;
// extern UNK_TYPE D_00494850;
// extern UNK_TYPE D_00494870;
// extern UNK_TYPE _vt$Q216radLoadInventoryt8SafeCast1Z22tParticleSystemFactory;
// extern UNK_TYPE D_00494940;

// bss

// extern UNK_TYPE D_004B6EC0;
// extern UNK_TYPE D_004B6ED0;
// extern UNK_TYPE D_004B6ED8;

#endif
