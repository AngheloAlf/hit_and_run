#ifndef LIBS_PURE3D_PURE3DPR_PLATFORM_HPP
#define LIBS_PURE3D_PURE3DPR_PLATFORM_HPP

#include "types.h"

#include "context.hpp"

// text

// void func_003120E8();

class tContextInitData: public pddiDisplayInit {
    /* 0x14 */ s32 unk_14;
    /* 0x18 */ s32 unk_18;
    /* 0x1C */ s32 unk_1C;
    /* 0x20 size */

public:
    tContextInitData(void);
};

class tPlatform {
private:
    /* 0x0 */ tContext *unk_0;

public:
    tPlatform(void);
    ~tPlatform(void);

private:
    static void Create(void);
    tContext *CreateContext(tContextInitData *);
    tPlatform *GetPlatform(void);
};

// void func_003122E8();
// void _GLOBAL_$I$malloc_uncached__Fi();
// void _GLOBAL_$D$malloc_uncached__Fi();

// rodata

// extern UNK_TYPE D_0048C9B8;
// extern UNK_TYPE D_0048C9C0;
// extern UNK_TYPE D_0048C9E0;
// extern UNK_TYPE D_0048C9E8;


#endif
