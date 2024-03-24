#ifndef BLEND_HPP
#define BLEND_HPP

// text

// void _$_Q26choreo9BlendSlot();
// void GetCycleDuration__CQ26choreo9BlendSlot();
// void PhaseToFrame__CQ26choreo9BlendSlotf();
// void __Q26choreo17BlendSlotFootInfoPQ26choreo3RigPQ26choreo9BlendSlot();
// void _$_Q26choreo17BlendSlotFootInfo();
// void FrameToPhase__CQ26choreo17BlendSlotFootInfoff();
// void func_002C01F0();
// void GetFootPlant__CQ26choreo17BlendSlotFootInfoi();
// void GetFootLift__CQ26choreo17BlendSlotFootInfoi();
// void GetFootScale__CQ26choreo17BlendSlotFootInfoi();
// void __Q26choreo5BlendPQ26choreo3RigiPCiPQ26choreo9Partition();
// void _$_Q26choreo5Blend();
// void GetParamSlotCount__CQ26choreo5Blendi();
// void GetBlendSlotIndex__CQ26choreo5BlendPCi();
// void GetBlendSlot__Q26choreo5Blendi();
// void SetBlendSlot__Q26choreo5BlendiPQ26choreo9BlendSlot();
// void NewDriver__Q26choreo5Blend();
// void NewBlendDriver__Q26choreo5Blend();
// void __Q26choreo10BlendPhasePQ26choreo5Blend();
// void _$_Q26choreo10BlendPhase();
// void SetParamValue__Q26choreo10BlendPhaseif();
// void SetPhase__Q26choreo10BlendPhasef();
// void GetMaxBlendSlotCount__CQ26choreo10BlendPhase();
// void GetBlendSlot__Q26choreo10BlendPhasei();
// void AddBlendSlot__Q26choreo10BlendPhasePQ26choreo9BlendSlotf();
// void UpdateBlends__Q26choreo10BlendPhase();
// void AdvancePhase__Q26choreo10BlendPhasef();
// void UpdateLegPhase__Q26choreo10BlendPhase();
// void IsFinished__CQ26choreo10BlendPhase();
// void func_002C19A0();
// void IsFootPlanted__CQ26choreo10BlendPhasei();
// void HasJointTranslation__CQ26choreo10BlendPhasei();
// void GetJointTranslation__CQ26choreo10BlendPhaseiRQ218RadicalMathLibrary6Vector();
// void HasJointRotation__CQ26choreo10BlendPhasei();
// void GetJointRotation__CQ26choreo10BlendPhaseiRQ218RadicalMathLibrary10Quaternion();
// void GetJointWeight__CQ26choreo10BlendPhasei();
// void GetJointPriority__CQ26choreo10BlendPhasei();
// void HasGroupTranslation__CQ26choreo10BlendPhaseG13tUidUnaligned();
// void GetGroupTranslation__CQ26choreo10BlendPhaseG13tUidUnalignedRQ218RadicalMathLibrary6Vector();
// void HasGroupRotation__CQ26choreo10BlendPhaseG13tUidUnaligned();
// void GetGroupRotation__CQ26choreo10BlendPhaseG13tUidUnalignedRQ218RadicalMathLibrary10Quaternion();
// void GetGroupWeight__CQ26choreo10BlendPhase();
// void GetGroupPriority__CQ26choreo10BlendPhase();
// void GetBlendSlotLegWeight__CQ26choreo10BlendPhaseii();
// void GetBlendSlotLegFrame__CQ26choreo10BlendPhaseii();
// void __Q26choreo16BlendJointDriverPQ26choreo10BlendPhase();
// void _$_Q26choreo16BlendJointDriver();
// void Reset__Q26choreo16BlendJointDriver();
// void Advance__Q26choreo16BlendJointDriverf();
// void GetBlendInTime__CQ26choreo16BlendJointDriver();
// void GetBlendOutTime__CQ26choreo16BlendJointDriver();
// void GetJointWeight__CQ26choreo16BlendJointDriveri();
// void GetJointPriority__CQ26choreo16BlendJointDriveri();
// void HasJointTranslation__CQ26choreo16BlendJointDriveri();
// void GetJointTranslation__CQ26choreo16BlendJointDriveriRQ218RadicalMathLibrary6Vector();
// void HasJointRotation__CQ26choreo16BlendJointDriveri();
// void GetJointRotation__CQ26choreo16BlendJointDriveriRQ218RadicalMathLibrary10Quaternion();
// void GetGroupWeight__CQ26choreo16BlendJointDriverG13tUidUnaligned();
// void GetGroupPriority__CQ26choreo16BlendJointDriverG13tUidUnaligned();
// void HasGroupTranslation__CQ26choreo16BlendJointDriverG13tUidUnaligned();
// void GetGroupTranslation__CQ26choreo16BlendJointDriverG13tUidUnalignedRQ218RadicalMathLibrary6Vector();
// void HasGroupRotation__CQ26choreo16BlendJointDriverG13tUidUnaligned();
// void GetGroupRotation__CQ26choreo16BlendJointDriverG13tUidUnalignedRQ218RadicalMathLibrary10Quaternion();
// void __Q26choreo15BlendFootDriverPQ26choreo6RigLegPQ26choreo10BlendPhase();
// void _$_Q26choreo15BlendFootDriver();
// void GetFootBlendInTime__CQ26choreo15BlendFootDriver();
// void GetFootBlendOutTime__CQ26choreo15BlendFootDriver();
// void GetFootWeight__CQ26choreo15BlendFootDriver();
// void GetFootPriority__CQ26choreo15BlendFootDriver();
// void HasFootEffectorTranslation__CQ26choreo15BlendFootDriver();
// void GetFootEffectorTranslationIK__CQ26choreo15BlendFootDriverRQ218RadicalMathLibrary6Vector();
// void GetFootEffectorTranslationIKWorld__CQ26choreo15BlendFootDriverRQ218RadicalMathLibrary6Vector();
// void GetFootEffectorTranslationNoIK__CQ26choreo15BlendFootDriverRQ218RadicalMathLibrary6Vector();
// void GetFootEffectorTranslation__CQ26choreo15BlendFootDriverRQ218RadicalMathLibrary6Vector();
// void HasFootEffectorRotation__CQ26choreo15BlendFootDriver();
// void GetFootEffectorRotationIK__CQ26choreo15BlendFootDriverRQ218RadicalMathLibrary10Quaternion();
// void GetFootEffectorRotationIKWorld__CQ26choreo15BlendFootDriverRQ218RadicalMathLibrary10Quaternion();
// void GetFootEffectorRotation__CQ26choreo15BlendFootDriverRQ218RadicalMathLibrary10Quaternion();
// void HasFootPoleVectorTranslation__CQ26choreo15BlendFootDriver();
// void GetFootPoleVectorTranslation__CQ26choreo15BlendFootDriverRQ218RadicalMathLibrary6Vector();
// void HasFootPlanted__CQ26choreo15BlendFootDriver();
// void IsFootPlanted__CQ26choreo15BlendFootDriver();
// void HasFootGroundFixup__CQ26choreo15BlendFootDriver();
// void GetFootGroundFixup__CQ26choreo15BlendFootDriver();
// void __Q26choreo11BlendDriverPQ26choreo5Blend();
// void _$_Q26choreo11BlendDriver();
// void Clone__CQ26choreo11BlendDriver();
// void func_002C4118();
// void GetWeight__CQ26choreo11BlendDriver();
// void func_002C4130();
// void GetRootBlendInTime__CQ26choreo11BlendDriver();
// void func_002C4158();
// void GetRootBlendOutTime__CQ26choreo11BlendDriver();
// void func_002C4170();
// void SetParamValue__Q26choreo11BlendDriverif();
// void func_002C41C0();
// void SetIsCyclic__Q26choreo11BlendDriverb();
// void func_002C41D8();
// void GetJointWeight__CQ26choreo11BlendDriveri();
// void GetJointPriority__CQ26choreo11BlendDriveri();
// void func_002C4258();
// void Begin__Q26choreo11BlendDriverPQ26choreo6Puppet();
// void Advance__Q26choreo11BlendDriverf();
// void IsFinished__CQ26choreo11BlendDriver();
// void End__Q26choreo11BlendDriverPQ26choreo6Puppet();
// void Apply__Q26choreo11BlendDriverPQ26choreo6Engine();
// void __tfQ26choreo9BlendSlot();
// void __tfQ26choreo17BlendSlotFootInfo();
// void __tfQ26choreo5Blend();
// void __tfQ26choreo11BlendDriver();
// void __tfQ26choreo10BlendPhase();
// void __tfQ26choreo16BlendJointDriver();
// void __tfQ26choreo15BlendFootDriver();
// void func_002C4618();
// void GetCycleStart__CQ26choreo9BlendSlot();
// void GetFootPlant__CQ26choreo9BlendSloti();
// void GetFootLift__CQ26choreo9BlendSloti();
// void GetFootScale__CQ26choreo9BlendSloti();
// void func_002C4670();

// rodata

// extern UNK_TYPE D_004838B0;
// extern UNK_TYPE D_004838B8;
// extern UNK_TYPE D_004838C0;
// extern UNK_TYPE D_004838C8;
// extern UNK_TYPE D_004838D0;
// extern UNK_TYPE D_004838D8;
// extern UNK_TYPE _vt$Q26choreo15BlendFootDriver;
// extern UNK_TYPE _vt$Q26choreo16BlendJointDriver;
// extern UNK_TYPE _vt$Q26choreo10BlendPhase;
// extern UNK_TYPE _vt$Q26choreo11BlendDriver;
// extern UNK_TYPE _vt$Q26choreo5Blend;
// extern UNK_TYPE _vt$Q26choreo17BlendSlotFootInfo;
// extern UNK_TYPE _vt$Q26choreo9BlendSlot;
// extern UNK_TYPE D_00483BA0;
// extern UNK_TYPE D_00483BB8;
// extern UNK_TYPE D_00483BD8;
// extern UNK_TYPE D_00483BE8;
// extern UNK_TYPE D_00483C00;
// extern UNK_TYPE D_00483C18;
// extern UNK_TYPE D_00483C38;

#endif