#ifndef ALLSOUND_HPP
#define ALLSOUND_HPP

#include "code/ContextEnum.hpp"

// text

// void __8Listener();
// void _$_8Listener();
// void Initialize__8ListenerRQ25Sound23daSoundRenderingManager();
// void Update__8Listener11ContextEnum();
// void __19SimpsonsSoundPlayer();
// void _$_19SimpsonsSoundPlayer();
// void PlaySound__19SimpsonsSoundPlayerPCcP27SimpsonsSoundPlayerCallback();
// void PlayResource__19SimpsonsSoundPlayerP16IDaSoundResourceUiP27SimpsonsSoundPlayerCallback();
// void PlaySound__19SimpsonsSoundPlayerUiP27SimpsonsSoundPlayerCallback();
// void QueueSound__19SimpsonsSoundPlayerUiP27SimpsonsSoundPlayerCallback();
// void QueueSound__19SimpsonsSoundPlayerP16IDaSoundResourceUiP27SimpsonsSoundPlayerCallback();
// void PlayQueuedSound__19SimpsonsSoundPlayerP27SimpsonsSoundPlayerCallback();
// void OnPlaybackComplete__19SimpsonsSoundPlayer();
// void Stop__19SimpsonsSoundPlayer();
// void Pause__19SimpsonsSoundPlayer();
// void Continue__19SimpsonsSoundPlayer();
// void IsPaused__19SimpsonsSoundPlayer();
// void SetPitch__19SimpsonsSoundPlayerf();
// void SetTrim__19SimpsonsSoundPlayerf();
// void dumpSoundPlayer__19SimpsonsSoundPlayer();
// void __12SoundClusteriP13IRadNameSpace();
// void _$_12SoundCluster();
// void LoadSounds__12SoundClusterP16SoundFileHandler();
// void UnloadSounds__12SoundCluster();
// void AddResource__12SoundClusterUi();
// void func_002289E0();
// void OnDynaLoadOperationsComplete__12SoundClusterPv();
// void __11SoundLoader();
// void _$_11SoundLoader();
// void LevelLoad__11SoundLoaderQ211RenderEnums9LevelEnum();
// void LevelUnload__11SoundLoaderb();
// void LoadCarSound__11SoundLoaderP7Vehicleb();
// void func_00228EF8();
// void LoadClusterByName__11SoundLoaderPCcP16SoundFileHandler();
// void HandleEvent__11SoundLoader9EventEnumPv();
// void queueLoad__11SoundLoader16SoundClusterName();
// void clusterLoad__11SoundLoader16SoundClusterNameP16SoundFileHandler();
// void clusterUnload__11SoundLoader16SoundClusterName();

class SoundManager {
public:
    static void CreateInstance(bool mute, bool noMusic, bool noEffects, bool noDialog);
    static SoundManager *GetInstance(void);
    static void DestroyInstance(void);

    void Update(void);
    void UpdateOncePerFrame(unsigned int, ContextEnum, bool);

private:
    // void HandleEvent__12SoundManager9EventEnumPv();
    // void OnBootupStart__12SoundManager();
    // void OnBootupComplete__12SoundManager();
    // void QueueLevelSoundLoads__12SoundManager();
    // void ResetDucking__12SoundManager();
    // void OnFrontEndStart__12SoundManager();
    // void OnFrontEndEnd__12SoundManager();
    // void OnGameplayStart__12SoundManager();
    // void OnGameplayEnd__12SoundManagerb();
    // void OnPauseStart__12SoundManager();
    // void OnPauseEnd__12SoundManager();
    // void OnStoreScreenStart__12SoundManagerb();
    // void OnStoreScreenEnd__12SoundManager();
    // void DuckEverythingButMusicBegin__12SoundManagerb();
    // void DuckEverythingButMusicEnd__12SoundManagerb();
    // void OnMissionBriefingStart__12SoundManager();
    // void OnMissionBriefingEnd__12SoundManager();
    // void DuckForInGameCredits__12SoundManager();
    // void LoadSoundFile__12SoundManagerPCcP16SoundFileHandler();
    // void LoadCarSound__12SoundManagerP7Vehicleb();
    // void func_00229D98();
public:
    void SetMasterVolume(float);
private:
    // void GetSfxVolume__12SoundManager();
    // void SetSfxVolume__12SoundManagerf();
    // void GetCarVolume__12SoundManager();
    // void SetCarVolume__12SoundManagerf();
    // void GetMusicVolume__12SoundManager();
    // void SetMusicVolume__12SoundManagerf();
    // void SetMusicVolumeWithoutTuner__12SoundManagerf();
    // void func_00229FF8();
    // void SetAmbienceVolume__12SoundManagerf();
    // void SetAmbienceVolumeWithoutTuner__12SoundManagerf();
    // void GetCalculatedAmbienceVolume__12SoundManager();
    // void GetDialogueVolume__12SoundManager();
    // void func_0022A200();
    // void SetDialogueVolume__12SoundManagerf();
    // void PlayCarOptionMenuStinger__12SoundManager();
    // void PlayDialogueOptionMenuStinger__12SoundManager();
    // void PlayMusicOptionMenuStinger__12SoundManager();
    // void PlaySfxOptionMenuStinger__12SoundManager();
    // void LoadNISSound__12SoundManagerUiP22NISSoundLoadedCallback();
    // void PlayNISSound__12SoundManagerUiPQ218RadicalMathLibrary5Box3DP32NISSoundPlaybackCompleteCallback();
    // void StopAndDumpNISSound__12SoundManagerUi();
public:
    void StopForMovie(void);
    void ResumeAfterMovie(void);
private:
    // void IsStoppedForMovie__12SoundManager();
    // void MuteNISPlayers__12SoundManager();
    // void UnmuteNISPlayers__12SoundManager();
    // void RestartSupersprintMusic__12SoundManager();
    // void GetBeatValue__12SoundManager();
    // void IsFoodCharacter__12SoundManagerP9Character();
    // void SetDialogueLanguage__12SoundManagerQ27Scrooby10XLLanguage();
    // void LoadData__12SoundManagerPCUcUi();
    // void SaveData__12SoundManagerPUcUi();
    // void ResetData__12SoundManager();
    // void SetSoundMode__12SoundManager9SoundMode();
    // void GetSoundMode__12SoundManager();
    // void __12SoundManagerbN31();
    // void _$_12SoundManager();
    // void initialize__12SoundManager();
    // void prepareStartupSounds__12SoundManager();
    // void dumpStartupSounds__12SoundManager();
    // void playStartupAcceptSound__12SoundManager();
    // void playStartupScrollSound__12SoundManager();
};

// void __28SoundRenderingPlayerCallbackR19SimpsonsSoundPlayerP27SimpsonsSoundPlayerCallback();
// void _$_28SoundRenderingPlayerCallback();
// void CancelGameCallbackAndRelease__28SoundRenderingPlayerCallback();
// void OnSoundReady__28SoundRenderingPlayerCallbackPv();
// void OnSoundDone__28SoundRenderingPlayerCallbackPv();
// void __15PositionCarrier();
// void _$_15PositionCarrier();
// void __21PositionalSoundPlayer();
// void _$_21PositionalSoundPlayer();
// void PlayResource__21PositionalSoundPlayerP16IDaSoundResourceUiP27SimpsonsSoundPlayerCallback();
// void PlayQueuedSound__21PositionalSoundPlayerR14radSoundVectorP27SimpsonsSoundPlayerCallback();
// void ServiceOncePerFrame__21PositionalSoundPlayer();
// void SetPositionCarrier__21PositionalSoundPlayerR15PositionCarrier();
// void SetParameters__21PositionalSoundPlayerP23positionalSoundSettings();
// void SetPosition__21PositionalSoundPlayerfff();
// void dumpSoundPlayer__21PositionalSoundPlayer();
// void func_0022B9E8();
// void __tf8Listener();
// void __tf19SimpsonsSoundPlayer();
// void __tf12SoundCluster();
// void __tf11SoundLoader();
// void __tf15PositionCarrier();
// void __tf21PositionalSoundPlayer();
// void __tf12SoundManager();
// void __tf28SoundRenderingPlayerCallback();
// void __tft14radLinkedClass1Z28SoundRenderingPlayerCallback();
// void func_0022BCF8();
// void __Q25Sound19IDaSoundPlayerState();
// void __Q25Sound34IDaSoundDynaLoadCompletionCallback();
// void func_0022BD78();
// void AddRef__12SoundCluster();
// void Release__12SoundCluster();
// void func_0022BE00();
// void AddRef__28SoundRenderingPlayerCallback();
// void Release__28SoundRenderingPlayerCallback();
// void func_0022BE90();
// void __tfQ25Sound19IDaSoundPlayerState();
// void __tfQ25Sound34IDaSoundDynaLoadCompletionCallback();
// void func_0022BF48();

// bss

// extern UNK_TYPE D_004B209C;
// extern UNK_TYPE D_004B20A0;

// rodata

// extern UNK_TYPE D_00471688;
// extern UNK_TYPE D_00471760;
// extern UNK_TYPE D_00471768;
// extern UNK_TYPE D_00471778;
// extern UNK_TYPE D_00471788;
// extern UNK_TYPE D_00471798;
// extern UNK_TYPE D_004717A8;
// extern UNK_TYPE D_004717B0;
// extern UNK_TYPE D_004717B8;
// extern UNK_TYPE D_004717C8;
// extern UNK_TYPE D_004717D0;
// extern UNK_TYPE D_004717D8;
// extern UNK_TYPE D_004717E0;
// extern UNK_TYPE D_004717E8;
// extern UNK_TYPE D_004717F0;
// extern UNK_TYPE D_004717F8;
// extern UNK_TYPE D_00471800;
// extern UNK_TYPE D_00471808;
// extern UNK_TYPE D_00471818;
// extern UNK_TYPE D_00471820;
// extern UNK_TYPE D_00471828;
// extern UNK_TYPE D_00471830;
// extern UNK_TYPE D_00471838;
// extern UNK_TYPE D_00471840;
// extern UNK_TYPE D_00471848;
// extern UNK_TYPE D_00471850;
// extern UNK_TYPE D_00471858;
// extern UNK_TYPE D_00471860;
// extern UNK_TYPE D_00471868;
// extern UNK_TYPE D_00471870;
// extern UNK_TYPE D_00471878;
// extern UNK_TYPE D_00471880;
// extern UNK_TYPE D_00471888;
// extern UNK_TYPE D_00471890;
// extern UNK_TYPE D_00471898;
// extern UNK_TYPE D_004718A0;
// extern UNK_TYPE D_004718A8;
// extern UNK_TYPE D_004718B0;
// extern UNK_TYPE D_004718B8;
// extern UNK_TYPE D_004718C0;
// extern UNK_TYPE D_004718C8;
// extern UNK_TYPE D_004718D0;
// extern UNK_TYPE D_004718D8;
// extern UNK_TYPE D_004718E0;
// extern UNK_TYPE D_004718E8;
// extern UNK_TYPE D_004718F8;
// extern UNK_TYPE D_00471900;
// extern UNK_TYPE D_00471908;
// extern UNK_TYPE D_00471910;
// extern UNK_TYPE D_00471918;
// extern UNK_TYPE D_00471920;
// extern UNK_TYPE D_00471928;
// extern UNK_TYPE D_00471930;
// extern UNK_TYPE D_00471938;
// extern UNK_TYPE D_00471940;
// extern UNK_TYPE D_00471950;
// extern UNK_TYPE D_00471958;
// extern UNK_TYPE D_00471960;
// extern UNK_TYPE D_00471968;
// extern UNK_TYPE D_00471970;
// extern UNK_TYPE D_00471978;
// extern UNK_TYPE D_00471980;
// extern UNK_TYPE D_00471988;
// extern UNK_TYPE D_00471990;
// extern UNK_TYPE D_00471998;
// extern UNK_TYPE D_004719A0;
// extern UNK_TYPE D_004719B0;
// extern UNK_TYPE D_004719B8;
// extern UNK_TYPE D_004719C0;
// extern UNK_TYPE D_004719C8;
// extern UNK_TYPE D_004719D0;
// extern UNK_TYPE D_004719D8;
// extern UNK_TYPE D_004719E0;
// extern UNK_TYPE D_004719E8;
// extern UNK_TYPE D_004719F0;
// extern UNK_TYPE D_004719F8;
// extern UNK_TYPE D_00471A08;
// extern UNK_TYPE D_00471A10;
// extern UNK_TYPE D_00471A18;
// extern UNK_TYPE D_00471A20;
// extern UNK_TYPE D_00471A28;
// extern UNK_TYPE D_00471A30;
// extern UNK_TYPE D_00471A38;
// extern UNK_TYPE D_00471A40;
// extern UNK_TYPE D_00471A48;
// extern UNK_TYPE D_00471A50;
// extern UNK_TYPE D_00471A58;
// extern UNK_TYPE D_00471A60;
// extern UNK_TYPE D_00471A68;
// extern UNK_TYPE D_00471A70;
// extern UNK_TYPE D_00471A78;
// extern UNK_TYPE D_00471A80;
// extern UNK_TYPE D_00471A88;
// extern UNK_TYPE D_00471A90;
// extern UNK_TYPE D_00471A98;
// extern UNK_TYPE D_00471AA0;
// extern UNK_TYPE D_00471AA8;
// extern UNK_TYPE D_00471AB8;
// extern UNK_TYPE D_00471AC0;
// extern UNK_TYPE D_00471AC8;
// extern UNK_TYPE D_00471AD0;
// extern UNK_TYPE D_00471AD8;
// extern UNK_TYPE D_00471AE0;
// extern UNK_TYPE D_00471AE8;
// extern UNK_TYPE D_00471AF0;
// extern UNK_TYPE D_00471AF8;
// extern UNK_TYPE D_00471B00;
// extern UNK_TYPE D_00471B10;
// extern UNK_TYPE D_00471B20;
// extern UNK_TYPE D_00471B28;
// extern UNK_TYPE D_00471B38;
// extern UNK_TYPE D_00471B40;
// extern UNK_TYPE D_00471B50;
// extern UNK_TYPE D_00471B58;
// extern UNK_TYPE D_00471B68;
// extern UNK_TYPE D_00471B78;
// extern UNK_TYPE D_00471B88;
// extern UNK_TYPE D_00471B90;
// extern UNK_TYPE D_00471B98;
// extern UNK_TYPE D_00471BA8;
// extern UNK_TYPE D_00471BB8;
// extern UNK_TYPE D_00471BC0;
// extern UNK_TYPE D_00471BC8;
// extern UNK_TYPE D_00471BD0;
// extern UNK_TYPE D_00471C18;
// extern UNK_TYPE D_00471C60;
// extern UNK_TYPE D_00471C68;
// extern UNK_TYPE D_00471C78;
// extern UNK_TYPE D_00471C88;
// extern UNK_TYPE D_00471C98;
// extern UNK_TYPE D_00471CB0;
// extern UNK_TYPE D_00471CC8;
// extern UNK_TYPE _vt$28SoundRenderingPlayerCallback$11radRefCount;
// extern UNK_TYPE _vt$28SoundRenderingPlayerCallback;
// extern UNK_TYPE _vt$12SoundManager$15GameDataHandler;
// extern UNK_TYPE _vt$12SoundManager;
// extern UNK_TYPE _vt$21PositionalSoundPlayer;
// extern UNK_TYPE _vt$15PositionCarrier;
// extern UNK_TYPE _vt$11SoundLoader;
// extern UNK_TYPE _vt$12SoundCluster$11radRefCount;
// extern UNK_TYPE _vt$12SoundCluster;
// extern UNK_TYPE _vt$19SimpsonsSoundPlayer;
// extern UNK_TYPE _vt$8Listener;
// extern UNK_TYPE D_00471EE8;
// extern UNK_TYPE D_00471EF8;
// extern UNK_TYPE D_00471F10;
// extern UNK_TYPE D_00471F20;
// extern UNK_TYPE D_00471F30;
// extern UNK_TYPE D_00471F40;
// extern UNK_TYPE D_00471F58;
// extern UNK_TYPE D_00471F70;
// extern UNK_TYPE D_00471F80;
// extern UNK_TYPE D_00471F90;
// extern UNK_TYPE D_00471FB0;
// extern UNK_TYPE D_00471FC8;
// extern UNK_TYPE _t13_Alloc_traits2ZP18DialogQueueElementZt7s2alloc1ZP18DialogQueueElement$_S_instanceless;
// extern UNK_TYPE _vt$Q25Sound34IDaSoundDynaLoadCompletionCallback;
// extern UNK_TYPE _vt$Q25Sound19IDaSoundPlayerState;
// extern UNK_TYPE D_004720B0;
// extern UNK_TYPE D_004720D0;

// data

// extern UNK_TYPE _19SimpsonsSoundPlayer$s_playersCreated;
// extern UNK_TYPE _19SimpsonsSoundPlayer$s_clipPlayersInUse;
// extern UNK_TYPE _19SimpsonsSoundPlayer$s_streamPlayersInUse;
// extern UNK_TYPE _19SimpsonsSoundPlayer$s_resourceManager;
// extern UNK_TYPE _19SimpsonsSoundPlayer$s_playerManager;
// extern UNK_TYPE _19SimpsonsSoundPlayer$s_soundLoader;
// extern UNK_TYPE D_0042E4D8;
// extern UNK_TYPE D_0042E6A8;
// extern UNK_TYPE D_0042E6C8;
// extern UNK_TYPE D_0042E6E8;
// extern UNK_TYPE _12SoundManager$spInstance;
// extern UNK_TYPE RADSCRIPT_TYPE_INFO_FILE;
// extern UNK_TYPE RADSCRIPT_SCRIPT_FILE;
// extern UNK_TYPE RADMUSIC_SCRIPT_FILE;
// extern UNK_TYPE _t14radLinkedClass1Z28SoundRenderingPlayerCallback$s_pLinkedClassHead;
// extern UNK_TYPE _t14radLinkedClass1Z28SoundRenderingPlayerCallback$s_pLinkedClassTail;

#endif
