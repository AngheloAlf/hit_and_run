#ifndef BASECONTEXT_HPP
#define BASECONTEXT_HPP

// text

// void Sync__15pddiRenderStateP17pddiRenderContext();
// void Sync__13pddiViewStateP17pddiRenderContext();
// void Sync__17pddiLightingStateP17pddiRenderContext();
// void Sync__12pddiFogStateP17pddiRenderContext();
// void Sync__16pddiStencilStateP17pddiRenderContext();
// void __15pddiBaseContextP11pddiDisplayP10pddiDevice();
// void _$_15pddiBaseContext();
// void DefaultState__15pddiBaseContext();
// void SyncState__15pddiBaseContextUi();
// void BuildStateStacks__15pddiBaseContext();
// void ResetStats__15pddiBaseContext();
// void ComputeFrameStats__15pddiBaseContext();
// void BuildMatrixStacks__15pddiBaseContext();
// void DisplayStats__15pddiBaseContext();
// void BeginFrame__15pddiBaseContext();
// void EndFrame__15pddiBaseContext();
// void SetClearColour__15pddiBaseContextG10pddiColour();
// void GetClearColour__15pddiBaseContext();
// void SetClearDepth__15pddiBaseContextf();
// void GetClearDepth__15pddiBaseContext();
// void SetClearStencil__15pddiBaseContextUi();
// void GetClearStencil__15pddiBaseContext();
// void Clear__15pddiBaseContextUi();
// void IdentityMatrix__15pddiBaseContext14pddiMatrixType();
// void LoadMatrix__15pddiBaseContext14pddiMatrixTypePQ218RadicalMathLibrary6Matrix();
// void PushMatrix__15pddiBaseContext14pddiMatrixType();
// void PopMatrix__15pddiBaseContext14pddiMatrixType();
// void MultMatrix__15pddiBaseContext14pddiMatrixTypePQ218RadicalMathLibrary6Matrix();
// void ScaleMatrix__15pddiBaseContext14pddiMatrixTypefff();
// void GetMatrix__15pddiBaseContext14pddiMatrixType();
// void PushIdentityMatrix__15pddiBaseContext14pddiMatrixType();
// void PushLoadMatrix__15pddiBaseContext14pddiMatrixTypePQ218RadicalMathLibrary6Matrix();
// void PushMultMatrix__15pddiBaseContext14pddiMatrixTypePQ218RadicalMathLibrary6Matrix();
// void SetProjectionMode__15pddiBaseContext18pddiProjectionMode();
// void GetProjectionMode__15pddiBaseContext();
// void SetViewWindow__15pddiBaseContextffff();
// void GetViewWindow__15pddiBaseContextPfN31();
// void SetCamera__15pddiBaseContextffff();
// void GetCamera__15pddiBaseContextPfN31();
// void SetScissor__15pddiBaseContextP8pddiRect();
// void GetScissor__15pddiBaseContextP8pddiRect();
// void BeginPrims__15pddiBaseContextP10pddiShader12pddiPrimTypeUiiUi();
// void EndPrims__15pddiBaseContextP13ps2PrimStream();
// void DrawPrimBuffer__15pddiBaseContextP10pddiShaderP14pddiPrimBuffer();
// void DrawString__15pddiBaseContextPCciiG10pddiColour();
// void GetMaxLights__15pddiBaseContext();
// void SetAmbientLight__15pddiBaseContextG10pddiColour();
// void GetAmbientLight__15pddiBaseContext();
// void SetLight__15pddiBaseContextiP13pddiLightDesc();
// void EnableLight__15pddiBaseContextib();
// void IsLightEnabled__15pddiBaseContexti();
// void SetLightType__15pddiBaseContexti13pddiLightType();
// void GetLightType__15pddiBaseContexti();
// void SetLightColour__15pddiBaseContextiG10pddiColour();
// void GetLightColour__15pddiBaseContexti();
// void SetLightPosition__15pddiBaseContextiPQ218RadicalMathLibrary6Vector();
// void GetLightPosition__15pddiBaseContextiPQ218RadicalMathLibrary6Vector();
// void SetLightDirection__15pddiBaseContextiPQ218RadicalMathLibrary6Vector();
// void GetLightDirection__15pddiBaseContextiPQ218RadicalMathLibrary6Vector();
// void SetLightRange__15pddiBaseContextif();
// void GetLightRange__15pddiBaseContexti();
// void SetLightAttenuation__15pddiBaseContextifff();
// void GetLightAttenuation__15pddiBaseContextiPfN22();
// void SetLightCone__15pddiBaseContextifff();
// void GetLightCone__15pddiBaseContextiPfN22();
// void SetCullMode__15pddiBaseContext12pddiCullMode();
// void GetCullMode__15pddiBaseContext();
// void SetColourWrite__15pddiBaseContextbN31();
// void GetColourWrite__15pddiBaseContextPbN31();
// void EnableZBuffer__15pddiBaseContextb();
// void IsZBufferEnabled__15pddiBaseContext();
// void SetZCompare__15pddiBaseContext15pddiCompareMode();
// void GetZCompare__15pddiBaseContext();
// void SetZWrite__15pddiBaseContextb();
// void GetZWrite__15pddiBaseContext();
// void SetZBias__15pddiBaseContextf();
// void GetZBias__15pddiBaseContext();
// void SetZRange__15pddiBaseContextff();
// void GetZRange__15pddiBaseContextPfT1();
// void EnableStencilBuffer__15pddiBaseContextb();
// void IsStencilBufferEnabled__15pddiBaseContext();
// void SetStencilCompare__15pddiBaseContext15pddiCompareMode();
// void GetStencilCompare__15pddiBaseContext();
// void SetStencilRef__15pddiBaseContexti();
// void GetStencilRef__15pddiBaseContext();
// void SetStencilMask__15pddiBaseContextUi();
// void GetStencilMask__15pddiBaseContext();
// void SetStencilWriteMask__15pddiBaseContextUi();
// void GetStencilWriteMask__15pddiBaseContext();
// void SetStencilOp__15pddiBaseContext13pddiStencilOpN21();
// void GetStencilOp__15pddiBaseContextP13pddiStencilOpN21();
// void SetFillMode__15pddiBaseContext12pddiFillMode();
// void GetFillMode__15pddiBaseContext();
// void EnableFog__15pddiBaseContextb();
// void IsFogEnabled__15pddiBaseContext();
// void SetFog__15pddiBaseContextG10pddiColourff();
// void GetFog__15pddiBaseContextP10pddiColourPfT2();
// void GetIntStat__15pddiBaseContext12pddiStatType();
// void GetFloatStat__15pddiBaseContext12pddiStatType();
// void EnableStatsOverlay__15pddiBaseContextb();
// void IsStatsOverlayEnabled__15pddiBaseContext();
// void PushState__15pddiBaseContext13pddiStateMask();
// void PopState__15pddiBaseContext13pddiStateMask();
// void pddiMemRegAlloc__FPvUi();
// void pddiMemRegFree__FPv();
// void SetMessageCallback__10pddiDevicePQ210pddiDevice15MessageCallback();
// void func_0037C1B8();
// void GetExtension__15pddiBaseContextUi();
// void VerifyExtension__15pddiBaseContextUi();
// void __22pddiExtMemRegistration();
// void __23_pddiExtMemRegistration();
// void _$_23_pddiExtMemRegistration();
// void func_0037C290();
// void __tf10pddiDevice();
// void __tf17pddiRenderContext();
// void __tft9pddiStack1ZQ218RadicalMathLibrary6Matrix();
// void __tf15pddiMatrixStack();
// void __tf15pddiRenderState();
// void __tf13pddiViewState();
// void __tf17pddiLightingState();
// void __tf12pddiFogState();
// void __tf16pddiStencilState();
// void __tf15pddiBaseContext();
// void __tft9pddiStack1Z13pddiViewState();
// void __tft9pddiStack1Z15pddiRenderState();
// void __tft9pddiStack1Z17pddiLightingState();
// void __tft9pddiStack1Z12pddiFogState();
// void __tft9pddiStack1Z16pddiStencilState();
// void _$_10pddiDevice();

class pddiRenderContext {
    // void __17pddiRenderContext();

    /* 0x00 */ UNK_PAD unk_00[0x8];

    /* vt 0x00C */ virtual void virtual_00C(void); /* placeholder */
    /* vt 0x014 */ virtual void virtual_014(void); /* placeholder */
    /* vt 0x01C */ virtual void virtual_01C(void); /* placeholder */
    /* vt 0x024 */ virtual void virtual_024(void); /* placeholder */
    /* vt 0x02C */ virtual void virtual_02C(void); /* placeholder */
    /* vt 0x034 */ virtual void virtual_034(void); /* placeholder */
    /* vt 0x03C */ virtual void virtual_03C(void); /* placeholder */
    /* vt 0x044 */ virtual void virtual_044(void); /* placeholder */
    /* vt 0x04C */ virtual void virtual_04C(void); /* placeholder */
    /* vt 0x054 */ virtual void virtual_054(void); /* placeholder */
    /* vt 0x05C */ virtual void virtual_05C(void); /* placeholder */
    /* vt 0x064 */ virtual void virtual_064(void); /* placeholder */
    /* vt 0x06C */ virtual void virtual_06C(void); /* placeholder */
    /* vt 0x074 */ virtual void virtual_074(void); /* placeholder */
    /* vt 0x07C */ virtual void virtual_07C(void); /* placeholder */
    /* vt 0x084 */ virtual void virtual_084(void); /* placeholder */
    /* vt 0x08C */ virtual void virtual_08C(void); /* placeholder */
    /* vt 0x094 */ virtual void virtual_094(void); /* placeholder */
    /* vt 0x09C */ virtual void virtual_09C(void); /* placeholder */
    /* vt 0x0A4 */ virtual void virtual_0A4(void); /* placeholder */
    /* vt 0x0AC */ virtual void virtual_0AC(void); /* placeholder */
    /* vt 0x0B4 */ virtual void virtual_0B4(void); /* placeholder */
    /* vt 0x0BC */ virtual void virtual_0BC(void); /* placeholder */
    /* vt 0x0C4 */ virtual void virtual_0C4(void); /* placeholder */
    /* vt 0x0CC */ virtual void virtual_0CC(void); /* placeholder */
    /* vt 0x0D4 */ virtual void virtual_0D4(void); /* placeholder */
    /* vt 0x0DC */ virtual void virtual_0DC(void); /* placeholder */
    /* vt 0x0E4 */ virtual void virtual_0E4(void); /* placeholder */
    /* vt 0x0EC */ virtual void virtual_0EC(void); /* placeholder */
    /* vt 0x0F4 */ virtual void virtual_0F4(void); /* placeholder */
    /* vt 0x0FC */ virtual void virtual_0FC(void); /* placeholder */
    /* vt 0x104 */ virtual void virtual_104(void); /* placeholder */
    /* vt 0x10C */ virtual void virtual_10C(void); /* placeholder */
    /* vt 0x114 */ virtual void virtual_114(void); /* placeholder */
    /* vt 0x11C */ virtual void virtual_11C(void); /* placeholder */
    /* vt 0x124 */ virtual void virtual_124(void); /* placeholder */
    /* vt 0x12C */ virtual void virtual_12C(void); /* placeholder */
    /* vt 0x134 */ virtual void virtual_134(void); /* placeholder */
    /* vt 0x13C */ virtual void virtual_13C(void); /* placeholder */
    /* vt 0x144 */ virtual void virtual_144(void); /* placeholder */
    /* vt 0x14C */ virtual void virtual_14C(void); /* placeholder */
    /* vt 0x154 */ virtual void virtual_154(void); /* placeholder */
    /* vt 0x15C */ virtual void virtual_15C(void); /* placeholder */
    /* vt 0x164 */ virtual void virtual_164(void); /* placeholder */
    /* vt 0x16C */ virtual void virtual_16C(void); /* placeholder */
    /* vt 0x174 */ virtual void virtual_174(void); /* placeholder */
    /* vt 0x17C */ virtual void virtual_17C(void); /* placeholder */
    /* vt 0x184 */ virtual void virtual_184(void); /* placeholder */
    /* vt 0x18C */ virtual void virtual_18C(void); /* placeholder */
    /* vt 0x194 */ virtual void virtual_194(void); /* placeholder */
    /* vt 0x19C */ virtual void virtual_19C(void); /* placeholder */
    /* vt 0x1A4 */ virtual void virtual_1A4(void); /* placeholder */
    /* vt 0x1AC */ virtual void virtual_1AC(void); /* placeholder */
    /* vt 0x1B4 */ virtual void virtual_1B4(void); /* placeholder */
    /* vt 0x1BC */ virtual void virtual_1BC(void); /* placeholder */
    /* vt 0x1C4 */ virtual void virtual_1C4(void); /* placeholder */
    /* vt 0x1CC */ virtual void virtual_1CC(void); /* placeholder */
    /* vt 0x1D4 */ virtual void virtual_1D4(void); /* placeholder */
public:
    /* vt 0x1DC */ virtual void virtual_1DC(s32);
};

// void _$_17pddiRenderContext();
// void __13pddiExtension();
// void _$_15pddiMatrixStack();
// void _$_t9pddiStack1ZQ218RadicalMathLibrary6Matrix();
// void __15pddiRenderState();
// void __13pddiViewState();
// void __17pddiLightingState();
// void __12pddiFogState();
// void __16pddiStencilState();
// void DrawSync__15pddiBaseContext();
// void SetRenderTarget__15pddiBaseContextP11pddiTexture();
// void Screenshot__15pddiBaseContextP10pddiColouri();
// void _$_t9pddiStack1Z13pddiViewState();
// void _$_t9pddiStack1Z15pddiRenderState();
// void _$_t9pddiStack1Z17pddiLightingState();
// void _$_t9pddiStack1Z12pddiFogState();
// void _$_t9pddiStack1Z16pddiStencilState();
// void __tf13pddiExtension();
// void __tf22pddiExtMemRegistration();
// void __tf9pddiState();
// void __tf23_pddiExtMemRegistration();
// void _$_13pddiExtension();
// void _$_22pddiExtMemRegistration();
// void __9pddiLight();
// void __9pddiState();
// void Register__23_pddiExtMemRegistrationPQ222pddiExtMemRegistration8CallBack();
// void _GLOBAL_$I$Sync__15pddiRenderStateP17pddiRenderContext();
// void _GLOBAL_$D$Sync__15pddiRenderStateP17pddiRenderContext();

// bss

// extern UNK_TYPE D_004F7CD0;
// extern UNK_TYPE D_004F7CD4;
// extern UNK_TYPE D_004F7CD8;
// extern UNK_TYPE D_004F7CDC;
// extern UNK_TYPE D_004F7CE0;
// extern UNK_TYPE D_004F7CE8;
// extern UNK_TYPE D_004F7CEC;

// rodata

// extern UNK_TYPE D_00498700;
// extern UNK_TYPE _vt$t9pddiStack1Z16pddiStencilState;
// extern UNK_TYPE _vt$t9pddiStack1Z12pddiFogState;
// extern UNK_TYPE _vt$t9pddiStack1Z17pddiLightingState;
// extern UNK_TYPE _vt$t9pddiStack1Z15pddiRenderState;
// extern UNK_TYPE _vt$t9pddiStack1Z13pddiViewState;
// extern UNK_TYPE _vt$15pddiBaseContext;
// extern UNK_TYPE _vt$16pddiStencilState;
// extern UNK_TYPE _vt$12pddiFogState;
// extern UNK_TYPE _vt$17pddiLightingState;
// extern UNK_TYPE _vt$13pddiViewState;
// extern UNK_TYPE _vt$15pddiRenderState;
// extern UNK_TYPE _vt$15pddiMatrixStack;
// extern UNK_TYPE _vt$t9pddiStack1ZQ218RadicalMathLibrary6Matrix;
// extern UNK_TYPE _vt$17pddiRenderContext;
// extern UNK_TYPE _vt$10pddiDevice;
// extern UNK_TYPE D_00498F90;
// extern UNK_TYPE D_00498FA0;
// extern UNK_TYPE D_00498FB8;
// extern UNK_TYPE D_00498FE8;
// extern UNK_TYPE D_00499000;
// extern UNK_TYPE D_00499018;
// extern UNK_TYPE D_00499028;
// extern UNK_TYPE D_00499040;
// extern UNK_TYPE D_00499050;
// extern UNK_TYPE D_00499068;
// extern UNK_TYPE D_00499080;
// extern UNK_TYPE D_004990A0;
// extern UNK_TYPE D_004990C0;
// extern UNK_TYPE D_004990E8;
// extern UNK_TYPE D_00499108;
// extern UNK_TYPE _vt$23_pddiExtMemRegistration;
// extern UNK_TYPE _vt$22pddiExtMemRegistration;
// extern UNK_TYPE _vt$13pddiExtension;
// extern UNK_TYPE D_00499180;
// extern UNK_TYPE D_00499190;
// extern UNK_TYPE D_004991B0;
// extern UNK_TYPE D_004991C0;
// extern UNK_TYPE _vt$9pddiState;

// data

// extern UNK_TYPE D_00438B34;
// extern UNK_TYPE D_00438B38;
// extern UNK_TYPE D_00438B3C;
// extern UNK_TYPE D_00438B40;
// extern UNK_TYPE D_00438B44;
// extern UNK_TYPE D_00438B48;
// extern UNK_TYPE D_00438B4C;
// extern UNK_TYPE D_00438B50;
// extern UNK_TYPE D_00438B54;

#endif
