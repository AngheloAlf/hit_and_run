#ifndef PS2DEVICE_HPP
#define PS2DEVICE_HPP

#include "pddiobj.hpp"
#include "basecontext.hpp"
#include "ps2display.hpp"

// text


extern "C" void pddiCreate(s32, s32, void *);
// void __9ps2Device();
// void _$_9ps2Device();
// void GetLibraryInfo__9ps2DeviceP11pddiLibInfo();
// void SetCurrentContext__9ps2DeviceP17pddiRenderContext();
// void NewDisplay__9ps2Devicei();
// void NewRenderContext__9ps2DeviceP11pddiDisplay();
// void NewTexture__9ps2DeviceP15pddiTextureDesc();
// void NewShader__9ps2DevicePCcT1();
// void NewPrimBuffer__9ps2DeviceP18pddiPrimBufferDesc();
// void func_0036BA68();
// void __tf9ps2Device();

// Check _vt$9ps2Device for types for vtable methods
class pddiDevice : public pddiObject {
    pddiDevice(void);

private:
    /* vt 0x0C */virtual pddiDisplay *virtual_0C(void); // placeholder
    /* vt 0x14 */virtual pddiDisplay *virtual_14(void); // placeholder
    /* vt 0x1C */virtual pddiDisplay *virtual_1C(void); // placeholder
    /* vt 0x24 */virtual pddiDisplay *virtual_24(void); // placeholder
    /* vt 0x2C */virtual pddiDisplay *virtual_2C(void); // placeholder
    /* vt 0x34 */virtual pddiDisplay *virtual_34(void); // placeholder
    /* vt 0x3C */virtual pddiDisplay *virtual_3C(void); // placeholder
public:
    /* vt 0x44 */virtual pddiDisplay *virtual_44(s32);
    /* vt 0x4C */virtual pddiRenderContext *virtual_4C(pddiObject *);
};

// void GetCurrentContext__9ps2Device();
// void AddCustomShader__9ps2DevicePCcT1();
// void _GLOBAL_$I$pddiCreate();
// void _GLOBAL_$D$pddiCreate();

// bss

// extern UNK_TYPE D_004F7A68;

// rodata

// extern UNK_TYPE D_00496AD0;
// extern UNK_TYPE _vt$9ps2Device;
// extern UNK_TYPE D_00496BB0;

#endif
