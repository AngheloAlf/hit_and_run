#ifndef PHYSICSOBJECT_HPP
#define PHYSICSOBJECT_HPP

#include "libs/sim/simpr/simutility.hpp"

// text

namespace sim {
    class PhysicsObject {
    public:
        static UNK_RET ResetUnitsRelatedValues(void);// void ResetUnitsRelatedValues__Q23sim13PhysicsObject();
    private:
        // void __Q23sim13PhysicsObjectPQ23sim17PhysicsPropertiesRCQ218RadicalMathLibrary6VectorRCQ23sim9SymMatrixf();
        // void __Q23sim13PhysicsObjectPQ23sim17PhysicsProperties();
        // void _$_Q23sim13PhysicsObject();
        // void Clone__Q23sim13PhysicsObjectPQ23sim8SimState();
        // void SetClone__Q23sim13PhysicsObjectPQ23sim13PhysicsObjectPQ23sim8SimState();
        // void SyncSimObj__Q23sim13PhysicsObjectb();
        // void SetExternalCMOffset__Q23sim13PhysicsObjectRCQ218RadicalMathLibrary6Vector();
        // void UpdateForSimEnvironment__Q23sim13PhysicsObject();
        // void UpdateForPhysicsProperties__Q23sim13PhysicsObject();
        // void UpdateScale__Q23sim13PhysicsObject();
        // void Update__Q23sim13PhysicsObjectf();
        // void TestResting__Q23sim13PhysicsObjectf();
        // void WakeUp__Q23sim13PhysicsObject();
        // void SetCMVelocity__Q23sim13PhysicsObjectRCQ218RadicalMathLibrary6Vector();
        // void AddForce__Q23sim13PhysicsObjectRCQ218RadicalMathLibrary6VectorPCQ218RadicalMathLibrary6Vector();
        // void AddTorque__Q23sim13PhysicsObjectRCQ218RadicalMathLibrary6Vector();
        // void SolveAppliedForces__Q23sim13PhysicsObjectf();
        // void BodyI__Q23sim13PhysicsObject();
        // void ResetAppliedForces__Q23sim13PhysicsObject();
        // void AddImpulse__Q23sim13PhysicsObjectRCQ218RadicalMathLibrary6VectorT1RCQ23sim9SymMatrixPQ23sim15SimulatedObjectii();
        // void GetCollisionCache__CQ23sim13PhysicsObjectRQ218RadicalMathLibrary6VectorT1i();
        // void EndCollision__Q23sim13PhysicsObjectbii();
        // void GetMassMatrix__Q23sim13PhysicsObjectRCQ218RadicalMathLibrary6VectorRQ23sim9SymMatrixPQ23sim15SimulatedObjectii();
        // void GetKineticEnergy__CQ23sim13PhysicsObject();
        // void UpdateConstraint__Q23sim13PhysicsObjectRCQ23sim11LocalTargetRCQ23sim9SimTargetPCQ218RadicalMathLibrary6Vectorf();
        // void AddConstraint__Q23sim13PhysicsObjectRCQ23sim11LocalTarget();
    };

// void ReadVectorFromPhysicsVectorChunk__3simP10tChunkFileRQ218RadicalMathLibrary6Vector();
// void ReadSymMatrixFromPhysicsInertiaMatrixChunk__3simP10tChunkFileRQ23sim9SymMatrix();

    class PhysicsObjectLoader: public tSimpleChunkHandler {
        /* 0x08 */ UNK_PAD unk_08[0xC];
        /*      */ // size = 0x14

    public:
        PhysicsObjectLoader(); // void __Q23sim19PhysicsObjectLoader();
        virtual ~PhysicsObjectLoader(); // void _$_Q23sim19PhysicsObjectLoader();
    private:
        virtual UNK_TYPE *LoadObject(tChunkFile *, tEntityStore *); // void LoadObject__Q23sim19PhysicsObjectLoaderP10tChunkFileP12tEntityStore();
    };
}
// void func_002DBFB8();
// void __tfQ23sim13PhysicsObject();
// void __tfQ23sim19PhysicsObjectLoader();
// void func_002DC0A8();
// void IsAtRest__CQ23sim13PhysicsObject();
// void ResetRestingDetector__Q23sim13PhysicsObject();
// void GetMinimumLinSpeed__Q23sim13PhysicsObject();
// void GetMinimumAngSpeed__Q23sim13PhysicsObject();
// void StartCollision__Q23sim13PhysicsObjectRCQ218RadicalMathLibrary6VectorT1PCQ23sim15SimulatedObjectii();
// void IsCacheEmpty__CQ23sim13PhysicsObjecti();
// void ValidCollision__CQ23sim13PhysicsObjectPCQ23sim13PhysicsObject();
// void ResetCache__Q23sim13PhysicsObjecti();
// void Mass__CQ23sim13PhysicsObject();
// void InvMass__CQ23sim13PhysicsObject();
// void func_002DC238();
// void func_002DC2B0();
// void _GLOBAL_$I$_Q23sim13PhysicsObject$sSmall_Speed();

// rodata

// extern UNK_TYPE D_00485630;
// extern UNK_TYPE jtbl_00485640;
// extern UNK_TYPE _vt$Q23sim19PhysicsObjectLoader;
// extern UNK_TYPE _vt$Q23sim13PhysicsObject;
// extern UNK_TYPE D_00485800;
// extern UNK_TYPE D_00485818;

// data

// extern UNK_TYPE D_00436418;
// extern UNK_TYPE D_0043641C;
// extern UNK_TYPE D_00436420;
// extern UNK_TYPE _Q23sim13PhysicsObject$sSmall_Speed;
// extern UNK_TYPE _Q23sim13PhysicsObject$sThresholdTimeForRestingTest;
// extern UNK_TYPE _Q23sim13PhysicsObject$sThresholdTimeForContactFriction;
// extern UNK_TYPE D_00436430;
// extern UNK_TYPE D_00436434;

// bss

// extern UNK_TYPE D_004B2CBC;
// extern UNK_TYPE D_004B2CC0;

#endif
