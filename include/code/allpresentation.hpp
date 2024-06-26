#ifndef ALLPRESENTATION_HPP
#define ALLPRESENTATION_HPP

#include "types.h"

class PresentationManager_unk_54_parent {
private:
    /* 0x00 */ /* vt */
    /* size = 0x04 */

private:
    /* vt 0x0C */ virtual void virtual_0C(void);
    /* vt 0x14 */ virtual void virtual_14(void);
    /* vt 0x1C */ virtual void virtual_1C(void);
    /* vt 0x24 */ virtual void virtual_24(void);
    /* vt 0x2C */ virtual void virtual_2C(void);
    /* vt 0x34 */ virtual void virtual_34(void);
    /* vt 0x3C */ virtual void virtual_3C(void);
    /* vt 0x44 */ virtual void virtual_44(void);
    /* vt 0x4C */ virtual void virtual_4C(void);
    /* vt 0x54 */ virtual void virtual_54(void);
    /* vt 0x6C */ virtual void virtual_5C(void);
public:
    /* vt 0x64 */ virtual void virtual_64(void);
    /* vt 0x6C */ virtual void virtual_6C(void);
};

class PresentationManager_unk_54 : public PresentationManager_unk_54_parent {
public:
    /* 0x00 */ /* vt */
    /* 0x04 */ s32 unk_04;
private:
    /* size >= 0x08 */

public:
    bool unk_inline_func(void) {
        return (this->unk_04 != 0) && (this->unk_04 != 4);
    };
};

// text

// void __15AnimationPlayer();
// void _$_15AnimationPlayer();
// void LoadData__15AnimationPlayerPCcbPv();
// void LoadData__15AnimationPlayerPCcPQ215AnimationPlayer16LoadDataCallBackbPv();
// void OnProcessRequestsComplete__15AnimationPlayerPv();
// void Play__15AnimationPlayer();
// void Render__15AnimationPlayer();
// void Stop__15AnimationPlayer();
// void ClearData__15AnimationPlayer();
// void EnterExclusive__15AnimationPlayer();
// void LeaveExclusive__15AnimationPlayer();
// void __7Blinker();
// void _$_7Blinker();
// void SetCharacter__7BlinkerP9Character();
// void Update__7Blinkeri();
// void __12CameraPlayer();
// void _$_12CameraPlayer();
// void ClearData__12CameraPlayer();
// void DoLoaded__12CameraPlayer();
// void GetHardwareLanguage__8Languagev();
// void __12MouthFlapper();
// void _$_12MouthFlapper();
// void GetDefaultSettings__12MouthFlapperRC5tName();
// void GetNumberOfDefaultSettings__12MouthFlapper();
// void SetCharacter__12MouthFlapperP9Character();
// void Advance__12MouthFlapperf();
// void Update__12MouthFlapperPQ25poser4Pose();
// void NeuSpeed__12MouthFlapper();
// void __26MouthFlapperDefaultSettingRC5tNamefffff();
// void __26MouthFlapperDefaultSettingRC26MouthFlapperDefaultSetting();
// void GetMaxDeviation__C26MouthFlapperDefaultSetting();
// void GetMaxOpen__C26MouthFlapperDefaultSetting();
// void GetMaxSpeed__C26MouthFlapperDefaultSetting();
// void GetMinOpen__C26MouthFlapperDefaultSetting();
// void GetMinSpeed__C26MouthFlapperDefaultSetting();
// void GetName__C26MouthFlapperDefaultSetting();
// void __as__26MouthFlapperDefaultSettingRC26MouthFlapperDefaultSetting();
// void __9NISPlayer();
// void _$_9NISPlayer();
// void ClearData__9NISPlayer();
// void DoLoaded__9NISPlayer();
// void DoRender__9NISPlayer();
// void __14PlayerDrawable();
// void _$_14PlayerDrawable();
// void Display__14PlayerDrawable();

class PresentationManager {
public:
    /* 0x00 */ UNK_PAD unk_00[0x54];
    /* 0x54 */ PresentationManager_unk_54 *unk_54;
    /* >= 0x58 size */

public:
    static void CreateInstance();
    static PresentationManager *GetInstance();
    static void DestroyInstance();

private:
// void __19PresentationManager();
// void _$_19PresentationManager();
// void Initialize__19PresentationManager();
// void Finalize__19PresentationManager();
// void InitializePlayerDrawable__19PresentationManager();
// void FinalizePlayerDrawable__19PresentationManager();
// void GetAnimatorNpc__19PresentationManager();
// void GetAnimatorPc__19PresentationManager();
// void PlayFMV__19PresentationManagerPCcPQ217PresentationEvent25PresentationEventCallBackbT3();
// void OnPresentationEventBegin__19PresentationManagerP17PresentationEvent();
// void OnPresentationEventLoadComplete__19PresentationManagerP17PresentationEvent();
// void OnPresentationEventEnd__19PresentationManagerP17PresentationEvent();
// void OnProcessRequestsComplete__19PresentationManagerPv();
// void QueueFMV__19PresentationManagerPP8FMVEventPQ217PresentationEvent25PresentationEventCallBack();
// void func_0019C4B0();
// void IsBusy__C19PresentationManager();
// void Update__19PresentationManagerUi();
// void func_0019C6D8();
// void GetCameraTargetForLineOfDialog__C19PresentationManagerUi();
// void HandleEvent__19PresentationManager9EventEnumPv();
// void AddToQueue__19PresentationManagerP17PresentationEvent();
// void ReturnToPool__19PresentationManagerP17PresentationEvent();
// void GetFirst__19PresentationManager();
// void OnGameplayStart__19PresentationManager();
// void OnGameplayStop__19PresentationManager();
// void SetCamerasForLineOfDialog__19PresentationManagerRCt6vector2Z5tNameZt7s2alloc1Z5tName();
// void InConversation__C19PresentationManager();
public:
    void StopAll(void);
private:
// void ReplaceMissionBriefingBitmap__19PresentationManagerRC5tName();
// void MakeCharactersFaceEachOther__19PresentationManagerP9CharacterT1();
};

// void __19PresentationOverlay();
// void Update__19PresentationOverlayUi();
// void Display__19PresentationOverlay();

// void __20PresentationAnimator();
// void _$_20PresentationAnimator();
// void AddAmbientAnimations__20PresentationAnimatorRCt6vector2Z5tNameZt7s2alloc1Z5tName();
// void ClearAmbientAnimations__20PresentationAnimator();
// void ChooseNextAnimation__20PresentationAnimator();
// void ChooseRandomAnimation__C20PresentationAnimator();
// void SetCharacter__20PresentationAnimatorP9Character();
// void GetCharacter__20PresentationAnimator();
// void PlaySpecialAmbientAnimation__20PresentationAnimator();
// void SetRandomSelection__20PresentationAnimatorb();
// void StartTalking__20PresentationAnimator();
// void StopTalking__20PresentationAnimator();
// void func_0019E4A0();
// void Update__20PresentationAnimatori();
// void __21SimpleAnimationPlayer();
// void _$_21SimpleAnimationPlayer();
// void Update__21SimpleAnimationPlayerUi();
// void Rewind__21SimpleAnimationPlayer();
// void ClearData__21SimpleAnimationPlayer();
// void SetNameData__21SimpleAnimationPlayerPcN21();
// void DoLoaded__21SimpleAnimationPlayer();
// void DoRender__21SimpleAnimationPlayer();
// void SetIntroLoop__21SimpleAnimationPlayerUi();
// void SetOutroLoop__21SimpleAnimationPlayerUi();
// void Play__21SimpleAnimationPlayer();
// void DoneIntro__21SimpleAnimationPlayer();
// void __16TransitionPlayer();
// void _$_16TransitionPlayer();
// void SetTransition__16TransitionPlayerPQ216TransitionPlayer14TransitionInfo();
// void Update__16TransitionPlayerUi();
// void DoUpdate__16TransitionPlayerUi();
// void DoRender__16TransitionPlayer();

class TutorialManager {
public:
    static void CreateInstance(void);

private:
// void GetInstance__15TutorialManager();
// void AddToQueue__15TutorialManager12TutorialMode();

public:
    static void DestroyInstance(void);

private:
// void __15TutorialManager();
// void _$_15TutorialManager();
// void HandleEvent__15TutorialManager9EventEnumPv();
// void Initialize__15TutorialManager();
// void MarkDialogFinished__15TutorialManager();
// void ProcessQueue__15TutorialManager();
// void Update__15TutorialManagerf();
// void LoadData__15TutorialManagerPCUcUi();
// void SaveData__15TutorialManagerPUcUi();
// void ResetData__15TutorialManager();
// void QueryTutorialSeen__15TutorialManager12TutorialMode();
// void SetTutorialSeen__15TutorialManager12TutorialModeb();
};

// void Initialize__t9AllocPool1Z8FMVEvent();
// void __t9AllocPool1Z8FMVEvent19GameMemoryAllocatorUi();
// void Initialize__t9AllocPool1Z8NISEvent();
// void __t9AllocPool1Z8NISEvent19GameMemoryAllocatorUi();
// void __15TransitionEvent();
// void Initialize__t9AllocPool1Z15TransitionEvent();
// void __t9AllocPool1Z15TransitionEvent19GameMemoryAllocatorUi();
// void Finalize__t9AllocPool1Z8FMVEvent();
// void _$_t9AllocPool1Z8FMVEvent();
// void Finalize__t9AllocPool1Z8NISEvent();
// void _$_t9AllocPool1Z8NISEvent();
// void Finalize__t9AllocPool1Z15TransitionEvent();
// void _$_t9AllocPool1Z15TransitionEvent();
// void AllocateFromPool__t9AllocPool1Z8FMVEvent();
// void func_001A0788();
// void ReturnToPool__t9AllocPool1Z8FMVEventUi();
// void ReturnToPool__t9AllocPool1Z8NISEventUi();
// void ReturnToPool__t9AllocPool1Z15TransitionEventUi();
// void __uninitialized_copy_aux__H2ZPC5tNameZP5tName_X01X01X11G12__false_type_X11();
// void _M_range_insert__H1ZPC5tName_t6vector2Z5tNameZt7s2alloc1Z5tNameP5tNameX00X00G20forward_iterator_tag_v();
// void _M_insert_aux__t6vector2Z12TutorialModeZt7s2alloc1Z12TutorialModeP12TutorialModeRC12TutorialMode();
// void __uninitialized_copy_aux__H2ZP12TutorialModeZP12TutorialMode_X01X01X11G12__false_type_X11();
// void func_001A0D40();
// void __tf15AnimationPlayer();
// void __tf7Blinker();
// void __tf21SimpleAnimationPlayer();
// void __tf12CameraPlayer();
// void __tf12MouthFlapper();
// void __tf9NISPlayer();
// void __tf14PlayerDrawable();
// void __tf16TransitionPlayer();
// void _$_19PresentationOverlay();
// void __tf19PresentationOverlay();
// void __tf19PresentationManager();
// void __tf20PresentationAnimator();
// void __tf15TutorialManager();
// void __tft9AllocPool1Z8FMVEvent();
// void __tft9AllocPool1Z8NISEvent();
// void __tft9AllocPool1Z15TransitionEvent();
// void func_001A2998();
// void __Q216radLoadInventoryt8SafeCast1Z10tAnimation();
// void _$_26MouthFlapperDefaultSetting();
// void __Q216radLoadInventoryt8SafeCast1ZQ210Scenegraph10Scenegraph();
// void __Q216radLoadInventoryt8SafeCast1Z18tCompositeDrawable();
// void DoLoaded__16TransitionPlayer();
// void func_001A2AB8();
// void _$_t18_Vector_alloc_base3Z12TutorialModeZt7s2alloc1Z12TutorialModeb0();
// void func_001A2B00();
// void __tfQ216radLoadInventoryt8SafeCast1Z10tAnimation();
// void __tfQ216radLoadInventoryt8SafeCast1ZQ210Scenegraph10Scenegraph();
// void __tfQ216radLoadInventoryt8SafeCast1Z18tCompositeDrawable();
// void func_001A2C48();
// void safe_cast__Q216radLoadInventoryt8SafeCast1Z18tCompositeDrawableP9IRefCount();
// void safe_cast__Q216radLoadInventoryt8SafeCast1ZQ210Scenegraph10ScenegraphP9IRefCount();
// void safe_cast__Q216radLoadInventoryt8SafeCast1Z10tAnimationP9IRefCount();
// void func_001A2D58();
// void _GLOBAL_$I$__15AnimationPlayer();
// void _GLOBAL_$D$__15AnimationPlayer();

// rodata

// extern UNK_TYPE D_00462E30;
// extern UNK_TYPE D_00462E48;
// extern UNK_TYPE D_00462E60;
// extern UNK_TYPE D_00462E68;
// extern UNK_TYPE D_00462E70;
// extern UNK_TYPE jtbl_00462E80;
// extern UNK_TYPE D_00462EA0;
// extern UNK_TYPE D_00462F08;
// extern UNK_TYPE D_00462F18;
// extern UNK_TYPE D_00462F28;
// extern UNK_TYPE D_00462F38;
// extern UNK_TYPE D_00462F48;
// extern UNK_TYPE D_00462F58;
// extern UNK_TYPE D_00462F68;
// extern UNK_TYPE D_00462FC8;
// extern UNK_TYPE D_00462FD0;
// extern UNK_TYPE D_00462FD8;
// extern UNK_TYPE D_00462FE0;
// extern UNK_TYPE D_00462FE8;
// extern UNK_TYPE D_00462FF8;
// extern UNK_TYPE D_00463028;
// extern UNK_TYPE D_00463038;
// extern UNK_TYPE D_00463068;
// extern UNK_TYPE D_00463070;
// extern UNK_TYPE D_004630A0;
// extern UNK_TYPE D_004630A8;
// extern UNK_TYPE D_004630D8;
// extern UNK_TYPE D_004630E0;
// extern UNK_TYPE D_00463110;
// extern UNK_TYPE D_00463118;
// extern UNK_TYPE D_00463128;
// extern UNK_TYPE D_00463138;
// extern UNK_TYPE D_00463148;
// extern UNK_TYPE D_00463178;
// extern UNK_TYPE D_00463188;
// extern UNK_TYPE D_004631B8;
// extern UNK_TYPE D_004631C8;
// extern UNK_TYPE D_004631F8;
// extern UNK_TYPE D_00463200;
// extern UNK_TYPE D_00463230;
// extern UNK_TYPE D_00463238;
// extern UNK_TYPE D_00463268;
// extern UNK_TYPE D_00463270;
// extern UNK_TYPE D_004632A0;
// extern UNK_TYPE D_004632B0;
// extern UNK_TYPE D_004632E0;
// extern UNK_TYPE D_004632E8;
// extern UNK_TYPE jtbl_00463300;
// extern UNK_TYPE _vt$t9AllocPool1Z15TransitionEvent;
// extern UNK_TYPE _vt$t9AllocPool1Z8NISEvent;
// extern UNK_TYPE _vt$t9AllocPool1Z8FMVEvent;
// extern UNK_TYPE _vt$15TutorialManager$15GameDataHandler;
// extern UNK_TYPE _vt$15TutorialManager;
// extern UNK_TYPE _vt$20PresentationAnimator;
// extern UNK_TYPE _vt$19PresentationManager$Q214LoadingManager23ProcessRequestsCallback;
// extern UNK_TYPE _vt$19PresentationManager$Q217PresentationEvent25PresentationEventCallBack;
// extern UNK_TYPE _vt$19PresentationManager;
// extern UNK_TYPE _vt$19PresentationOverlay;
// extern UNK_TYPE _vt$16TransitionPlayer;
// extern UNK_TYPE _vt$14PlayerDrawable;
// extern UNK_TYPE _vt$9NISPlayer;
// extern UNK_TYPE _vt$12MouthFlapper;
// extern UNK_TYPE _vt$12CameraPlayer;
// extern UNK_TYPE _vt$21SimpleAnimationPlayer;
// extern UNK_TYPE _vt$7Blinker;
// extern UNK_TYPE _vt$15AnimationPlayer;
// extern UNK_TYPE D_00463758;
// extern UNK_TYPE D_00463760;
// extern UNK_TYPE D_00463768;
// extern UNK_TYPE D_00463778;
// extern UNK_TYPE D_00463780;
// extern UNK_TYPE D_00463788;
// extern UNK_TYPE D_00463790;
// extern UNK_TYPE D_00463798;
// extern UNK_TYPE D_004637A0;
// extern UNK_TYPE D_004637A8;
// extern UNK_TYPE D_004637B0;
// extern UNK_TYPE D_004637B8;
// extern UNK_TYPE D_004637C0;
// extern UNK_TYPE D_004637C8;
// extern UNK_TYPE D_004637D0;
// extern UNK_TYPE D_004637D8;
// extern UNK_TYPE D_004637E0;
// extern UNK_TYPE D_004637E8;
// extern UNK_TYPE D_004637F0;
// extern UNK_TYPE D_004637F8;
// extern UNK_TYPE D_00463800;
// extern UNK_TYPE D_00463808;
// extern UNK_TYPE D_00463810;
// extern UNK_TYPE D_00463818;
// extern UNK_TYPE D_00463820;
// extern UNK_TYPE D_00463830;
// extern UNK_TYPE D_00463838;
// extern UNK_TYPE D_00463840;
// extern UNK_TYPE D_00463848;
// extern UNK_TYPE D_00463850;
// extern UNK_TYPE D_00463860;
// extern UNK_TYPE D_00463868;
// extern UNK_TYPE D_00463870;
// extern UNK_TYPE D_00463878;
// extern UNK_TYPE D_00463880;
// extern UNK_TYPE D_00463888;
// extern UNK_TYPE D_00463890;
// extern UNK_TYPE D_00463898;
// extern UNK_TYPE D_004638A0;
// extern UNK_TYPE D_004638A8;
// extern UNK_TYPE D_004638B0;
// extern UNK_TYPE D_004638C0;
// extern UNK_TYPE D_004638D0;
// extern UNK_TYPE D_004638E0;
// extern UNK_TYPE D_004638F0;
// extern UNK_TYPE D_00463900;
// extern UNK_TYPE D_00463908;
// extern UNK_TYPE D_00463918;
// extern UNK_TYPE D_00463920;
// extern UNK_TYPE D_00463928;
// extern UNK_TYPE D_00463930;
// extern UNK_TYPE D_00463938;
// extern UNK_TYPE D_00463940;
// extern UNK_TYPE D_00463948;
// extern UNK_TYPE D_00463950;
// extern UNK_TYPE D_00463968;
// extern UNK_TYPE D_00463978;
// extern UNK_TYPE D_00463990;
// extern UNK_TYPE D_004639A0;
// extern UNK_TYPE D_004639B0;
// extern UNK_TYPE D_004639C0;
// extern UNK_TYPE D_004639D8;
// extern UNK_TYPE D_004639F0;
// extern UNK_TYPE D_00463A08;
// extern UNK_TYPE D_00463A20;
// extern UNK_TYPE D_00463A38;
// extern UNK_TYPE D_00463A50;
// extern UNK_TYPE D_00463A68;
// extern UNK_TYPE D_00463A78;
// extern UNK_TYPE D_00463A90;
// extern UNK_TYPE D_00463AA8;
// extern UNK_TYPE _vt$Q216radLoadInventoryt8SafeCast1Z18tCompositeDrawable;
// extern UNK_TYPE _vt$Q216radLoadInventoryt8SafeCast1ZQ210Scenegraph10Scenegraph;
// extern UNK_TYPE _vt$Q216radLoadInventoryt8SafeCast1Z10tAnimation;
// extern UNK_TYPE D_00463C60;
// extern UNK_TYPE D_00463C90;
// extern UNK_TYPE D_00463CD0;

// bss

// extern UNK_TYPE D_004B1B70;
// extern UNK_TYPE D_004B1B78;
// extern UNK_TYPE D_004B1B80;
// extern UNK_TYPE D_004B1B88;

// data

// extern UNK_TYPE D_0042C550;
// extern UNK_TYPE D_0042C554;
// extern UNK_TYPE gDefaultSetting;
// extern UNK_TYPE D_0042C584;
// extern UNK_TYPE gDefaultSettings;
// extern UNK_TYPE gWatcherNMnameSpace;
// extern UNK_TYPE D_0042CDF8;
// extern UNK_TYPE _19PresentationManager$spInstance;
// extern UNK_TYPE _15TutorialManager$spInstance;
// extern UNK_TYPE D_0042CE1C;

#endif
