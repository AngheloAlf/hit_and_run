#ifndef PS2DISPLAY_HPP
#define PS2DISPLAY_HPP

#include "pddiobj.hpp"

class pddiDisplayInit {
protected:
    /* 0x00 */ int unk_00;
    /* 0x04 */ int unk_04;
    /* 0x08 */ bool unk_08;
    /* 0x0C */ bool unk_0C;
    /* 0x10 */ char unk_10[0x4];
    /* 0x14 size */

protected:
    pddiDisplayInit() {}

public:
    pddiDisplayInit(bool arg1, bool arg2) {
        this->unk_00 = 0x280;
        this->unk_04 = 0;this->unk_08 = arg1;
        this->unk_0C = arg2;

        //! @bug unitialized this->unk_10
    }
};

// text

// void __10ps2Display();
// void _$_10ps2Display();
// void ReallySwapBuffers__10ps2Display();
// void SwapBuffers__10ps2Display();
// void InitDisplay__10ps2DisplayPC15pddiDisplayInit();
// void SetupFS_AA__10ps2Displaysssss();
// void InitDisplay__10ps2Displayiii();
// void SetFBMask__10ps2DisplayUi();
// void func_0036CB78();
// void GetCurrentFrame__C10ps2Display();
// void GetFrameAddr__C10ps2Displayi();
// void Screenshot__10ps2DisplayP10pddiColouri();
// void __tf11pddiDisplay();
// void __tf10ps2Display();

// Check _vt$10ps2Display for types of vtable methods
class pddiDisplay: public pddiObject {
// void __11pddiDisplay();
// void IsWidescreen__11pddiDisplay();
// void SetForceVSync__11pddiDisplayb();
// void GetForceVSync__11pddiDisplay();
// void _$_11pddiDisplay();

private:
    /* vt 0x0C */virtual pddiDisplay *virtual_0C(void); // placeholder
    /* vt 0x14 */virtual pddiDisplay *virtual_14(void); // placeholder
    /* vt 0x1C */virtual pddiDisplay *virtual_1C(void); // placeholder
    /* vt 0x24 */virtual pddiDisplay *virtual_24(void); // placeholder
    /* vt 0x2C */virtual pddiDisplay *virtual_2C(void); // placeholder
public:
    /* vt 0x34 */virtual pddiDisplay *virtual_34(pddiDisplayInit *);
};

// void GetHeight__10ps2Display();
// void GetWidth__10ps2Display();
// void GetDepth__10ps2Display();
// void GetDisplayMode__10ps2Display();
// void GetNumColourBuffer__10ps2Display();
// void GetBufferMask__10ps2Display();
// void GetZBufferFormat__10ps2Display();
// void GetZBufferAddress__10ps2Display();
// void GetFreeVideoMem__10ps2Display();
// void GetFreeTextureMem__10ps2Display();
// void GetTextureMemoryStart__10ps2Display();
// void SetTextureMemoryStart__10ps2DisplayUi();
// void GetTextureMemoryEnd__10ps2Display();
// void SetTextureMemoryEnd__10ps2DisplayUi();
// void GetTextureMemoryFree__10ps2Display();

// data

// extern UNK_TYPE D_00436640;
// extern UNK_TYPE D_00436644;

// rodata

// extern UNK_TYPE D_00496BC0;
// extern UNK_TYPE _vt$10ps2Display;
// extern UNK_TYPE _vt$11pddiDisplay;
// extern UNK_TYPE D_00496DA0;
// extern UNK_TYPE D_00496DB0;
// extern UNK_TYPE D_00496DC0;
// extern UNK_TYPE D_00496DC4;
// extern UNK_TYPE D_00496DD0;
// extern UNK_TYPE D_00496DD4;
// extern UNK_TYPE D_00496DE0;
// extern UNK_TYPE D_00496DE4;

// bss

// extern UNK_TYPE D_004F7A80;
// extern UNK_TYPE D_004F7A90;
// extern UNK_TYPE D_004F7AE0;
// extern UNK_TYPE D_004F7B00;
// extern UNK_TYPE D_004F7B04;
// extern UNK_TYPE D_004F7B60;
// extern UNK_TYPE D_004F7B80;
// extern UNK_TYPE D_004F7B84;
// extern UNK_TYPE D_004F7BE0;
// extern UNK_TYPE D_004F7BE8;

#endif
