#ifndef COMPOSITEDRAWABLE_HPP
#define COMPOSITEDRAWABLE_HPP

#include "loadmanager.hpp"

// text

// void __18tCompositeDrawablei();
// void _$_18tCompositeDrawable();
// void Clone__18tCompositeDrawableP5tPose();
// void Display__18tCompositeDrawableP5tPose();
// void ProcessShaders__18tCompositeDrawableRQ29tDrawable14ShaderCallback();
// void SetPose__18tCompositeDrawableP5tPose();
// void FindNode__18tCompositeDrawableG13tUidUnaligned();
// void FindNodeIndex__18tCompositeDrawableG13tUidUnaligned();
// void AddProp__18tCompositeDrawableP9tDrawablei();
// void AddEffect__18tCompositeDrawableP7tEffecti();
// void AddPose__18tCompositeDrawableP13tDrawablePose();
// void func_00344B28();
// void SetDrawable__Q218tCompositeDrawable19DrawablePropElementP9tDrawable();
// void Draw__Q218tCompositeDrawable19DrawablePropElementP5tPose();
// void SetDrawable__Q218tCompositeDrawable19DrawablePoseElementP9tDrawable();
// void SetPose__Q218tCompositeDrawable19DrawablePoseElementP5tPose();
// void Draw__Q218tCompositeDrawable19DrawablePoseElementP5tPose();
// void SetDrawable__Q218tCompositeDrawable21DrawableEffectElementP9tDrawable();
// void Draw__Q218tCompositeDrawable21DrawableEffectElementP5tPose();

class tCompositeDrawableLoader : public tSimpleChunkHandler {
public:
    tCompositeDrawableLoader(void);
private:
    virtual UNK_TYPE *LoadObject(tChunkFile *, tEntityStore *); // void LoadObject__24tCompositeDrawableLoaderP10tChunkFileP12tEntityStore();

private:
    /* 0x04 */ UNK_PAD unk_04[0x10];
}; // size = 0x14

// void func_00346158();
// void __tfQ218tCompositeDrawable19DrawablePropElement();
// void __tfQ218tCompositeDrawable19DrawablePoseElement();
// void __tfQ218tCompositeDrawable21DrawableEffectElement();
// void __tft6tArray1ZPQ218tCompositeDrawable15DrawableElement();
// void __tft16tPtrDynamicArray1ZPQ218tCompositeDrawable15DrawableElement();
// void __tf18tCompositeDrawable();
// void __tf24tCompositeDrawableLoader();
// void func_003463B8();
// void __8tPosable();
// void _$_t16tPtrDynamicArray1ZPQ218tCompositeDrawable15DrawableElement();
// void Display__18tCompositeDrawable();
// void GetBoundingBox__18tCompositeDrawablePQ218RadicalMathLibrary5Box3D();
// void GetBoundingSphere__18tCompositeDrawablePQ218RadicalMathLibrary6Sphere();
// void Display__Q218tCompositeDrawable15DrawableElement();
// void SetPose__Q218tCompositeDrawable15DrawableElementP5tPose();
// void SetVisibility__Q218tCompositeDrawable15DrawableElementb();
// void SetLockVisibility__Q218tCompositeDrawable15DrawableElementb();
// void func_00346550();
// void _$_Q218tCompositeDrawable19DrawablePropElement();
// void GetUID__Q218tCompositeDrawable19DrawablePropElement();
// void GetDrawable__Q218tCompositeDrawable19DrawablePropElement();
// void SetPoseIndex__Q218tCompositeDrawable19DrawablePropElementi();
// void GetWorldMatrix__Q218tCompositeDrawable19DrawablePropElement();
// void _$_Q218tCompositeDrawable19DrawablePoseElement();
// void GetUID__Q218tCompositeDrawable19DrawablePoseElement();
// void GetDrawable__Q218tCompositeDrawable19DrawablePoseElement();
// void GetWorldMatrix__Q218tCompositeDrawable19DrawablePoseElement();
// void func_00346748();
// void _$_Q218tCompositeDrawable21DrawableEffectElement();
// void GetUID__Q218tCompositeDrawable21DrawableEffectElement();
// void SetVisibility__Q218tCompositeDrawable21DrawableEffectElementb();
// void GetDrawable__Q218tCompositeDrawable21DrawableEffectElement();
// void SetPoseIndex__Q218tCompositeDrawable21DrawableEffectElementi();
// void GetWorldMatrix__Q218tCompositeDrawable21DrawableEffectElement();
// void func_003468A8();
// void _$_24tCompositeDrawableLoader();
// void _$_t6tArray1ZPQ218tCompositeDrawable15DrawableElement();
// void SetSize__t6tArray1ZPQ218tCompositeDrawable15DrawableElementi();
// void SetSize__t9tPtrArray1ZPQ218tCompositeDrawable15DrawableElementi();
// void func_00346A78();
// void __tf8tPosable();
// void func_00346AF0();
// void __tft9tPtrArray1ZPQ218tCompositeDrawable15DrawableElement();
// void func_00346B50();
// void _$_t9tPtrArray1ZPQ218tCompositeDrawable15DrawableElement();
// void _$_Q218tCompositeDrawable15DrawableElement();
// void func_00346C48();

// rodata

// extern UNK_TYPE D_00491708;
// extern UNK_TYPE D_00491710;
// extern UNK_TYPE D_00491718;
// extern UNK_TYPE D_00491728;
// extern UNK_TYPE D_0049172C;
// extern UNK_TYPE _vt$24tCompositeDrawableLoader;
// extern UNK_TYPE _vt$18tCompositeDrawable$8tPosable;
// extern UNK_TYPE _vt$18tCompositeDrawable;
// extern UNK_TYPE _vt$t16tPtrDynamicArray1ZPQ218tCompositeDrawable15DrawableElement;
// extern UNK_TYPE _vt$t6tArray1ZPQ218tCompositeDrawable15DrawableElement;
// extern UNK_TYPE _vt$Q218tCompositeDrawable21DrawableEffectElement;
// extern UNK_TYPE _vt$Q218tCompositeDrawable19DrawablePoseElement;
// extern UNK_TYPE _vt$Q218tCompositeDrawable19DrawablePropElement;
// extern UNK_TYPE D_00491988;
// extern UNK_TYPE D_004919B8;
// extern UNK_TYPE D_004919E8;
// extern UNK_TYPE D_00491A18;
// extern UNK_TYPE D_00491A50;
// extern UNK_TYPE D_00491A90;
// extern UNK_TYPE D_00491AA8;
// extern UNK_TYPE D_00491AB0;
// extern UNK_TYPE _vt$Q218tCompositeDrawable15DrawableElement;
// extern UNK_TYPE _vt$8tPosable;
// extern UNK_TYPE D_00491C00;
// extern UNK_TYPE D_00491C38;

#endif
