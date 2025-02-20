#ifndef SKELETON_HPP
#define SKELETON_HPP

#include "loadmanager.hpp"

// text

// void __9tSkeletoni();
// void _$_9tSkeleton();
// void FindJoint__C9tSkeletonG13tUidUnaligned();
// void FindJointIndex__C9tSkeletonG13tUidUnaligned();
// void NewPose__9tSkeleton();
// void Rebuild__9tSkeleton();

class tSkeletonLoader : public tSimpleChunkHandler {
public:
    tSkeletonLoader(void);
private:
    virtual UNK_RET LoadObject(tChunkFile *, tEntityStore *); // void LoadObject__15tSkeletonLoaderP10tChunkFileP12tEntityStore();

private:
    /* 0x04 */ UNK_PAD unk_04[0x10];
}; // size = 0x14

// void __tft6tArray1ZQ29tSkeleton5Joint();
// void __tf9tSkeleton();
// void __tf15tSkeletonLoader();
// void func_00351210();
// void __Q29tSkeleton5Joint();
// void func_00351240();
// void _$_15tSkeletonLoader();
// void _$_t6tArray1ZQ29tSkeleton5Joint();
// void SetSize__t6tArray1ZQ29tSkeleton5Jointi();
// void func_003513B0();

// rodata

// extern UNK_TYPE D_00493A30;
// extern UNK_TYPE D_00493A38;
// extern UNK_TYPE _vt$15tSkeletonLoader;
// extern UNK_TYPE _vt$9tSkeleton;
// extern UNK_TYPE _vt$t6tArray1ZQ29tSkeleton5Joint;
// extern UNK_TYPE D_00493B20;
// extern UNK_TYPE D_00493B40;
// extern UNK_TYPE D_00493B50;

#endif
