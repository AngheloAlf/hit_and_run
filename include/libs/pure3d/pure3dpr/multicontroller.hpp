#ifndef MULTICONTROLLER_HPP
#define MULTICONTROLLER_HPP

#include "animate.hpp"
#include "loadmanager.hpp"

// text


struct tMultiController_unk_34 {
    /* 0x00 */ UNK_PAD unk_00[0x8];
    /* 0x08 */ float unk_08;
    /* 0x0C */ UNK_PAD unk_0C[0x4];
    /*      */ // size = 0x10
};


// TODO: move somewhere else
enum p3dCycleMode {
    /* 0 */ P3DCYCLEMODE_0,
    /* 1 */ P3DCYCLEMODE_1,
    /* 2 */ P3DCYCLEMODE_2,
};

class tMultiController : public tFrameController {
    /* 0x10 */ float unk_10;
    /* 0x14 */ float unk_14;
    /* 0x18 */ float unk_18;
    /* 0x1C */ UNK_TYPE unk_1C;
    /* 0x20 */ float unk_20;
public:
    /* 0x24 */ float unk_24;
private:
    /* 0x28 */ float unk_28;
    /* 0x2C */ p3dCycleMode unk_2C;
    /* 0x30 */ int unk_30;
    /* 0x34 */ tMultiController_unk_34 *unk_34;
    /* 0x38 */ tFrameController **unk_38; // track?
    /* 0x3C */ UNK_TYPE unk_3C;
    /*      */ // size >= 0x40

public:
    tMultiController(int arg1, float arg2);
private:
    ~tMultiController(void);
    s32 Clone(void);
    void Advance(float arg1, bool arg2);
    void SetFrame(float arg1);
    float GetFrame(void);
    void SetFrameRange(float arg1, float arg2);
    const tFrameController *GetTrack(size_t arg1);
public:
    void SetTrack(size_t arg1, tFrameController *arg2);
private:
    void Update(void);

    p3dCycleMode GetCycleMode(void);
    void SetCycleMode(p3dCycleMode);
    float GetNumFrames(void);
    void SetRelativeSpeed(float arg1);
    float GetRelativeSpeed(void);
    UNK_TYPE LastFrameReached(void);
    void Reset(void);

private:
    /* vt 0x7C */ virtual void virtual_7C();
    /* vt 0x84 */ virtual void virtual_84(float);
};


// void __16tMultiControllerif();
// void _$_16tMultiController();
// void Clone__16tMultiController();
// void Advance__16tMultiControllerfb();
// void SetFrame__16tMultiControllerf();
// void GetFrame__16tMultiController();
// void SetFrameRange__16tMultiControllerff();
// void func_0034A598();
// void GetTrack__16tMultiControllerUi();
// void SetTrack__16tMultiControllerUiP16tFrameController();
// void func_0034A648();
// void Update__16tMultiController();

class tMultiControllerLoader : public tSimpleChunkHandler {
    /* 0x04 */ UNK_PAD unk_04[0x4];
    /* 0x08 */ UNK_TYPE unk_08;
    /* 0x0C */ UNK_PAD unk_0C[0x4];
    /* 0x10 */ UNK_TYPE unk_10;
    /*      */ // size = 0x14

public:
    tMultiControllerLoader(void);
private:
    virtual UNK_TYPE *LoadObject(tChunkFile *, tEntityStore *); // void LoadObject__22tMultiControllerLoaderP10tChunkFileP12tEntityStore();
};

// void __tf16tMultiController();
// void __tf22tMultiControllerLoader();
// void func_0034B2C8();
// void GetCycleMode__16tMultiController();
// void SetCycleMode__16tMultiController12p3dCycleMode();
// void GetNumFrames__16tMultiController();
// void func_0034B2F0();
// void SetRelativeSpeed__16tMultiControllerf();
// void GetRelativeSpeed__16tMultiController();
// void LastFrameReached__16tMultiController();
// void Reset__16tMultiController();
// void func_0034B340();
// void _$_22tMultiControllerLoader();
// void func_0034B3A0();

// rodata

// extern UNK_TYPE D_00492700;
// extern UNK_TYPE D_004927D0;
// extern UNK_TYPE D_004927D8;
// extern UNK_TYPE D_004927E8;
// extern UNK_TYPE _vt$22tMultiControllerLoader;
// extern UNK_TYPE _vt$16tMultiController;
// extern UNK_TYPE D_00492908;
// extern UNK_TYPE D_00492920;

// data

// extern UNK_TYPE D_00436614;
// extern UNK_TYPE D_00436615;

#endif
