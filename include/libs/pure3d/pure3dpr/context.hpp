#ifndef CONTEXT_HPP
#define CONTEXT_HPP

#include "libs/pure3d/pddipr/basecontext.hpp"
#include "libs/pure3d/pddipr/ps2device.hpp"
#include "libs/pure3d/pddipr/ps2display.hpp"
#include "inventory.hpp"
#include "matrixstack.hpp"
#include "loadmanager.hpp"

// text

class tContext {
public:
    /* 0x00 */ tInventory *unk_00;
    /* 0x04 */ tLoadManager *unk_04;
private:
    /* 0x08 */ char unk_08[0xE0];
public:
    /* 0xE8 */ pddiDevice *unk_E8;
    /* 0xEC */ pddiRenderContext *unk_EC;
    /* 0xF0 */ pddiDisplay *unk_F0;
private:
    /* 0xF4 */ char unk_F4[0x8];
public:
    /* 0xFC */ unsigned char unk_FC;
private:
    /* 0xFD */ char unk_FD[0x3];
    /* 0x100 size */

public:
    tContext(pddiDevice *, pddiDisplay *, pddiRenderContext *);
    void Setup(void);

public:
    void BeginFrame(void);
    void EndFrame(bool);
private:
    // void SetView__8tContextP5tView();
    // void GetView__8tContext();

public:
    void SwapBuffers();
    tMatrixStack *GetMatrixStack(p3dMatrixType);

private:
    // void LoadViewMatrix__8tContextRCQ218RadicalMathLibrary6MatrixT1();
    // void GetWorldMatrix__8tContext();
    // void func_0031D4A0();
    // void WorldToView__8tContextRCQ218RadicalMathLibrary6VectorPQ218RadicalMathLibrary6Vector();
    // void func_0031D508();
    // void GetHardwareSkinning__8tContext();
};

// void __Q222pddiExtMemRegistration8CallBack();
// void __15RadcoreMemAdapt();
// void func_0031D570();
// void __tfQ222pddiExtMemRegistration8CallBack();
// void __tf15RadcoreMemAdapt();
// void Alloc__15RadcoreMemAdaptPvi();
// void Free__15RadcoreMemAdaptPv();
// void _GLOBAL_$I$__8tContextP10pddiDeviceP11pddiDisplayP17pddiRenderContext();

// rodata

// extern UNK_TYPE D_0048D148;
// extern UNK_TYPE _vt$15RadcoreMemAdapt;
// extern UNK_TYPE _vt$Q222pddiExtMemRegistration8CallBack;
// extern UNK_TYPE D_0048D190;
// extern UNK_TYPE D_0048D1B8;

// bss

// extern UNK_TYPE D_004B2DF0;

#endif
