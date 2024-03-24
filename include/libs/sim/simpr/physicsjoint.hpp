#ifndef PHYSICSJOINT_HPP
#define PHYSICSJOINT_HPP

// text

// void func_002DDFD0();
// void CreatePhysicsJoint__Q23sim12PhysicsJointiRCQ218RadicalMathLibrary6Vectorfi();
// void __Q23sim12PhysicsJointRCQ218RadicalMathLibrary6Vectorfi();
// void _$_Q23sim12PhysicsJoint();
// void SetInertiaMatrix__Q23sim12PhysicsJointRCQ23sim9SymMatrix();
// void SetConstraintAngles__Q23sim12PhysicsJointff();
// void SetParentObject__Q23sim12PhysicsJointPQ23sim24ArticulatedPhysicsObject();
// void UpdateForPhysicsProperties__Q23sim12PhysicsJoint();
// void SetTransform__Q23sim12PhysicsJointRCQ218RadicalMathLibrary6Matrix();
// void SetClone__Q23sim12PhysicsJointPQ23sim12PhysicsJoint();
// void ComputeAbsorptionFactor__Q23sim12PhysicsJointRCQ218RadicalMathLibrary6VectorT1();
// void GetMassMatrix__Q23sim12PhysicsJointRCQ218RadicalMathLibrary6VectorRQ23sim9SymMatrix();
// void AddImpulse__Q23sim12PhysicsJointRCQ218RadicalMathLibrary6VectorRQ218RadicalMathLibrary6VectorRCQ23sim9SymMatrix();
// void StartIncludeCache__Q23sim12PhysicsJoint();
// void IncludeCache__Q23sim12PhysicsJointGQ218RadicalMathLibrary6VectorT1();
// void IncludeCacheReaction__Q23sim12PhysicsJointGQ218RadicalMathLibrary6VectorT1b();
// void IsParentOf__Q23sim12PhysicsJointPQ23sim12PhysicsJoint();
// void JointAngle__Q23sim12PhysicsJointbRf();
// void TryAddValue__Q23sim12PhysicsJointffff();
// void OriginSpeed__CQ23sim12PhysicsJoint();
// void __Q23sim14PhysicsJoint0DRCQ218RadicalMathLibrary6Vectorfi();
// void _$_Q23sim14PhysicsJoint0D();
// void Clone__Q23sim14PhysicsJoint0D();
// void UpdateMatrix__Q23sim12PhysicsJointRQ218RadicalMathLibrary6Matrix();
// void __Q23sim14PhysicsJoint1DRCQ218RadicalMathLibrary6Vectorfi();
// void _$_Q23sim14PhysicsJoint1D();
// void Clone__Q23sim14PhysicsJoint1D();
// void SetConstraintAngles__Q23sim14PhysicsJoint1Dff();
// void SetTransform__Q23sim14PhysicsJoint1DRCQ218RadicalMathLibrary6Matrix();
// void UpdateDeformation__Q23sim14PhysicsJoint1Dfff();
// void UpdateInertialDeformation__Q23sim14PhysicsJoint1DffffRCQ218RadicalMathLibrary6VectorT5f();
// void ImpulseReaction__Q23sim14PhysicsJoint1DRCQ218RadicalMathLibrary6VectorRQ218RadicalMathLibrary6Vector();
// void TestJointAngle__Q23sim14PhysicsJoint1D();
// void ComputeAbsorbedImpulse__Q23sim14PhysicsJoint1DRCQ218RadicalMathLibrary6VectorRQ218RadicalMathLibrary6Vector();
// void VelocityProjection__CQ23sim14PhysicsJoint1DRCQ218RadicalMathLibrary6VectorfRQ218RadicalMathLibrary6Vector();
// void TryAddDeformationSpeed__Q23sim14PhysicsJoint1DRCQ218RadicalMathLibrary6Vector();
// void TryAddDeformationSpeed__Q23sim14PhysicsJoint1Df();
// void TryFixOverFlow__Q23sim14PhysicsJoint1DRCQ218RadicalMathLibrary6Vector();
// void ComputeJointAngle__Q23sim14PhysicsJoint1D();
// void __Q23sim14PhysicsJoint3DRCQ218RadicalMathLibrary6Vectorfi();
// void _$_Q23sim14PhysicsJoint3D();
// void Clone__Q23sim14PhysicsJoint3D();
// void SetConstraintAngles__Q23sim14PhysicsJoint3Dff();
// void SetTransform__Q23sim14PhysicsJoint3DRCQ218RadicalMathLibrary6Matrix();
// void UpdateDeformation__Q23sim14PhysicsJoint3Dfff();
// void UpdateInertialDeformation__Q23sim14PhysicsJoint3DffffRCQ218RadicalMathLibrary6VectorT5f();
// void ImpulseReaction__Q23sim14PhysicsJoint3DRCQ218RadicalMathLibrary6VectorRQ218RadicalMathLibrary6Vector();
// void VelocityProjection__CQ23sim14PhysicsJoint3DRCQ218RadicalMathLibrary6VectorfRQ218RadicalMathLibrary6Vector();
// void TestJointAngle__Q23sim14PhysicsJoint3D();
// void TryAddDeformationSpeed__Q23sim14PhysicsJoint3DRCQ218RadicalMathLibrary6Vector();
// void TryFixOverFlow__Q23sim14PhysicsJoint3DRCQ218RadicalMathLibrary6Vector();
// void ComputeJointAngle__Q23sim14PhysicsJoint3D();
// void func_002E1898();
// void __tfQ23simt5TList1ZPQ23sim12PhysicsJoint();
// void __tfQ23sim12PhysicsJoint();
// void __tfQ23sim14PhysicsJoint0D();
// void __tfQ23sim14PhysicsJoint1D();
// void __tfQ23sim14PhysicsJoint3D();
// void _$_Q23simt5TList1ZPQ23sim12PhysicsJoint();
// void Mass__CQ23sim12PhysicsJoint();
// void InvMass__CQ23sim12PhysicsJoint();
// void func_002E1AA0();
// void __as__Q23sim14PhysicsJoint0DRCQ23sim14PhysicsJoint0D();
// void ResetDeformationSpeed__Q23sim14PhysicsJoint0D();
// void ResetCache__Q23sim14PhysicsJoint0D();
// void ResetDeformation__Q23sim14PhysicsJoint0D();
// void DeformationEmpty__CQ23sim14PhysicsJoint0D();
// void Deformation__CQ23sim14PhysicsJoint0D();
// void Deformation__CQ23sim14PhysicsJoint0DRQ218RadicalMathLibrary6Vector();
// void UpdateDeformation__Q23sim14PhysicsJoint0Dfff();
// void UpdateInertialDeformation__Q23sim14PhysicsJoint0DffffRCQ218RadicalMathLibrary6VectorT5f();
// void SetCache__Q23sim14PhysicsJoint0DRCQ218RadicalMathLibrary6Vector();
// void ComputeAbsorbedImpulse__Q23sim14PhysicsJoint0DRCQ218RadicalMathLibrary6VectorRQ218RadicalMathLibrary6Vector();
// void TryAddDeformationSpeed__Q23sim14PhysicsJoint0DRCQ218RadicalMathLibrary6Vector();
// void TryFixOverFlow__Q23sim14PhysicsJoint0DRCQ218RadicalMathLibrary6Vector();
// void GetRotAxis__CQ23sim14PhysicsJoint0DRQ218RadicalMathLibrary6Vector();
// void PerpAxisProjection__CQ23sim14PhysicsJoint0DRCQ218RadicalMathLibrary6VectorRQ218RadicalMathLibrary6Vector();
// void VelocityProjection__CQ23sim14PhysicsJoint0DRCQ218RadicalMathLibrary6VectorfRQ218RadicalMathLibrary6Vector();
// void GetCache__CQ23sim14PhysicsJoint0DRQ218RadicalMathLibrary6Vector();
// void AddCacheToDeformationSpeed__Q23sim14PhysicsJoint0D();
// void AddToDeformationSpeed__Q23sim14PhysicsJoint0DRCQ218RadicalMathLibrary6Vector();
// void TestJointAngle__Q23sim14PhysicsJoint0D();
// void ImpulseReaction__Q23sim14PhysicsJoint0DRCQ218RadicalMathLibrary6VectorRQ218RadicalMathLibrary6Vector();
// void __as__Q23sim14PhysicsJoint1DRCQ23sim14PhysicsJoint1D();
// void ResetDeformationSpeed__Q23sim14PhysicsJoint1D();
// void ResetDeformation__Q23sim14PhysicsJoint1D();
// void ResetCache__Q23sim14PhysicsJoint1D();
// void DeformationEmpty__CQ23sim14PhysicsJoint1D();
// void Deformation__CQ23sim14PhysicsJoint1D();
// void Deformation__CQ23sim14PhysicsJoint1DRQ218RadicalMathLibrary6Vector();
// void GetRotAxis__CQ23sim14PhysicsJoint1DRQ218RadicalMathLibrary6Vector();
// void PerpAxisProjection__CQ23sim14PhysicsJoint1DRCQ218RadicalMathLibrary6VectorRQ218RadicalMathLibrary6Vector();
// void SetCache__Q23sim14PhysicsJoint1DRCQ218RadicalMathLibrary6Vector();
// void GetCache__CQ23sim14PhysicsJoint1DRQ218RadicalMathLibrary6Vector();
// void AddCacheToDeformationSpeed__Q23sim14PhysicsJoint1D();
// void AddToDeformationSpeed__Q23sim14PhysicsJoint1DRCQ218RadicalMathLibrary6Vector();
// void __as__Q23sim14PhysicsJoint3DRCQ23sim14PhysicsJoint3D();
// void ResetDeformationSpeed__Q23sim14PhysicsJoint3D();
// void ResetDeformation__Q23sim14PhysicsJoint3D();
// void ResetCache__Q23sim14PhysicsJoint3D();
// void DeformationEmpty__CQ23sim14PhysicsJoint3D();
// void Deformation__CQ23sim14PhysicsJoint3D();
// void Deformation__CQ23sim14PhysicsJoint3DRQ218RadicalMathLibrary6Vector();
// void GetRotAxis__CQ23sim14PhysicsJoint3DRQ218RadicalMathLibrary6Vector();
// void PerpAxisProjection__CQ23sim14PhysicsJoint3DRCQ218RadicalMathLibrary6VectorRQ218RadicalMathLibrary6Vector();
// void SetCache__Q23sim14PhysicsJoint3DRCQ218RadicalMathLibrary6Vector();
// void ComputeAbsorbedImpulse__Q23sim14PhysicsJoint3DRCQ218RadicalMathLibrary6VectorRQ218RadicalMathLibrary6Vector();
// void GetCache__CQ23sim14PhysicsJoint3DRQ218RadicalMathLibrary6Vector();
// void AddCacheToDeformationSpeed__Q23sim14PhysicsJoint3D();
// void AddToDeformationSpeed__Q23sim14PhysicsJoint3DRCQ218RadicalMathLibrary6Vector();
// void __as__Q23sim12PhysicsJointRCQ23sim12PhysicsJoint();
// void _GLOBAL_$I$CreatePhysicsJoint__Q23sim12PhysicsJointiRCQ218RadicalMathLibrary6Vectorfi();

// bss

// extern UNK_TYPE D_004B2CC8;
// extern UNK_TYPE D_004B2CD4;

// rodata

// extern UNK_TYPE _vt$Q23sim14PhysicsJoint3D;
// extern UNK_TYPE _vt$Q23sim14PhysicsJoint1D;
// extern UNK_TYPE _vt$Q23sim14PhysicsJoint0D;
// extern UNK_TYPE _vt$Q23sim12PhysicsJoint;
// extern UNK_TYPE _vt$Q23simt5TList1ZPQ23sim12PhysicsJoint;
// extern UNK_TYPE D_00485DE8;
// extern UNK_TYPE D_00485E10;
// extern UNK_TYPE D_00485E28;
// extern UNK_TYPE D_00485E40;
// extern UNK_TYPE D_00485E58;

// data

// extern UNK_TYPE D_00436444;
// extern UNK_TYPE D_00436448;
// extern UNK_TYPE D_0043644C;
// extern UNK_TYPE D_00436450;
// extern UNK_TYPE D_00436454;
// extern UNK_TYPE D_0043645C;
// extern UNK_TYPE D_00436460;
// extern UNK_TYPE D_00436464;
// extern UNK_TYPE D_00436468;
// extern UNK_TYPE D_0043646C;
// extern UNK_TYPE D_00436470;
// extern UNK_TYPE D_00436474;
// extern UNK_TYPE D_00436478;
// extern UNK_TYPE D_0043647C;
// extern UNK_TYPE D_00436480;
// extern UNK_TYPE D_00436484;
// extern UNK_TYPE D_00436488;
// extern UNK_TYPE D_0043648C;
// extern UNK_TYPE D_00436490;
// extern UNK_TYPE D_00436494;
// extern UNK_TYPE D_00436498;
// extern UNK_TYPE D_0043649C;

#endif
