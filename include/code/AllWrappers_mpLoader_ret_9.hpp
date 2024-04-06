#ifndef ALLWRAPPERS_MPLOADER_RET_9_H
#define ALLWRAPPERS_MPLOADER_RET_9_H

#include "types.h"
#include "unk.h"

#include "libs/pure3d/pure3dpr/loadmanager.hpp"

#include "AllWrappers_mpLoader_ret.hpp"

class AllWrappers_mpLoader_ret_9_unkparent : public tChunkHandler {
    /* 0x04 */ UNK_PAD unk_04[0x10];
}; // size = 0x14

class AllWrappers_mpLoader_ret_9 : public AllWrappers_mpLoader_ret_9_unkparent, public AllWrappers_mpLoader_ret {
};

#endif
