#ifndef ALLWORLDSIM_HPP
#define ALLWORLDSIM_HPP

// text

// void UnRegisterMappableHandle__FiRi();
// void __6Avatar();
// void _$_6Avatar();
// void Destroy__6Avatar();
// void SetControllerId__6Avatari();
// void GetCharacter__C6Avatar();
// void SetCharacter__6AvatarP9Character();
// void GetVehicle__C6Avatar();
// void SetVehicle__6AvatarP7Vehicle();
// void SetInCarController__6Avatar();
// void SetCameraTargetToVehicle__6Avatarb();
// void GetIntoVehicleStart__6AvatarP7Vehicle();
// void GetIntoVehicleEnd__6AvatarP7Vehicle();
// void GetOutOfVehicleStart__6AvatarP7Vehicle();
// void SetOutOfCarController__6Avatar();
// void SetCameraTargetToCharacter__6Avatarb();
// void GetOutOfVehicleEnd__6AvatarP7Vehicle();
// void IsInCar__C6Avatar();
// void GetPosition__C6AvatarRQ218RadicalMathLibrary6Vector();
// void GetHeading__C6AvatarRQ218RadicalMathLibrary6Vector();
// void GetVelocity__C6AvatarRQ218RadicalMathLibrary6Vector();
// void GetSpeedMps__C6Avatar();
// void OnCheatEntered__6Avatar8eCheatIDb();
// void Update__6Avatarf();
// void GetLastPathInfo__6AvatarRQ211RoadManager11PathElementRP11RoadSegmentRfT3();
// void GetRaceInfo__6AvatarRfRiT2();
// void SetRaceInfo__6Avatarfii();

class AvatarManager {
public:
    static void CreateInstance(void);

// void GetInstance__13AvatarManager();
    static void DestroyInstance(void);

private:
// void __13AvatarManager();
// void _$_13AvatarManager();
// void Destroy__13AvatarManager();
// void EnterGame__13AvatarManager();
// void ExitGame__13AvatarManager();
// void HandleEvent__13AvatarManager9EventEnumPv();
// void GetAvatarForPlayer__13AvatarManageri();
// void PutCharacterInCar__13AvatarManagerP9CharacterP7Vehicle();
// void PutCharacterOnGround__13AvatarManagerP9CharacterP7Vehicle();
// void Update__13AvatarManagerf();
// void FindAvatarForCharacter__13AvatarManagerP9Character();
// void GetAvatarForVehicle__13AvatarManagerP7Vehicle();
// void IsAvatarGettingInOrOutOfCar__13AvatarManageri();
};

// void __15GroundPlanePooli();
// void _$_15GroundPlanePool();
// void GetNewGroundPlane__15GroundPlanePoolPQ23sim8SimState();
// void UpdateGroundPlane__15GroundPlanePooliRQ218RadicalMathLibrary6VectorT2();
// void EnableCollision__15GroundPlanePooli();
// void DisableCollision__15GroundPlanePooli();
// void FreeGroundPlane__15GroundPlanePooli();
// void FreeAllGroundPlanes__15GroundPlanePool();
// void GetSimState__15GroundPlanePooli();

class HitnRunManager {
public:
    static void CreateInstance(void);
// void GetInstance__14HitnRunManager();
    static void DestroyInstance(void);

private:
// void __14HitnRunManager();
// void _$_14HitnRunManager();
// void Destroy__14HitnRunManager();
// void Init__14HitnRunManager();
// void ResetState__14HitnRunManager();
// void HandleEvent__14HitnRunManager9EventEnumPv();
// void Update__14HitnRunManageri();
// void GetHitnRunValue__C14HitnRunManager();
// void SetHitnRunValue__14HitnRunManagerf();
// void HasntBeenHit__14HitnRunManagerPv();
// void RegisterHit__14HitnRunManagerPv();
// void DoesObjectGiveCoins__14HitnRunManagerP18CollisionEntityDSG();
// void RegisterVehicleImmunity__14HitnRunManagerP7Vehicle();
};

// void __14VehicleCentral();
// void func_00250018();
// void func_00250068();
// void func_002500B8();
// void func_00250108();
// void func_00250158();
// void func_002501A8();
// void func_002501F8();
// void func_00250248();
// void func_00250298();
// void func_002502E8();
// void func_00250338();
// void func_00250388();
// void func_002503D8();
// void func_00250428();
// void func_00250478();
// void func_002504C8();
// void func_00250518();
// void func_00250568();
// void func_002505B8();
// void func_00250608();
// void func_00250658();
// void func_002506A8();
// void func_002506F8();
// void func_00250748();
// void func_00250798();
// void func_002507E8();
// void func_00250838();
// void func_00250888();
// void func_002508D8();
// void func_00250928();
// void func_00250978();
// void func_00250A08();
// void func_00250AC0();
// void func_00250B08();
// void func_00250B68();
// void func_00250BD0();
// void func_00250C38();
// void func_00250CA0();
// void func_00250D08();
// void func_00250D60();
// void func_00250DB0();

class VehicleCentral {
private:
// void SetupConsoleFunctionsForVehicleTuning__14VehicleCentral();
// void _$_14VehicleCentral();
// void GetInstance__14VehicleCentral();

public:
    static void CreateInstance(void);
    static void DestroyInstance(void);

private:
// void PreLoad__14VehicleCentral();
// void Unload__14VehicleCentral();
// void InitVehicle__14VehicleCentralPCcbPc11VehicleTypeQ214VehicleCentral10DriverInitT2T2();
// void AddVehicleToActiveList__14VehicleCentralP7Vehicle();
// void RemoveVehicleFromActiveList__14VehicleCentralP7Vehicle();
// void GetVehicle__C14VehicleCentrali();
// void SetVehicleController__14VehicleCentraliP17VehicleController();
// void RemoveVehicleController__14VehicleCentrali();
// void GetVehicleController__C14VehicleCentrali();
// void GetVehicleId__C14VehicleCentralP7Vehicleb();
// void PreSubstepUpdate__14VehicleCentralf();
// void Update__14VehicleCentralf();
// void PostSubstepUpdate__14VehicleCentralf();
// void PreCollisionPrep__14VehicleCentralfb();
// void SubmitStatics__14VehicleCentral();
// void SubmitDynamics__14VehicleCentral();
// void SubmitAnimCollisions__14VehicleCentral();
// void GetVehicleByName__C14VehicleCentralPCc();
// void GetVehicleByUID__C14VehicleCentralG13tUidUnaligned();
// void OnProcessRequestsComplete__14VehicleCentralPv();
// void ActivateVehicleTriggers__14VehicleCentralb();
// void ClearSuppressedDrivers__14VehicleCentral();
// void AddSuppressedDriver__14VehicleCentralPCc();
// void RemoveSuppressedDriver__14VehicleCentralPCc();
// void IsDriverSuppressed__14VehicleCentralPCc();
// void SetupDriver__14VehicleCentralP7Vehicle();
// void func_002530C0();
// void IsCarUnderConstruction__14VehicleCentralPC7Vehicle();
// void GetVehicleAI__14VehicleCentralP7Vehicle();
// void DetachAllCollectibles__14VehicleCentral();
};

// void __32WorldCollisionSolverAgentManager();
// void _$_32WorldCollisionSolverAgentManager();
// void CollisionEvent__32WorldCollisionSolverAgentManagerPQ23sim8SimStateiT1iRCQ218RadicalMathLibrary6VectorffPPQ23sim15SimulatedObjectT8();
// void PreCollisionEvent__32WorldCollisionSolverAgentManagerRQ23sim9Collisioni();
// void TestImpulse__32WorldCollisionSolverAgentManagerRQ218RadicalMathLibrary6VectorRQ23sim9Collision();
// void TestCache__32WorldCollisionSolverAgentManagerPQ23sim8SimStatei();
// void EndObjectCollision__32WorldCollisionSolverAgentManagerPQ23sim8SimStatei();
// void ResetCollisionFlags__32WorldCollisionSolverAgentManager();
// void _$_11WorldObject();
// void func_002538A8();
// void Display__11WorldObject();

class WorldPhysicsManager {
private:
// void __19WorldPhysicsManager();
// void _$_19WorldPhysicsManager();
// void GetInstance__19WorldPhysicsManager();

public:
    static void CreateInstance();

private:
// void Init__19WorldPhysicsManager();
// void func_00253D58();
// void ToggleTimerState__19WorldPhysicsManager();
// void func_00253D98();
// void ApplyForceToDynamicsSpherical__19WorldPhysicsManageriRCQ218RadicalMathLibrary6VectorffPQ219WorldPhysicsManager22CollisionEntityDSGList();
// void InitCollisionManager__19WorldPhysicsManager();
// void func_00254868();
// void EmptyCollisionAreaIndex__19WorldPhysicsManageri();
// void FreeCollisionAreaIndex__19WorldPhysicsManageri();
// void RemoveFromAnyOtherCurrentDynamicsListAndCollisionArea__19WorldPhysicsManagerP11DynaPhysDSG();
// void OnQuitLevel__19WorldPhysicsManager();
// void GetCameraCollisionAreaIndex__19WorldPhysicsManager();
// void GetVehicleCollisionAreaIndex__19WorldPhysicsManager();
// void GetCharacterCollisionAreaIndex__19WorldPhysicsManager();

public:
    static void DestroyInstance(void);

private:
// void Update__19WorldPhysicsManagerUi();
// void DebugInfoDisplay__19WorldPhysicsManager();
// void WorldSimSubstepGuts__19WorldPhysicsManagerfb();
// void func_002553F0();
// void SubmitStaticsPseudoCallback__19WorldPhysicsManagerRQ218RadicalMathLibrary6VectorfiPQ23sim8SimStateb();
// void SubmitAnimCollisionsPseudoCallback__19WorldPhysicsManagerRQ218RadicalMathLibrary6VectorfiPQ23sim8SimState();
// void SubmitAnimCollisionsForUpdateOnly__19WorldPhysicsManagerRQ218RadicalMathLibrary6Vectorfi();
// void SubmitDynamicsPseudoCallback__19WorldPhysicsManagerRQ218RadicalMathLibrary6VectorfiPQ23sim8SimStateb();
// void func_00256160();
// void PurgeDynamics__19WorldPhysicsManageri();
// void UpdateSimluatingDynamicObjectGroundPlanes__19WorldPhysicsManager();
// void GetNewGroundPlane__19WorldPhysicsManagerPQ23sim8SimState();
// void FreeGroundPlane__19WorldPhysicsManageri();
// void EnableGroundPlaneCollision__19WorldPhysicsManageri();
// void DisableGroundPlaneCollision__19WorldPhysicsManageri();
// void UpdateDynamicObjects__19WorldPhysicsManagerfi();
// void UpdateAnimCollisions__19WorldPhysicsManagerfi();
// void SubmitFencePiecesPseudoCallback__19WorldPhysicsManagerRQ218RadicalMathLibrary6VectorfiPQ23sim8SimStateb();
// void UpdateFencePiece__19WorldPhysicsManagerRQ218RadicalMathLibrary6VectorPQ23sim14ManualSimStateT1N21PQ23sim8SimState();
// void func_00257010();
// void func_002571B0();
// void FenceSanityCheck__19WorldPhysicsManagerUiGQ218RadicalMathLibrary6VectorT2PQ218RadicalMathLibrary6Vector();
};

// void __8HuskPool();
// void _$_8HuskPool();
// void Init__8HuskPooli();
// void Empty__8HuskPool();
// void RequestHusk__8HuskPool11VehicleTypeP7Vehicle();
// void FreeHusk__8HuskPoolP7Vehicle();
// void IsHuskType__8HuskPoolQ211VehicleEnum9VehicleID();
// void FindOriginalVehicleGivenHusk__8HuskPoolP7Vehicle();
// void FindHuskGivenOriginalVehicle__8HuskPoolP7Vehicle();
// void WillMakeConvincingHusk__8HuskPoolP7Vehicle();
// void func_00257AD8();
// void func_00257AF0();
// void __tf6Avatar();
// void __tf14VehicleCentral();
// void __tf13AvatarManager();
// void __tf14HitnRunManager();
// void func_00257CB8();
// void __tf32WorldCollisionSolverAgentManager();
// void __tf11WorldObject();
// void func_00257D70();
// void __Q219WorldPhysicsManager11FencePieces();
// void func_00257DC0();
// void _GLOBAL_$I$_6Avatar$s_displayCoordinates();

// bss

// extern UNK_TYPE D_004B27C0;

// data

// extern UNK_TYPE D_00430398;
// extern UNK_TYPE _6Avatar$s_displayCoordinates;
// extern UNK_TYPE D_004303B5;
// extern UNK_TYPE _13AvatarManager$spAvatarManager;
// extern UNK_TYPE D_004303D8;
// extern UNK_TYPE _14HitnRunManager$smpHitnRunManager;
// extern UNK_TYPE D_004303E0;
// extern UNK_TYPE _14VehicleCentral$spInstance;
// extern UNK_TYPE _14VehicleCentral$spGenericAI;
// extern UNK_TYPE _19WorldPhysicsManager$spInstance;
// extern UNK_TYPE D_004303F4;

// rodata

// extern UNK_TYPE D_004789E8;
// extern UNK_TYPE D_004789F8;
// extern UNK_TYPE D_00478A38;
// extern UNK_TYPE D_00478A48;
// extern UNK_TYPE D_00478A50;
// extern UNK_TYPE D_00478A58;
// extern UNK_TYPE D_00478A68;
// extern UNK_TYPE D_00478A78;
// extern UNK_TYPE D_00478A88;
// extern UNK_TYPE D_00478B80;
// extern UNK_TYPE D_00478B90;
// extern UNK_TYPE D_00478BA0;
// extern UNK_TYPE D_00478BB0;
// extern UNK_TYPE D_00478BC0;
// extern UNK_TYPE D_00478BD0;
// extern UNK_TYPE D_00478BE0;
// extern UNK_TYPE D_00478BF8;
// extern UNK_TYPE D_00478C10;
// extern UNK_TYPE D_00478C20;
// extern UNK_TYPE D_00478C30;
// extern UNK_TYPE D_00478C38;
// extern UNK_TYPE D_00478C40;
// extern UNK_TYPE D_00478C58;
// extern UNK_TYPE D_00478C68;
// extern UNK_TYPE D_00478C80;
// extern UNK_TYPE D_00478CA0;
// extern UNK_TYPE D_00478CB0;
// extern UNK_TYPE D_00478CC0;
// extern UNK_TYPE D_00478CD0;
// extern UNK_TYPE D_00478CE8;
// extern UNK_TYPE D_00478D08;
// extern UNK_TYPE D_00478D18;
// extern UNK_TYPE D_00478D30;
// extern UNK_TYPE D_00478D40;
// extern UNK_TYPE D_00478D50;
// extern UNK_TYPE D_00478D60;
// extern UNK_TYPE D_00478D70;
// extern UNK_TYPE D_00478D80;
// extern UNK_TYPE D_00478D98;
// extern UNK_TYPE D_00478DA8;
// extern UNK_TYPE D_00478DB8;
// extern UNK_TYPE D_00478DD0;
// extern UNK_TYPE D_00478DE0;
// extern UNK_TYPE D_00478DF0;
// extern UNK_TYPE D_00478E08;
// extern UNK_TYPE D_00478E18;
// extern UNK_TYPE D_00478E30;
// extern UNK_TYPE D_00478E48;
// extern UNK_TYPE D_00478E58;
// extern UNK_TYPE D_00478E68;
// extern UNK_TYPE D_00478E80;
// extern UNK_TYPE D_00478E98;
// extern UNK_TYPE D_00478EB0;
// extern UNK_TYPE D_00478ED0;
// extern UNK_TYPE D_00478EE0;
// extern UNK_TYPE D_00478F08;
// extern UNK_TYPE D_00478F18;
// extern UNK_TYPE D_00478F28;
// extern UNK_TYPE D_00478F40;
// extern UNK_TYPE D_00478F50;
// extern UNK_TYPE D_00478F68;
// extern UNK_TYPE D_00478F80;
// extern UNK_TYPE D_00478F98;
// extern UNK_TYPE D_00478FA8;
// extern UNK_TYPE D_00478FC0;
// extern UNK_TYPE D_00478FD0;
// extern UNK_TYPE D_00478FE0;
// extern UNK_TYPE D_00478FE8;
// extern UNK_TYPE D_00478FF0;
// extern UNK_TYPE D_00478FF8;
// extern UNK_TYPE D_00479000;
// extern UNK_TYPE D_004790B0;
// extern UNK_TYPE D_004790C0;
// extern UNK_TYPE D_004790E8;
// extern UNK_TYPE D_00479118;
// extern UNK_TYPE D_00479140;
// extern UNK_TYPE D_00479168;
// extern UNK_TYPE _vt$11WorldObject;
// extern UNK_TYPE _vt$32WorldCollisionSolverAgentManager;
// extern UNK_TYPE _vt$14HitnRunManager;
// extern UNK_TYPE _vt$13AvatarManager;
// extern UNK_TYPE _vt$14VehicleCentral;
// extern UNK_TYPE _vt$6Avatar;
// extern UNK_TYPE D_004792E8;
// extern UNK_TYPE D_004792F0;
// extern UNK_TYPE D_00479308;
// extern UNK_TYPE D_00479318;
// extern UNK_TYPE D_00479348;
// extern UNK_TYPE D_00479370;

#endif
