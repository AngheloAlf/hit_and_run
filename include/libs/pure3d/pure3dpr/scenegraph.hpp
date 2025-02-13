#ifndef SCENEGRAPH_HPP
#define SCENEGRAPH_HPP

#include "loadmanager.hpp"

#include "loadmanager.hpp"

// text

// void __Q210Scenegraph10Scenegraph();
// void _$_Q210Scenegraph10Scenegraph();
// void SetRoot__Q210Scenegraph10ScenegraphPQ210Scenegraph4Node();
// void UpdateTransform__Q210Scenegraph10Scenegraph();
// void Display__Q210Scenegraph10Scenegraph();
// void func_0035B688();
// void Search__Q210Scenegraph10ScenegraphPQ210Scenegraph4NodeG13tUidUnaligned();
// void ProcessShaders__Q210Scenegraph10ScenegraphRQ29tDrawable14ShaderCallback();
// void Visit__Q210Scenegraph15DrawableCounterPQ210Scenegraph4Node();
// void Visit__Q210Scenegraph26TranslucentDrawableCounterPQ210Scenegraph4Node();
// void Traverse__Q210Scenegraph19SceneGraphTraversalPQ210Scenegraph4NodeRQ210Scenegraph17SceneGraphVisitor();
// void __Q210Scenegraph8IteratorPQ210Scenegraph10Scenegraph();
// void _$_Q210Scenegraph8Iterator();
// void First__Q210Scenegraph8Iterator();
// void Next__Q210Scenegraph8Iterator();
// void First__Q210Scenegraph18LightGroupIterator();
// void Next__Q210Scenegraph18LightGroupIterator();
// void GetLightGroup__Q210Scenegraph18LightGroupIterator();
// void __Q210Scenegraph4Node();
// void _$_Q210Scenegraph4Node();
// void SetParent__Q210Scenegraph4NodePQ210Scenegraph4Node();
// void GetParent__Q210Scenegraph4Node();
// void GetTransform__Q210Scenegraph4Node();
// void GetWorldTransform__Q210Scenegraph4Node();
// void SetFlags__Q210Scenegraph4NodebUiQ310Scenegraph4Node11PropagationT1();
// void __Q210Scenegraph6Branchi();
// void _$_Q210Scenegraph6Branch();
// void GetNumChildren__Q210Scenegraph6Branch();
// void GetChild__Q210Scenegraph6BranchUi();
// void AddChild__Q210Scenegraph6BranchPQ210Scenegraph4Node();
// void RemoveChild__Q210Scenegraph6BranchPQ210Scenegraph4Node();
// void Display__Q210Scenegraph6BranchRCQ218RadicalMathLibrary6MatrixR11DisplayList();
// void CustomDisplay__Q210Scenegraph6BranchRCQ218RadicalMathLibrary6MatrixPQ210Scenegraph21CustomDisplayCallback();
// void UpdateTransform__Q210Scenegraph6BranchRCQ218RadicalMathLibrary6Matrix();
// void SetFlags__Q210Scenegraph6BranchbUiQ310Scenegraph4Node11PropagationT1();
// void Resize__Q210Scenegraph6Branchi();
// void __Q210Scenegraph4Leaf();
// void _$_Q210Scenegraph4Leaf();
// void GetNumChildren__Q210Scenegraph4Leaf();
// void GetChild__Q210Scenegraph4LeafUi();
// void UpdateTransform__Q210Scenegraph4LeafRCQ218RadicalMathLibrary6Matrix();
// void Display__Q210Scenegraph4LeafRCQ218RadicalMathLibrary6MatrixR11DisplayList();
// void CustomDisplay__Q210Scenegraph4LeafRCQ218RadicalMathLibrary6MatrixPQ210Scenegraph21CustomDisplayCallback();
// void __Q210Scenegraph9Transformi();
// void _$_Q210Scenegraph9Transform();
// void GetTransform__Q210Scenegraph9Transform();
// void GetWorldTransform__Q210Scenegraph9Transform();
// void ModifyTransform__Q210Scenegraph9Transform();
// void Display__Q210Scenegraph9TransformRCQ218RadicalMathLibrary6MatrixR11DisplayList();
// void CustomDisplay__Q210Scenegraph9TransformRCQ218RadicalMathLibrary6MatrixPQ210Scenegraph21CustomDisplayCallback();
// void UpdateTransform__Q210Scenegraph9TransformRCQ218RadicalMathLibrary6Matrix();
// void func_0035CB18();
// void __Q210Scenegraph8DrawableP9tDrawable();
// void _$_Q210Scenegraph8Drawable();
// void Display__Q210Scenegraph8DrawableRCQ218RadicalMathLibrary6MatrixR11DisplayList();
// void CustomDisplay__Q210Scenegraph8DrawableRCQ218RadicalMathLibrary6MatrixPQ210Scenegraph21CustomDisplayCallback();
// void __Q210Scenegraph10AttachmentP13tDrawablePosei();
// void _$_Q210Scenegraph10Attachment();
// void func_0035CDC8();
// void AddChild__Q210Scenegraph10AttachmentPQ210Scenegraph4Node();
// void SetAttachment__Q210Scenegraph10AttachmentiPQ210Scenegraph4Node();
// void Display__Q210Scenegraph10AttachmentRCQ218RadicalMathLibrary6MatrixR11DisplayList();
// void EvaluateAttachments__Q210Scenegraph10Attachment();
// void UpdateTransform__Q210Scenegraph10AttachmentRCQ218RadicalMathLibrary6Matrix();
// void Resize__Q210Scenegraph10Attachmenti();
// void __Q210Scenegraph10Visibilityi();
// void Display__Q210Scenegraph10VisibilityRCQ218RadicalMathLibrary6MatrixR11DisplayList();
// void CustomDisplay__Q210Scenegraph10VisibilityRCQ218RadicalMathLibrary6MatrixPQ210Scenegraph21CustomDisplayCallback();
// void __Q210Scenegraph6CameraP7tCamera();
// void _$_Q210Scenegraph6Camera();
// void __Q210Scenegraph10LightGroupP11tLightGroup();
// void _$_Q210Scenegraph10LightGroup();
// void GetLights__Q210Scenegraph10LightGroup();

namespace Scenegraph {
    class Loader : public tSimpleChunkHandler {
    public:
        Loader(void);
    private:
        virtual UNK_RET LoadObject(tChunkFile *, tEntityStore *); // void LoadObject__Q210Scenegraph6LoaderP10tChunkFileP12tEntityStore();

    private:
        /* 0x04 */ UNK_PAD unk_04[0x28];
    }; // size = 0x2C
};

// void LoadObject__Q210Scenegraph23SceneGraphGenericLoaderP10tChunkFileP12tEntityStore();
// void LoadNode__Q210Scenegraph23SceneGraphGenericLoaderP10tChunkFileP12tEntityStorePQ218RadicalMathLibrary6Matrix();
// void func_0035E620();
// void __tfQ210Scenegraph4Node();
// void __tfQ210Scenegraph6Branch();
// void __tfQ210Scenegraph4Leaf();
// void __tfQ210Scenegraph9Transform();
// void __tfQ210Scenegraph8Drawable();
// void __tfQ210Scenegraph10Attachment();
// void __tfQ210Scenegraph6Camera();
// void __tfQ210Scenegraph10LightGroup();
// void __tfQ210Scenegraph10Scenegraph();
// void __tfQ210Scenegraph10Visibility();
// void __tfQ210Scenegraph6Loader();
// void __tfQ210Scenegraph15DrawableCounter();
// void __tfQ210Scenegraph26TranslucentDrawableCounter();
// void __tfQ210Scenegraph8Iterator();
// void _$_Q210Scenegraph18LightGroupIterator();
// void __tfQ210Scenegraph18LightGroupIterator();
// void __tfQ210Scenegraph13ShaderVisitor();
// void func_0035EC28();
// void GetBoundingBox__Q210Scenegraph10ScenegraphPQ218RadicalMathLibrary5Box3D();
// void GetBoundingSphere__Q210Scenegraph10ScenegraphPQ218RadicalMathLibrary6Sphere();
// void _$_Q210Scenegraph10Visibility();
// void __Q210Scenegraph23SceneGraphGenericLoader();
// void _$_Q210Scenegraph6Loader();
// void __Q210Scenegraph17SceneGraphVisitor();
// void __Q210Scenegraph26TranslucentDrawableCounter();
// void IsDone__Q210Scenegraph8Iterator();
// void GetNode__Q210Scenegraph8Iterator();
// void func_0035EE58();
// void Visit__Q210Scenegraph13ShaderVisitorPQ210Scenegraph4Node();
// void func_0035EEE8();
// void __tfQ210Scenegraph17SceneGraphVisitor();
// void func_0035EF60();
// void _GLOBAL_$I$__Q210Scenegraph10Scenegraph();

// rodata

// extern UNK_TYPE D_00494D00;
// extern UNK_TYPE D_00494D04;
// extern UNK_TYPE D_00494D08;
// extern UNK_TYPE D_00494D10;
// extern UNK_TYPE D_00494D18;
// extern UNK_TYPE D_00494D28;
// extern UNK_TYPE D_00494D2C;
// extern UNK_TYPE jtbl_00494D30;
// extern UNK_TYPE _vt$Q210Scenegraph13ShaderVisitor;
// extern UNK_TYPE _vt$Q210Scenegraph18LightGroupIterator;
// extern UNK_TYPE _vt$Q210Scenegraph8Iterator;
// extern UNK_TYPE _vt$Q210Scenegraph26TranslucentDrawableCounter;
// extern UNK_TYPE _vt$Q210Scenegraph15DrawableCounter;
// extern UNK_TYPE _vt$Q210Scenegraph6Loader;
// extern UNK_TYPE _vt$Q210Scenegraph10Visibility;
// extern UNK_TYPE _vt$Q210Scenegraph10Scenegraph;
// extern UNK_TYPE _vt$Q210Scenegraph10LightGroup;
// extern UNK_TYPE _vt$Q210Scenegraph6Camera;
// extern UNK_TYPE _vt$Q210Scenegraph10Attachment;
// extern UNK_TYPE _vt$Q210Scenegraph8Drawable;
// extern UNK_TYPE _vt$Q210Scenegraph9Transform;
// extern UNK_TYPE _vt$Q210Scenegraph4Leaf;
// extern UNK_TYPE _vt$Q210Scenegraph6Branch;
// extern UNK_TYPE _vt$Q210Scenegraph4Node;
// extern UNK_TYPE D_00495348;
// extern UNK_TYPE D_00495360;
// extern UNK_TYPE D_00495378;
// extern UNK_TYPE D_00495390;
// extern UNK_TYPE D_004953B0;
// extern UNK_TYPE D_004953C8;
// extern UNK_TYPE D_004953E8;
// extern UNK_TYPE D_00495400;
// extern UNK_TYPE D_00495420;
// extern UNK_TYPE D_00495440;
// extern UNK_TYPE D_00495460;
// extern UNK_TYPE D_00495478;
// extern UNK_TYPE D_00495498;
// extern UNK_TYPE D_004954C8;
// extern UNK_TYPE D_004954E0;
// extern UNK_TYPE D_00495508;
// extern UNK_TYPE _vt$Q210Scenegraph17SceneGraphVisitor;
// extern UNK_TYPE D_004955F8;

// bss

// extern UNK_TYPE D_004B6F38;
// extern UNK_TYPE D_004B6F78;
// extern UNK_TYPE D_004B6FB8;
// extern UNK_TYPE D_004B70B8;

#endif
