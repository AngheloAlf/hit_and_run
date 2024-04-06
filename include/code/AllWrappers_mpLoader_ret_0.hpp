#ifndef ALLWRAPPERS_MPLOADER_RET_0_H
#define ALLWRAPPERS_MPLOADER_RET_0_H

#include "types.h"
#include "unk.h"

#include "libs/pure3d/pure3dpr/loadmanager.hpp"

#include "AllWrappers_mpLoader_ret.hpp"

class AllWrappers_mpLoader_ret_0_unkparent : public tChunkHandler {
    /* 0x04 */ UNK_PAD unk_04[0x18];
}; // size = 0x1C

class AllWrappers_mpLoader_ret_0 : public AllWrappers_mpLoader_ret_0_unkparent, public AllWrappers_mpLoader_ret {
};

#endif
