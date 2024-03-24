#ifndef ALLAIVEHICLE_HPP
#define ALLAIVEHICLE_HPP

// text

// void __7ChaseAIP7Vehiclef();
// void _$_7ChaseAI();
// void Initialize__7ChaseAI();
// void Reset__7ChaseAI();
// void Update__7ChaseAIf();
// void DoCatchUp__7ChaseAIf();
// void MustRepopulateSegments__7ChaseAI();
// void TestReachedTarget__7ChaseAIRCQ218RadicalMathLibrary6VectorT1();
// void GetClosestPathElementToTarget__7ChaseAIRQ218RadicalMathLibrary6VectorRQ211RoadManager11PathElementRP11RoadSegmentRfT4();
// void UpdateTarget__7ChaseAI();
// void Beeline__7ChaseAIf();
// void TestIntersectBBox__7ChaseAIGQ218RadicalMathLibrary6VectorT1PQ23sim15CollisionVolume();
// void RegisterHudMapIcon__7ChaseAI();
// void __14PotentialField();
// void _$_14PotentialField();
// void func_00129058();
// void __10Potentials();
// void _$_10Potentials();
// void __9TrafficAIP7Vehicle();
// void _$_9TrafficAI();
// void Init__9TrafficAI();
// void func_00129268();
// void Update__9TrafficAIf();
// void StartSwerving__9TrafficAIb();
// void StopSwerving__9TrafficAI();
// void Swerve__9TrafficAI();
// void PerhapsTriggerImpedence__9TrafficAIQ29TrafficAI12ObstacleTypefPv();
// void DecideTurn__9TrafficAI();
// void SetSegmentIndex__9TrafficAIUi();
// void RegisterDebugInfo__9TrafficAI();
// void UnregisterDebugInfo__9TrafficAI();
// void GetGoSpeedMps__9TrafficAI();
// void AttemptLaneChange__9TrafficAIQ29TrafficAI12ObstacleTypefPv();
// void SetAISpeed__9TrafficAIf();
// void GetAISpeed__C9TrafficAI();
// void MaintainSpeed__9TrafficAIf();
// void StopForSomething__9TrafficAIfQ29TrafficAI12ObstacleTypefPv();
// void GetLookAheadDistance__9TrafficAI();
// void CheckForObstacles__9TrafficAIRQ29TrafficAI12ObstacleTypeRfRPvRb();
// void __9VehicleAIP7VehicleQ29VehicleAI17VehicleAITypeEnumbiiT3();
// void _$_9VehicleAI();
// void SetRaceCatchupParams__9VehicleAIRCQ29VehicleAI17RaceCatchupParams();
// void SetEvadeCatchupParams__9VehicleAIRCQ29VehicleAI18EvadeCatchupParams();
// void SetTargetCatchupParams__9VehicleAIRCQ29VehicleAI19TargetCatchupParams();
// void ResetControllerValues__9VehicleAI();
// void Reset__9VehicleAI();
// void Initialize__9VehicleAI();
// void Finalize__9VehicleAI();
// void Update__9VehicleAIf();
// void SetActive__9VehicleAIb();
// void GetPosition__9VehicleAIPQ218RadicalMathLibrary6Vector();
// void GetHeading__9VehicleAIPQ218RadicalMathLibrary6Vector();
// void SetMaxShortcutSkill__9VehicleAIi();
// void SetMinShortcutSkill__9VehicleAIi();
// void EnterLimbo__9VehicleAI();
// void ExitLimbo__9VehicleAI();
// void DetermineShortcutSkill__9VehicleAI();
// void ResetCatchUpParams__9VehicleAI();
// void FillPathElements__9VehicleAI();
// void UpdateSelf__9VehicleAI();
// void FollowRoad__9VehicleAI();
// void FindClosestSegment__9VehicleAIRCQ218RadicalMathLibrary6VectorRiRfRQ218RadicalMathLibrary6Vector();
// void ResetSegments__9VehicleAI();
// void ShiftSegments__9VehicleAIii();
// void FillSegments__9VehicleAI();
// void MustRepopulateSegments__9VehicleAI();
// void GetPosAheadAlongRoad__9VehicleAIffiPQ218RadicalMathLibrary6Vector();
// void UpdateSegments__9VehicleAI();
// void EvadeTraffic__9VehicleAIP7Vehicle();
// void DoCatchUp__9VehicleAIf();
// void DoSteering__9VehicleAI();
// void CheckState__9VehicleAIf();
// void DriveTowards__9VehicleAIPQ218RadicalMathLibrary6VectorRfT2();
// void SetDestination__9VehicleAIRQ218RadicalMathLibrary6Vector();
// void SetNextDestination__9VehicleAIRQ218RadicalMathLibrary6Vector();
// void FindClosestPathElement__9VehicleAIRQ218RadicalMathLibrary6VectorRQ211RoadManager11PathElementRP11RoadSegmentRfT4b();
// void func_0012E7D0();
// void GetRacePathInfo__9VehicleAIRQ211RoadManager11PathElementRP11RoadSegmentRfT3();
// void __10WaypointAIP7VehiclebfT2();
// void _$_10WaypointAI();
// void Update__10WaypointAIf();
// void Initialize__10WaypointAI();
// void Reset__10WaypointAI();
// void UpdateNeedToWaitForPlayer__10WaypointAIf();
// void PossiblyUseTurbo__10WaypointAI();
// void UseTurbo__10WaypointAI();
// void DoCatchUp__10WaypointAIf();
// void UpdateNeedsResetOnSpot__10WaypointAIf();
// void ClearWaypoints__10WaypointAI();
// void AddWaypoint__10WaypointAIP7Locator();
// void MustRepopulateSegments__10WaypointAI();
// void SetCurrentWayPoint__10WaypointAIi();
// void FollowWaypoints__10WaypointAI();
// void TestReachedTarget__10WaypointAIRCQ218RadicalMathLibrary6VectorT1();
// void GetClosestPathElementToTarget__10WaypointAIRQ218RadicalMathLibrary6VectorRQ211RoadManager11PathElementRP11RoadSegmentRfT4();
// void RegisterHudMapIcon__10WaypointAI();
// void TestWaypoint__10WaypointAIi();
// void func_0012FA58();
// void _$_15VehicleAIRender();
// void func_0012FB20();
// void UnregisterAI__15VehicleAIRenderi();
// void func_0012FB98();
// void func_0012FBA8();
// void __tf10Potentials();
// void __tf14PotentialField();
// void __tf9VehicleAI();
// void __tf7ChaseAI();
// void __tf10WaypointAI();
// void __tf9TrafficAI();
// void __tf15VehicleAIRender();
// void __18IHudMapIconLocator();
// void func_0012FE70();
// void __tf18IHudMapIconLocator();
// void _GLOBAL_$I$__7ChaseAIP7Vehiclef();

// bss

// extern UNK_TYPE D_004B1280;

// rodata

// extern UNK_TYPE D_00455960;
// extern UNK_TYPE D_004559B0;
// extern UNK_TYPE _9TrafficAI$SECONDS_LOOKAHEAD;
// extern UNK_TYPE _9TrafficAI$LOOKAHEAD_MIN;
// extern UNK_TYPE jtbl_004559D0;
// extern UNK_TYPE _9VehicleAI$DEFAULT_MIN_SHORTCUT_SKILL;
// extern UNK_TYPE _9VehicleAI$DEFAULT_MAX_SHORTCUT_SKILL;
// extern UNK_TYPE _9VehicleAI$CATCHUP_NORMAL_DRIVING_PERCENTAGE_OF_TOPSPEED;
// extern UNK_TYPE _9VehicleAI$CATCHUP_MAX_SHORTCUTSKILL_MOD;
// extern UNK_TYPE jtbl_00455A00;
// extern UNK_TYPE _10WaypointAI$DEFAULT_TRIGGER_RADIUS;
// extern UNK_TYPE _vt$15VehicleAIRender;
// extern UNK_TYPE _vt$9TrafficAI;
// extern UNK_TYPE _vt$10WaypointAI$18IHudMapIconLocator;
// extern UNK_TYPE _vt$10WaypointAI;
// extern UNK_TYPE _vt$7ChaseAI$18IHudMapIconLocator;
// extern UNK_TYPE _vt$7ChaseAI;
// extern UNK_TYPE _vt$9VehicleAI$18IHudMapIconLocator;
// extern UNK_TYPE _vt$9VehicleAI;
// extern UNK_TYPE _vt$14PotentialField;
// extern UNK_TYPE _vt$10Potentials;
// extern UNK_TYPE D_00455EE8;
// extern UNK_TYPE D_00455EF8;
// extern UNK_TYPE D_00455F10;
// extern UNK_TYPE D_00455F20;
// extern UNK_TYPE D_00455F30;
// extern UNK_TYPE D_00455F40;
// extern UNK_TYPE D_00455F48;
// extern UNK_TYPE D_00455F58;
// extern UNK_TYPE D_00455F68;
// extern UNK_TYPE _vt$18IHudMapIconLocator;
// extern UNK_TYPE D_00455FA0;

// data

// extern UNK_TYPE TRAFFICAI_NAMESPACE;
// extern UNK_TYPE D_00424B48;
// extern UNK_TYPE _15VehicleAIRender$spInstance;
// extern UNK_TYPE D_00424B50;

#endif
