#ifndef SEQUENCER_HPP
#define SEQUENCER_HPP

#include "loadmanager.hpp"

// text

// void __22tStateSequencerCommand();
// void _$_22tStateSequencerCommand();
// void __16tStateTransition();
// void _$_16tStateTransition();
// void __15tSequencerState();
// void _$_15tSequencerState();
// void DefaultTransition__15tSequencerState();
// void __13tSubPartState();
// void _$_13tSubPartState();
// void SetState__13tSubPartStateP15tSequencerStatefff();
// void SetEventController__13tSubPartStateP16tEventController();
// void SetAnimationTarget__13tSubPartStateP21tBlendFrameController();
// void Kill__13tSubPartState();
// void func_0034D940();
// void __10tSequencer();
// void _$_10tSequencer();
// void func_0034DBC0();
// void SetRelativeSpeed__10tSequencerf();
// void SetAnimationTarget__10tSequencerP7tEntityb();
// void func_0034DD40();
// void HandleCommand__10tSequencerP22tStateSequencerCommandP13tSubPartState();
// void func_0034DE48();
// void __16tSequencerLoader();
// void _$_16tSequencerLoader();
// void Load__16tSequencerLoaderP10tChunkFileP12tEntityStore();
// void Load__16tSequencerLoaderP5tFileP12tEntityStore();
// void CheckChunkID__16tSequencerLoaderUi();
// void ParseScript__16tSequencerLoaderP14TextDataParser();
// void ParseSequencer__16tSequencerLoaderP14TextDataParser();
// void ParseStates__16tSequencerLoaderP14TextDataParserP10tSequencer();
// void ParseState__16tSequencerLoaderP14TextDataParserP15tSequencerState();
// void ParseTransitions__16tSequencerLoaderP14TextDataParserP15tSequencerState();
// void ParseTransition__16tSequencerLoaderP14TextDataParserP16tStateTransition();
// void FixupTransitions__16tSequencerLoaderP10tSequencer();
// void BuildSubParts__16tSequencerLoaderP10tSequencer();
// void FindState__16tSequencerLoaderP10tSequencerPc();


class tSEQFileHandler : public tFileHandler {
public:
    tSEQFileHandler(void);
private:
    // void _$_15tSEQFileHandler();
    // void CheckExtension__15tSEQFileHandlerPc();
    // void Load__15tSEQFileHandlerP5tFileP12tEntityStore();

private:
    /* 0x04 */ UNK_PAD unk_04[0x0C];
}; // size = 0x10

// void __tf22tStateSequencerCommand();
// void __tf16tStateTransition();
// void __tf15tSequencerState();
// void __tft6tArray1ZP15tSequencerState();
// void __tft9tPtrArray1ZP15tSequencerState();
// void __tft6tArray1Z13tSubPartState();
// void __tf10tSequencer();
// void __tf16tSequencerLoader();
// void __tf15tSEQFileHandler();
// void func_003500A0();
// void __21tEventOriginSequencer();
// void SetStartFrame__22tStateSequencerCommandf();
// void func_00350100();
// void _$_t9tPtrArray1ZP15tSequencerState();
// void func_00350170();
// void GetChunkID__16tSequencerLoader();
// void _$_t6tArray1ZP15tSequencerState();
// void _$_t6tArray1Z13tSubPartState();
// void SetSize__t6tArray1ZP15tSequencerStatei();
// void SetSize__t9tPtrArray1ZP15tSequencerStatei();
// void SetSize__t6tArray1Z13tSubPartStatei();
// void __Q216radLoadInventoryt8SafeCast1Z21tBlendFrameController();
// void func_00350498();
// void _$_21tEventOriginSequencer();
// void __tf21tEventOriginSequencer();
// void __tfQ216radLoadInventoryt8SafeCast1Z21tBlendFrameController();
// void func_003505D0();
// void __12tEventOrigin();
// void AddRef__21tEventOriginSequencer();
// void Release__21tEventOriginSequencer();
// void Origin__21tEventOriginSequencer();
// void func_00350648();
// void safe_cast__Q216radLoadInventoryt8SafeCast1Z21tBlendFrameControllerP9IRefCount();
// void func_003506A0();
// void __tf12tEventOrigin();
// void Origin__12tEventOrigin();

// rodata

// extern UNK_TYPE D_00492E50;
// extern UNK_TYPE jtbl_00492E60;
// extern UNK_TYPE D_00492E78;
// extern UNK_TYPE D_00492E88;
// extern UNK_TYPE D_00492E98;
// extern UNK_TYPE D_00492EA0;
// extern UNK_TYPE D_00492EE0;
// extern UNK_TYPE D_00492F10;
// extern UNK_TYPE D_00492F48;
// extern UNK_TYPE D_00492F50;
// extern UNK_TYPE D_00492F60;
// extern UNK_TYPE D_00492F68;
// extern UNK_TYPE D_00492F78;
// extern UNK_TYPE D_00492F80;
// extern UNK_TYPE D_00492F88;
// extern UNK_TYPE D_00492F90;
// extern UNK_TYPE D_00492FC0;
// extern UNK_TYPE D_00493000;
// extern UNK_TYPE D_00493028;
// extern UNK_TYPE D_00493048;
// extern UNK_TYPE D_00493080;
// extern UNK_TYPE D_00493088;
// extern UNK_TYPE D_004930D0;
// extern UNK_TYPE D_00493128;
// extern UNK_TYPE D_00493158;
// extern UNK_TYPE D_00493190;
// extern UNK_TYPE D_004931C8;
// extern UNK_TYPE D_004931D0;
// extern UNK_TYPE D_004931D8;
// extern UNK_TYPE D_004931E8;
// extern UNK_TYPE D_004931F8;
// extern UNK_TYPE D_00493200;
// extern UNK_TYPE D_00493208;
// extern UNK_TYPE D_00493218;
// extern UNK_TYPE D_00493228;
// extern UNK_TYPE D_00493238;
// extern UNK_TYPE D_00493248;
// extern UNK_TYPE D_00493278;
// extern UNK_TYPE D_00493288;
// extern UNK_TYPE D_00493298;
// extern UNK_TYPE D_004932A8;
// extern UNK_TYPE D_004932D8;
// extern UNK_TYPE D_00493310;
// extern UNK_TYPE D_00493348;
// extern UNK_TYPE D_00493358;
// extern UNK_TYPE D_00493360;
// extern UNK_TYPE D_00493390;
// extern UNK_TYPE D_004933D0;
// extern UNK_TYPE D_00493400;
// extern UNK_TYPE D_00493408;
// extern UNK_TYPE D_00493410;
// extern UNK_TYPE D_00493418;
// extern UNK_TYPE D_00493428;
// extern UNK_TYPE D_00493438;
// extern UNK_TYPE D_00493448;
// extern UNK_TYPE D_00493458;
// extern UNK_TYPE D_00493460;
// extern UNK_TYPE D_00493468;
// extern UNK_TYPE D_00493470;
// extern UNK_TYPE D_00493478;
// extern UNK_TYPE D_00493480;
// extern UNK_TYPE D_00493488;
// extern UNK_TYPE D_00493498;
// extern UNK_TYPE D_004934A8;
// extern UNK_TYPE D_004934B8;
// extern UNK_TYPE D_004934F0;
// extern UNK_TYPE D_00493520;
// extern UNK_TYPE _vt$15tSEQFileHandler;
// extern UNK_TYPE _vt$16tSequencerLoader;
// extern UNK_TYPE _vt$10tSequencer;
// extern UNK_TYPE _vt$t6tArray1Z13tSubPartState;
// extern UNK_TYPE _vt$t9tPtrArray1ZP15tSequencerState;
// extern UNK_TYPE _vt$t6tArray1ZP15tSequencerState;
// extern UNK_TYPE _vt$15tSequencerState;
// extern UNK_TYPE _vt$16tStateTransition;
// extern UNK_TYPE _vt$22tStateSequencerCommand;
// extern UNK_TYPE D_004936E0;
// extern UNK_TYPE D_00493700;
// extern UNK_TYPE D_00493718;
// extern UNK_TYPE D_00493730;
// extern UNK_TYPE D_00493750;
// extern UNK_TYPE D_00493770;
// extern UNK_TYPE D_00493790;
// extern UNK_TYPE D_004937A0;
// extern UNK_TYPE D_004937B8;
// extern UNK_TYPE _vt$Q216radLoadInventoryt8SafeCast1Z21tBlendFrameController;
// extern UNK_TYPE _vt$21tEventOriginSequencer$12tEventOrigin;
// extern UNK_TYPE _vt$21tEventOriginSequencer;
// extern UNK_TYPE D_004938F0;
// extern UNK_TYPE D_00493908;
// extern UNK_TYPE D_00493918;
// extern UNK_TYPE _vt$12tEventOrigin;
// extern UNK_TYPE D_00493A20;

#endif
