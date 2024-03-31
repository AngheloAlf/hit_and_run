#ifndef UTILITY_HPP
#define UTILITY_HPP

#include "types.h"
#include "libc/stddef.h"

#include "loadmanager.hpp"
#include "inventory.hpp"
#include "context.hpp"
#include "platform.hpp"
#include "matrixstack.hpp"

#include "libs/pure3d/pddipr/basecontext.hpp"
#include "libs/pure3d/pddipr/ps2device.hpp"

// text

// void func_00335710();

// data

extern s8 gFruitless;
// extern UNK_TYPE D_004365F1;

namespace p3d {
    // void openFile__3p3dPCcb();
    void printf(char const *, ...);

    extern tPlatform *platform;
    extern tContext *context;
    extern tInventory *inventory;
    extern tMatrixStack *stack;
    extern tLoadManager *loadManager;
    extern pddiRenderContext *pddi;
    extern pddiDevice *device;
    extern pddiDisplay *display;
};

// rodata

// extern UNK_TYPE D_0048FFE8;

#endif
