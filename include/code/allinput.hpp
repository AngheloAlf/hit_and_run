#ifndef ALLINPUT_HPP
#define ALLINPUT_HPP

#include "types.h"

#include "libs/tRefCounted.hpp"

// text

class Mappable;

class Button {
    Button(void); // void __6Button();
    ~Button(void); // void _$_6Button();
};

class InputManager {
public:
    static void CreateInstance();
    static InputManager *GetInstance(void);
    static void DestroyInstance(void);
    void Init(void);
    void Update(u32);

private:
    // void OnControllerConnectionStatusChange__12InputManagerP14IRadController();
    // void IsControllerInPort__C12InputManageri();
    // void ToggleRumble__12InputManagerb();
    // void SetRumbleEnabled__12InputManagerb();
    // void SetRumbleForDevice__12InputManagerib();
    // void func_00150828();
    // void TriggerRumblePulse__12InputManageri();
    // void GetValue__C12InputManagerUiUi();
    // void GetController__12InputManagerUi();
public:
    void RegisterMappable(unsigned int, Mappable *); // void RegisterMappable__12InputManagerUiP8Mappable();
private:
    // void UnregisterMappable__12InputManagerUii();
public:
    void UnregisterMappable(unsigned int, Mappable *); // void UnregisterMappable__12InputManagerUiP8Mappable();
private:
    // void UnregisterMappable__12InputManagerP8Mappable();
    // void LoadData__12InputManagerPCUcUi();
    // void SaveData__12InputManagerPUcUi();
    // void ResetData__12InputManager();
    // void __12InputManager();
    // void _$_12InputManager();
    // void EnumerateControllers__12InputManager();
    // void ReleaseAllControllers__12InputManager();
    // void SetGameState__12InputManagerQ25Input11ActiveState();
    // void GetGameState__C12InputManager();
    // void RegisterControllerID__12InputManagerii();
    // void UnregisterControllerID__12InputManageri();
    // void UnregisterAllControllerID__12InputManager();
};

class Mappable: public tRefCounted {
protected:
    Mappable(unsigned int); // void __8MappableUi();
    virtual ~Mappable(void); // void _$_8Mappable();
private:
    // void DispatchOnButton__8MappableiiPC6Button();
    // void InitButtons__8MappableiPC6Button();
    virtual void OnButton(int, int, Button const *) = 0;
    virtual void OnButtonUp(int, int, Button const *) = 0;
    virtual void OnButtonDown(int, int, Button const *) = 0;
    virtual void LoadControllerMappings(unsigned int) = 0;
    virtual void OnControllerDisconnect(int); // void OnControllerDisconnect__8Mappablei();
    virtual void OnControllerConnect(int); // void OnControllerConnect__8Mappablei();
    // void UpdateButtonState__8MappableiiPC6Button();
    // void GetValue__C8MappableUi();
    // void GetButton__8MappableUi();
    // void GetMapper__8MappableUi();
    // void GetActiveMapper__8Mappable();
    // void SetGameState__8MappableUi();
    // void IsActive__C8Mappable();
    // void IsButtonDown__8MappableUi();
    // void func_00151768();
protected:
    void Map(char const *, int, unsigned int, unsigned int); // void Map__8MappablePCciUiUi();
private:
    // void ClearMap__8MappableUi();
    // void Reset__8Mappable();
};

// void __6Mapper();
// void SetAssociation__6Mapperii();
// void GetLogicalIndex__C6Mapperi();
// void ClearAssociations__6Mapper();
// void __14UserController();
// void NotifyConnect__14UserController();
// void NotifyDisconnect__14UserController();
// void Create__14UserControlleri();
// void SetGameState__14UserControllerUi();
// void OnControllerInputPointChange__14UserControllerUif();
// void Initialize__14UserControllerP14IRadController();
// void ReleaseRadController__14UserController();
// void SetRumble__14UserControllerbT1();
// void IsRumbleOn__C14UserController();
// void PulseRumble__14UserController();
// void ApplyEffect__14UserControllerQ212RumbleEffect6EffectUi();
// void ApplyDynaEffect__14UserControllerQ212RumbleEffect10DynaEffectUif();
// void Update__14UserControllerUi();
// void GetInputValue__C14UserControllerUi();
// void _$_14UserController();
// void RegisterMappable__14UserControllerP8Mappable();
// void UnregisterMappable__14UserControlleri();
// void UnregisterMappable__14UserControllerP8Mappable();
// void LoadControllerMappings__14UserController();
// void GetIdByName__C14UserControllerPCc();
// void __12RumbleEffect();
// void _$_12RumbleEffect();
// void SetMotor__12RumbleEffectUiP25IRadControllerOutputPoint();
// void SetEffect__12RumbleEffectQ212RumbleEffect6EffectUi();
// void SetDynaEffect__12RumbleEffectQ212RumbleEffect10DynaEffectUif();
// void Update__12RumbleEffectUi();
// void ShutDownEffects__12RumbleEffect();
// void UpdateEffect__12RumbleEffectQ212RumbleEffect6EffectUi();
// void UpdateDynaEffect__12RumbleEffectQ212RumbleEffect10DynaEffectUif();
// void InitEffects__12RumbleEffect();
// void OnShutDownEffects__12RumbleEffect();
// void __14SteeringSpring();
// void _$_14SteeringSpring();
// void OnInit__14SteeringSpring();
// void SetCenterPoint__14SteeringSpringcUc();
// void SetSpringStrength__14SteeringSpringUc();
// void SetSpringCoefficient__14SteeringSprings();
// void __10BaseDamper();
// void _$_10BaseDamper();
// void OnInit__10BaseDamper();
// void SetCenterPoint__10BaseDampercUc();
// void SetDamperStrength__10BaseDamperUc();
// void SetDamperCoefficient__10BaseDampers();
// void __11ForceEffect();
// void _$_11ForceEffect();
// void Init__11ForceEffectP25IRadControllerOutputPoint();
// void Start__11ForceEffect();
// void Stop__11ForceEffect();
// void Update__11ForceEffect();
// void __14ConstantEffect();
// void _$_14ConstantEffect();
// void OnInit__14ConstantEffect();
// void SetMagnitude__14ConstantEffects();
// void SetDirection__14ConstantEffectUs();
// void __11WheelRumble();
// void _$_11WheelRumble();
// void OnInit__11WheelRumble();
// void SetMagDir__11WheelRumbleUcUs();
// void SetPPO__11WheelRumbleUsUss();
// void SetRumbleType__11WheelRumbleUc();
// void func_00153980();
// void __tf12RumbleEffect();
// void __tf11ForceEffect();
// void __tf14SteeringSpring();
// void __tf10BaseDamper();
// void __tf14ConstantEffect();
// void __tf11WheelRumble();
// void __tf14UserController();
// void __tf12InputManager();
// void __tf8Mappable();
// void __38IRadControllerConnectionChangeCallback();
// void __32IRadControllerInputPointCallback();
// void func_00153D28();
// void __tf38IRadControllerConnectionChangeCallback();
// void __tf32IRadControllerInputPointCallback();
// void func_00153E18();
// void _GLOBAL_$I$_6Button$mTickCount();

// rodata

// extern UNK_TYPE D_0045B008;
// extern UNK_TYPE D_0045B030;
// extern UNK_TYPE D_0045B040;
// extern UNK_TYPE D_0045B050;
// extern UNK_TYPE D_0045B060;
// extern UNK_TYPE D_0045B068;
// extern UNK_TYPE D_0045B070;
// extern UNK_TYPE D_0045B0A0;
// extern UNK_TYPE D_0045B0A8;
// extern UNK_TYPE D_0045B0B0;
// extern UNK_TYPE D_0045B0B8;
// extern UNK_TYPE D_0045B0C0;
// extern UNK_TYPE D_0045B0C8;
// extern UNK_TYPE D_0045B0D0;
// extern UNK_TYPE D_0045B0D8;
// extern UNK_TYPE D_0045B0E0;
// extern UNK_TYPE D_0045B0F0;
// extern UNK_TYPE D_0045B100;
// extern UNK_TYPE D_0045B110;
// extern UNK_TYPE D_0045B118;
// extern UNK_TYPE D_0045B128;
// extern UNK_TYPE D_0045B138;
// extern UNK_TYPE D_0045B148;
// extern UNK_TYPE D_0045B150;
// extern UNK_TYPE D_0045B158;
// extern UNK_TYPE D_0045B160;
// extern UNK_TYPE D_0045B168;
// extern UNK_TYPE D_0045B178;
// extern UNK_TYPE D_0045B188;
// extern UNK_TYPE D_0045B198;
// extern UNK_TYPE D_0045B1A8;
// extern UNK_TYPE D_0045B1B0;
// extern UNK_TYPE D_0045B1C0;
// extern UNK_TYPE _vt$8Mappable;
// extern UNK_TYPE _vt$12InputManager$15GameDataHandler;
// extern UNK_TYPE _vt$12InputManager;
// extern UNK_TYPE _vt$14UserController;
// extern UNK_TYPE _vt$11WheelRumble;
// extern UNK_TYPE _vt$14ConstantEffect;
// extern UNK_TYPE _vt$10BaseDamper;
// extern UNK_TYPE _vt$14SteeringSpring;
// extern UNK_TYPE _vt$11ForceEffect;
// extern UNK_TYPE _vt$12RumbleEffect;
// extern UNK_TYPE D_0045B358;
// extern UNK_TYPE D_0045B368;
// extern UNK_TYPE D_0045B378;
// extern UNK_TYPE D_0045B390;
// extern UNK_TYPE D_0045B3A0;
// extern UNK_TYPE D_0045B3B8;
// extern UNK_TYPE D_0045B3C8;
// extern UNK_TYPE D_0045B3E0;
// extern UNK_TYPE D_0045B3F0;
// extern UNK_TYPE D_0045B400;
// extern UNK_TYPE _vt$32IRadControllerInputPointCallback;
// extern UNK_TYPE _vt$38IRadControllerConnectionChangeCallback;
// extern UNK_TYPE D_0045B490;
// extern UNK_TYPE D_0045B4C0;

// data

// extern UNK_TYPE _6Button$mTickCount;
// extern UNK_TYPE D_00426DAC;
// extern UNK_TYPE RESET_BUTTONS;
// extern UNK_TYPE _12InputManager$spInstance;
// extern UNK_TYPE gRandomButtoners;
// extern UNK_TYPE GAIN_FUDGE;
// extern UNK_TYPE D_00426FEC;
// extern UNK_TYPE VALUES;
// extern UNK_TYPE DYNA_VALUES;

#endif
