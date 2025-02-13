#ifndef ANIMATE_HPP
#define ANIMATE_HPP

#include "loadmanager.hpp"

// text

// void AnimationGroupCompareByGroupID__FPCvT0();
// void AnimationGroupCompareByUID__FPCvT0();
// void __16tFrameController();
// void __16tFrameControllerP16tFrameController();
// void _$_16tFrameController();
// void __25tAnimationFrameController();
// void __25tAnimationFrameControllerP25tAnimationFrameController();
// void _$_25tAnimationFrameController();
// void Reset__25tAnimationFrameController();
// void __22tSimpleFrameController();
// void __22tSimpleFrameControllerP22tSimpleFrameController();
// void _$_22tSimpleFrameController();
// void SetAnimation__22tSimpleFrameControllerP10tAnimation();
// void SetAnimation__22tSimpleFrameControllerP10tAnimationff();
// void GetAnimation__22tSimpleFrameController();
// void GetNumFrames__22tSimpleFrameController();
// void SetFrame__22tSimpleFrameControllerf();
// void GetFrame__22tSimpleFrameController();
// void LastFrameReached__22tSimpleFrameController();
// void Advance__22tSimpleFrameControllerfb();
// void Reset__22tSimpleFrameController();
// void __21tBlendFrameController();
// void __21tBlendFrameControllerP21tBlendFrameController();
// void _$_21tBlendFrameController();
// void SetAnimation__21tBlendFrameControllerP10tAnimation();
// void SetAnimation__21tBlendFrameControllerP10tAnimationf();
// void SetAnimation__21tBlendFrameControllerP10tAnimationff();
// void GetAnimation__21tBlendFrameController();
// void GetNumFrames__21tBlendFrameController();
// void SetFrame__21tBlendFrameControllerf();
// void GetFrame__21tBlendFrameController();
// void Advance__21tBlendFrameControllerfb();
// void Update__21tBlendFrameController();
// void RemoveOldestAnim__21tBlendFrameController();
// void __Q221tBlendFrameController8PlayInfo();
// void _$_Q221tBlendFrameController8PlayInfo();
// void SetAnimation__Q221tBlendFrameController8PlayInfoP10tAnimation();
// void Reset__Q221tBlendFrameController8PlayInfo();
// void NullAnimation__Q221tBlendFrameController8PlayInfo();
// void Reset__21tBlendFrameController();
// void LastFrameReached__21tBlendFrameController();

class tFrameControllerLoader : public tSimpleChunkHandler {
public:
    tFrameControllerLoader(void);
private:
    // void _$_22tFrameControllerLoader();
    virtual UNK_RET LoadObject(tChunkFile *, tEntityStore *); // void LoadObject__22tFrameControllerLoaderP10tChunkFileP12tEntityStore();
    // void CheckFC__22tFrameControllerLoaderUi();
    // void LoadFC__22tFrameControllerLoaderPcUiP10tChunkFileP12tEntityStore();

private:
    /* 0x04 */ UNK_PAD unk_04[0x18];
}; // size = 0x1C

// void __21tAnimationMemoryBlockUi();
// void _$_21tAnimationMemoryBlock();
// void Allocate__21tAnimationMemoryBlockUii();
// void __15tAnimationGroup();
// void _$_15tAnimationGroup();
// void CleanUp__15tAnimationGroup();
// void GetIntChannel__C15tAnimationGroupUi();
// void GetFloat1Channel__C15tAnimationGroupUi();
// void GetFloat2Channel__C15tAnimationGroupUi();
// void GetVectorChannel__C15tAnimationGroupUi();
// void GetRotationChannel__C15tAnimationGroupUi();
// void func_0033A350();
// void GetEntityChannel__C15tAnimationGroupUi();
// void GetBoolChannel__C15tAnimationGroupUi();
// void GetColourChannel__C15tAnimationGroupUi();
// void GetEventChannel__C15tAnimationGroupUi();
// void GetChannel__C15tAnimationGroupi();
// void FindChannel__C15tAnimationGroupUi();
// void __10tAnimation();
// void _$_10tAnimation();
// void GetGroupByIndex__C10tAnimationi();
// void GetGroupById__C10tAnimationi();
// void func_0033A770();
// void GetGroupByUID__C10tAnimationG13tUidUnaligned();
// void func_0033A958();
// void MakeValidFrame__C10tAnimationfff12p3dCycleMode();
// void SortAnimationGroups__10tAnimation();

class tAnimationLoader : public tSimpleChunkHandler {
public:
    tAnimationLoader(void);
private:
    virtual UNK_RET LoadObject(tChunkFile *, tEntityStore *); // void LoadObject__16tAnimationLoaderP10tChunkFileP12tEntityStore();
    // void LoadAnimationGroup__16tAnimationLoaderP10tChunkFileP12tEntityStoreP21tAnimationMemoryBlock();

private:
    /* 0x04 */ UNK_PAD unk_04[0x14];
}; // size = 0x14

// void __tf16tFrameController();
// void __tf25tAnimationFrameController();
// void __tf22tSimpleFrameController();
// void __tf21tBlendFrameController();
// void __tf22tFrameControllerLoader();
// void __tf21tAnimationMemoryBlock();
// void __tf15tAnimationGroup();
// void __tf10tAnimation();
// void __tf16tAnimationLoader();
// void func_0033B3D0();
// void SetFrameRange__25tAnimationFrameControllerff();
// void SetCycleMode__25tAnimationFrameController12p3dCycleMode();
// void GetCycleMode__25tAnimationFrameController();
// void SetRelativeSpeed__25tAnimationFrameControllerf();
// void GetRelativeSpeed__25tAnimationFrameController();
// void func_0033B410();
// void _$_16tAnimationLoader();
// void func_0033B480();
// void __Q216radLoadInventoryt8SafeCast1Z15tAnimatedObject();
// void func_0033B4C0();
// void __Q216radLoadInventoryt8SafeCast1Z16tExpressionMixer();
// void func_0033B500();
// void __Q216radLoadInventoryt8SafeCast1Z7tEffect();
// void __Q216radLoadInventoryt8SafeCast1Z9tGeometry();
// void func_0033B598();
// void __tf7tEffect();
// void func_0033B608();
// void __tfQ216radLoadInventoryt8SafeCast1Z15tAnimatedObject();
// void func_0033B668();
// void __tfQ216radLoadInventoryt8SafeCast1Z16tExpressionMixer();
// void func_0033B6C8();
// void __tfQ216radLoadInventoryt8SafeCast1Z7tEffect();
// void __tfQ216radLoadInventoryt8SafeCast1Z9tGeometry();
// void func_0033B7A0();
// void safe_cast__Q216radLoadInventoryt8SafeCast1Z9tGeometryP9IRefCount();
// void safe_cast__Q216radLoadInventoryt8SafeCast1Z7tEffectP9IRefCount();
// void func_0033B848();
// void safe_cast__Q216radLoadInventoryt8SafeCast1Z16tExpressionMixerP9IRefCount();
// void func_0033B8C0();
// void safe_cast__Q216radLoadInventoryt8SafeCast1Z15tAnimatedObjectP9IRefCount();
// void func_0033B918();

// rodata

// extern UNK_TYPE D_00490268;
// extern UNK_TYPE D_00490280;
// extern UNK_TYPE D_004902C8;
// extern UNK_TYPE D_004902D0;
// extern UNK_TYPE D_004902E0;
// extern UNK_TYPE _vt$16tAnimationLoader;
// extern UNK_TYPE _vt$10tAnimation;
// extern UNK_TYPE _vt$15tAnimationGroup;
// extern UNK_TYPE _vt$21tAnimationMemoryBlock;
// extern UNK_TYPE _vt$22tFrameControllerLoader;
// extern UNK_TYPE _vt$21tBlendFrameController;
// extern UNK_TYPE _vt$22tSimpleFrameController;
// extern UNK_TYPE _vt$25tAnimationFrameController;
// extern UNK_TYPE _vt$16tFrameController;
// extern UNK_TYPE D_00490720;
// extern UNK_TYPE D_00490738;
// extern UNK_TYPE D_00490758;
// extern UNK_TYPE D_00490778;
// extern UNK_TYPE D_00490790;
// extern UNK_TYPE D_004907B0;
// extern UNK_TYPE D_004907C8;
// extern UNK_TYPE D_004907E0;
// extern UNK_TYPE D_004907F0;
// extern UNK_TYPE _vt$Q216radLoadInventoryt8SafeCast1Z9tGeometry;
// extern UNK_TYPE _vt$Q216radLoadInventoryt8SafeCast1Z7tEffect;
// extern UNK_TYPE _vt$Q216radLoadInventoryt8SafeCast1Z16tExpressionMixer;
// extern UNK_TYPE _vt$Q216radLoadInventoryt8SafeCast1Z15tAnimatedObject;
// extern UNK_TYPE D_004909A0;
// extern UNK_TYPE D_004909E0;
// extern UNK_TYPE D_00490A48;
// extern UNK_TYPE D_00490B88;
// extern UNK_TYPE D_00490BB8;

#endif
