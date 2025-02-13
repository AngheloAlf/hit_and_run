#ifndef COLLISIONOBJECT_HPP
#define COLLISIONOBJECT_HPP

#include "libs/sim/simpr/simutility.hpp"

// text

// void __Q23sim15CollisionObjectPQ23sim15CollisionVolume();
// void _$_Q23sim15CollisionObject();
// void SetIsStatic__Q23sim15CollisionObjectb();
// void SetPhysicsProperties__Q23sim15CollisionObjectPQ23sim17PhysicsProperties();
// void ConvertToRigidBody__Q23sim15CollisionObject();
// void Clone__Q23sim15CollisionObjectPQ23sim8SimState();
// void SetCollisionVolume__Q23sim15CollisionObjectPQ23sim15CollisionVolume();
// void SetVisibility__Q23sim15CollisionObjectP18tCompositeDrawable();
// void SetVisibility__Q23sim15CollisionObjectib();
// void UpdateVisibilityByJoint__Q23sim15CollisionObjectPQ23sim15CollisionVolumeib();
// void UpdateVisibilityByOwner__Q23sim15CollisionObjectPQ23sim15CollisionVolumeRQ23simt6TArray1Zb();
// void AddSelfCollision__Q23sim15CollisionObjectiibT3();
// void SetSelfCollision__Q23sim15CollisionObjectRQ33sim15CollisionObject13SelfCollision();
// void __as__Q33sim15CollisionObject20CollisionVolumeOwnerRCQ33sim15CollisionObject20CollisionVolumeOwner();
// void LoadVectorFromCollisionVectorChunk__3simP10tChunkFileRQ218RadicalMathLibrary6Vector();

namespace sim {
    class CollisionObjectLoader: public tSimpleChunkHandler {
        /* 0x04 */ UNK_PAD unk_04[0x10];
        /*      */ // size = 0x14

    public:
        CollisionObjectLoader(); // void __Q23sim21CollisionObjectLoader();
    private:
        virtual UNK_RET LoadObject(tChunkFile *, tEntityStore *); // void LoadObject__Q23sim21CollisionObjectLoaderP10tChunkFileP12tEntityStore();
        // void LoadCollisionVolume__Q23sim21CollisionObjectLoaderP10tChunkFile();
    };
}
// void SetNumOwnerList__Q33sim15CollisionObject20CollisionVolumeOwneri();
// void func_002C8B90();
// void ResizeArray__Q23simt6TArray1ZQ33sim15CollisionObject13SelfCollisioni();
// void Grow__Q23simt6TArray1ZQ33sim15CollisionObject13SelfCollision();
// void NewElem__Q23simt6TArray1ZQ33sim15CollisionObject13SelfCollision();
// void ResizeArray__Q23simt6TArray1Z13tUidUnalignedi();
// void ResizeArray__Q23simt6TArray1Zbi();
// void Grow__Q23simt6TArray1Z13tUidUnaligned();
// void NewElem__Q23simt6TArray1Z13tUidUnaligned();
// void Grow__Q23simt6TArray1Zb();
// void NewElem__Q23simt6TArray1Zb();
// void __tfQ23sim15CollisionObject();
// void __tfQ23sim21CollisionObjectLoader();
// void func_002C9148();
// void _$_Q23sim21CollisionObjectLoader();
// void func_002C9200();

// rodata

// extern UNK_TYPE jtbl_00484030;
// extern UNK_TYPE _vt$Q23sim21CollisionObjectLoader;
// extern UNK_TYPE _vt$Q23sim15CollisionObject;
// extern UNK_TYPE D_004840E8;
// extern UNK_TYPE D_00484100;

#endif
