#ifndef ANIMATEDOBJECT_HPP
#define ANIMATEDOBJECT_HPP

#include "loadmanager.hpp"

// text

// void __22tAnimatedObjectFactory();
// void _$_22tAnimatedObjectFactory();
// void CreateObject__22tAnimatedObjectFactoryP30tAnimatedObjectFrameControllerP5tPose();
// void __24tAnimatedObjectAnimation();
// void _$_24tAnimatedObjectAnimation();
// void Clone__C24tAnimatedObjectAnimation();
// void GetFrameControllerByIndex__C24tAnimatedObjectAnimationUi();
// void func_0033C140();
// void Advance__24tAnimatedObjectAnimationf();
// void __15tAnimatedObject();
// void _$_15tAnimatedObject();
// void Display__15tAnimatedObject();
// void ProcessShaders__15tAnimatedObjectRQ29tDrawable14ShaderCallback();
// void __30tAnimatedObjectFrameController();
// void __30tAnimatedObjectFrameControllerP30tAnimatedObjectFrameController();
// void _$_30tAnimatedObjectFrameController();
// void SetRelativeSpeed__30tAnimatedObjectFrameControllerf();
// void SetFrame__30tAnimatedObjectFrameControllerf();
// void SetFrameRange__30tAnimatedObjectFrameControllerff();
// void SetCycleMode__30tAnimatedObjectFrameController12p3dCycleMode();
// void Advance__30tAnimatedObjectFrameControllerfb();
// void Reset__30tAnimatedObjectFrameController();
// void Clone__30tAnimatedObjectFrameController();
// void Update__30tAnimatedObjectFrameController();

class tAnimatedObjectFactoryLoader : public tSimpleChunkHandler {
public:
    tAnimatedObjectFactoryLoader(void);
private:
    virtual UNK_TYPE *LoadObject(tChunkFile *, tEntityStore *); // void LoadObject__28tAnimatedObjectFactoryLoaderP10tChunkFileP12tEntityStore();

private:
    /* 0x04 */ UNK_PAD unk_04[0x10];
}; // size = 0x14

class tAnimatedObjectLoader : public tSimpleChunkHandler {
public:
    tAnimatedObjectLoader(void);
private:
    virtual UNK_TYPE *LoadObject(tChunkFile *, tEntityStore *); // void LoadObject__21tAnimatedObjectLoaderP10tChunkFileP12tEntityStore();

private:
    /* 0x04 */ UNK_PAD unk_04[0x10];
}; // size = 0x14

// void func_0033D408();
// void LoadObject__30tAnimatedObjectAnimationLoaderP10tChunkFileP12tEntityStore();
// void func_0033D778();
// void __tf22tAnimatedObjectFactory();
// void __tf24tAnimatedObjectAnimation();
// void __tf15tAnimatedObject();
// void __tf30tAnimatedObjectFrameController();
// void __tf28tAnimatedObjectFactoryLoader();
// void __tf21tAnimatedObjectLoader();
// void func_0033D9E0();
// void GetRelativeSpeed__30tAnimatedObjectFrameController();
// void GetNumFrames__30tAnimatedObjectFrameController();
// void GetFrame__30tAnimatedObjectFrameController();
// void GetCycleMode__30tAnimatedObjectFrameController();
// void LastFrameReached__30tAnimatedObjectFrameController();
// void _$_28tAnimatedObjectFactoryLoader();
// void _$_21tAnimatedObjectLoader();
// void func_0033DB00();
// void _GLOBAL_$I$__22tAnimatedObjectFactory();

// rodata

// extern UNK_TYPE D_00490C28;
// extern UNK_TYPE D_00490C30;
// extern UNK_TYPE D_00490C38;
// extern UNK_TYPE _vt$21tAnimatedObjectLoader;
// extern UNK_TYPE _vt$28tAnimatedObjectFactoryLoader;
// extern UNK_TYPE _vt$30tAnimatedObjectFrameController;
// extern UNK_TYPE _vt$15tAnimatedObject;
// extern UNK_TYPE _vt$24tAnimatedObjectAnimation;
// extern UNK_TYPE _vt$22tAnimatedObjectFactory;
// extern UNK_TYPE D_00490E30;
// extern UNK_TYPE D_00490E50;
// extern UNK_TYPE D_00490E70;
// extern UNK_TYPE D_00490E88;
// extern UNK_TYPE D_00490EB0;
// extern UNK_TYPE D_00490ED0;

// bss

// extern UNK_TYPE D_004B2E98;
// extern UNK_TYPE D_004B2EA8;
// extern UNK_TYPE D_004B2EB0;

#endif
