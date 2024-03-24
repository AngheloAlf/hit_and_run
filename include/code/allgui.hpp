#ifndef ALLGUI_HPP
#define ALLGUI_HPP

// text

// void __10CGuiEntityP10CGuiEntity();
// void _$_10CGuiEntity();
// void __11CGuiManagerPQ27Scrooby7ProjectP10CGuiEntity();
// void _$_11CGuiManager();
// void HandleMessage__11CGuiManager11eGuiMessageUiUi();
// void OnGotoScreenComplete__11CGuiManager();
// void FindWindowByID__11CGuiManagerQ210CGuiWindow12eGuiWindowID();
// void GetCurrentWindow__11CGuiManager();
// void DisplayMessage__11CGuiManageriP10CGuiEntity();
// void DisplayPrompt__11CGuiManageriP10CGuiEntity18eGenericPromptTypeb();
// void DisplayErrorPrompt__11CGuiManageriP10CGuiEntityi();
// void GetPreviousScreen__C11CGuiManageri();
// void GetCurrentScreen__C11CGuiManager();
// void AddWindow__11CGuiManagerQ210CGuiWindow12eGuiWindowIDP10CGuiWindow();
// void func_001A5058();
// void RemoveAllWindows__11CGuiManager();
// void PushScreenHistory__11CGuiManagerQ210CGuiWindow12eGuiWindowID();
// void PopScreenHistory__11CGuiManager();
// void __8CGuiMenuP10CGuiEntityi9eMenuTypei();
// void _$_8CGuiMenu();
// void HandleMessage__8CGuiMenu11eGuiMessageUiUi();
// void AddMenuItem__8CGuiMenuPQ27Scrooby15BoundedDrawableT1PQ27Scrooby7PolygonPQ27Scrooby6SpriteN24i();
// void SetMenuItemEnabled__8CGuiMenuibT2();
// void func_001A5888();
// void Reset__8CGuiMenui();
// void SetHighlightColour__8CGuiMenubG10pddiColour();
// void SetSelectionValue__8CGuiMenuii();
// void SetSelectionValueCount__8CGuiMenuii();
// void MakeSelection__8CGuiMenub();
// void SelectItem__8CGuiMenui();
// void UnselectItem__8CGuiMenui();
// void ChangeSelection__8CGuiMenuib();
// void IncrementSelectionValue__8CGuiMenub();
// void DecrementSelectionValue__8CGuiMenub();
// void UpdateCurrentSelection__8CGuiMenui();
// void MoveCursor__8CGuiMenuii();
// void __10CGuiMenu2DP10CGuiEntityii9eMenuTypei();
// void _$_10CGuiMenu2D();
// void HandleMessage__10CGuiMenu2D11eGuiMessageUiUi();
// void __14CGuiMenuPromptP10CGuiEntityPQ27Scrooby4Pageii();
// void _$_14CGuiMenuPrompt();
// void SetNumResponses__14CGuiMenuPrompti();
// void SetResponse__14CGuiMenuPromptiQ214CGuiMenuPrompt15ePromptResponse();
// void GetResponse__C14CGuiMenuPrompti();
// void func_001A6F20();
// void __11GuiMenuItem();
// void _$_11GuiMenuItem();
// void __15GuiMenuItemText();
// void SetItem__15GuiMenuItemTextPQ27Scrooby15BoundedDrawable();
// void SetItemValue__15GuiMenuItemTextPQ27Scrooby15BoundedDrawable();
// void SetItemValueIndex__15GuiMenuItemTexti();
// void GetItemValueIndex__C15GuiMenuItemText();
// void SetDisplayOutline__15GuiMenuItemTextb();
// void SetOutlineColour__15GuiMenuItemTextG10pddiColour();
// void GetOutlineColour__C15GuiMenuItemText();
// void __17GuiMenuItemSprite();
// void SetItem__17GuiMenuItemSpritePQ27Scrooby15BoundedDrawable();
// void SetItemValue__17GuiMenuItemSpritePQ27Scrooby15BoundedDrawable();
// void SetItemValueIndex__17GuiMenuItemSpritei();
// void GetItemValueIndex__C17GuiMenuItemSprite();
// void SetDisplayOutline__17GuiMenuItemSpriteb();
// void SetOutlineColour__17GuiMenuItemSpriteG10pddiColour();
// void GetOutlineColour__C17GuiMenuItemSprite();
// void __10CGuiScreenPQ27Scrooby6ScreenP10CGuiEntityQ210CGuiWindow12eGuiWindowIDUi();
// void _$_10CGuiScreen();
// void HandleMessage__10CGuiScreen11eGuiMessageUiUi();
// void SetFadingEnabled__10CGuiScreenb();
// void SetZoomingEnabled__10CGuiScreenb();
// void SetSlidingEnabled__10CGuiScreen13eScreenEffectb();
// void SetIrisWipeEnabled__10CGuiScreenbT1();
// void Reset3dFEMultiController__10CGuiScreen();
// void SetButtonVisible__10CGuiScreen11eButtonIconb();
// void IsButtonVisible__C10CGuiScreen11eButtonIcon();
// void StartTransitionAnimation__10CGuiScreeniib();
// void ReloadScreen__10CGuiScreen();
// void RestoreScreenCover__10CGuiScreen();
// void RestoreButtons__10CGuiScreen();
// void IsWideScreenDisplay__10CGuiScreen();
// void ApplyWideScreenCorrectionScale__10CGuiScreenPQ27Scrooby8Drawable();
// void RestoreDefaultFadeTime__10CGuiScreen();
// void IrisWipeOpen__10CGuiScreen();
// void SetAlphaForLayers__10CGuiScreenfPPQ27Scrooby5Layeri();
// void AutoScaleFrame__10CGuiScreenPQ27Scrooby4Page();
// void FadeIn__10CGuiScreenf();
// void FadeOut__10CGuiScreenf();
// void ZoomIn__10CGuiScreenf();
// void ZoomOut__10CGuiScreenf();
// void SlideIn__10CGuiScreenf();
// void SlideOut__10CGuiScreenf();
// void OnIrisWipeClosed__10CGuiScreen();
// void __22CGuiScreenMemCardCheckPQ27Scrooby6ScreenP10CGuiEntity();
// void _$_22CGuiScreenMemCardCheck();
// void HandleMessage__22CGuiScreenMemCardCheck11eGuiMessageUiUi();
// void OnFormatOperationComplete__22CGuiScreenMemCardCheck12radFileError();
// void OnMemoryCardCheckDone__22CGuiScreenMemCardCheck12radFileErrorQ39IRadDrive9MediaInfo10MediaStateiii();
// void InitIntro__22CGuiScreenMemCardCheck();
// void InitRunning__22CGuiScreenMemCardCheck();
// void InitOutro__22CGuiScreenMemCardCheck();
// void OnContinue__22CGuiScreenMemCardCheck();
// void __18CGuiScreenLoadSavePQ27Scrooby6Screen();
// void _$_18CGuiScreenLoadSave();
// void HandleMessage__18CGuiScreenLoadSave11eGuiMessageUiUi();
// void FormatCurrentDrive__18CGuiScreenLoadSave();
// void OnFormatOperationComplete__18CGuiScreenLoadSave12radFileError();
// void UpdateCurrentMemoryDevice__18CGuiScreenLoadSave();
// void HandleErrorResponse__18CGuiScreenLoadSaveQ214CGuiMenuPrompt15ePromptResponse();
// void __20CGuiScreenMemoryCardPQ27Scrooby6ScreenP10CGuiEntity();
// void _$_20CGuiScreenMemoryCard();
// void HandleMessage__20CGuiScreenMemoryCard11eGuiMessageUiUi();
// void InitIntro__20CGuiScreenMemoryCard();
// void InitRunning__20CGuiScreenMemoryCard();
// void InitOutro__20CGuiScreenMemoryCard();
// void UpdateDeviceList__20CGuiScreenMemoryCardb();
// void UpdateFreeSpace__20CGuiScreenMemoryCardUi();
// void __17CGuiScreenMessagePQ27Scrooby6ScreenP10CGuiEntity();
// void _$_17CGuiScreenMessage();
// void HandleMessage__17CGuiScreenMessage11eGuiMessageUiUi();
// void Display__17CGuiScreenMessageiP10CGuiEntity();
// void GetControllerDisconnectedMessage__17CGuiScreenMessageiPci();
// void ConvertUnicodeToChar__17CGuiScreenMessagePcPUsi();
// void FormatMessage__17CGuiScreenMessagePQ27Scrooby4TextPUsi();
// void InitIntro__17CGuiScreenMessage();
// void InitRunning__17CGuiScreenMessage();
// void InitOutro__17CGuiScreenMessage();
// void __16CGuiScreenPromptPQ27Scrooby6ScreenP10CGuiEntityQ210CGuiWindow12eGuiWindowID();
// void _$_16CGuiScreenPrompt();
// void HandleMessage__16CGuiScreenPrompt11eGuiMessageUiUi();
// void Display__16CGuiScreenPromptiP10CGuiEntityiPQ214CGuiMenuPrompt15ePromptResponse();
// void InitIntro__16CGuiScreenPrompt();
// void InitRunning__16CGuiScreenPrompt();
// void InitOutro__16CGuiScreenPrompt();
// void CreateInstance__10CGuiSystem();
// void DestroyInstance__10CGuiSystem();
// void GetInstance__10CGuiSystem();
// void __10CGuiSystem();
// void _$_10CGuiSystem();
// void Init__10CGuiSystem();
// void Update__10CGuiSystemUi();
// void HandleMessage__10CGuiSystem11eGuiMessageUiUi();
// void OnProjectLoadComplete__10CGuiSystemPQ27Scrooby7Project();
// void GotoScreen__10CGuiSystemUiUiUiUi();
// void GetCurrentManager__C10CGuiSystem();
// void RegisterUserInputHandlers__10CGuiSystemi();
// void UnregisterUserInputHandlers__10CGuiSystemi();
// void GetUserInputHandler__C10CGuiSystemi();
// void LoadData__10CGuiSystemPCUcUi();
// void SaveData__10CGuiSystemPUcUi();
// void ResetData__10CGuiSystem();
// void OnInitBootUp__10CGuiSystem();
// void OnReleaseBootUp__10CGuiSystem();
// void OnInitFrontEnd__10CGuiSystem();
// void OnReleaseFrontEnd__10CGuiSystem();
// void OnInitMiniGame__10CGuiSystem();
// void OnReleaseMiniGame__10CGuiSystem();
// void OnInitInGame__10CGuiSystem();
// void OnReleaseInGame__10CGuiSystem();
// void GetPrimaryController__C10CGuiSystem();
// void SetPrimaryController__10CGuiSystemi();
// void __13CGuiTextBible();
// void _$_13CGuiTextBible();
// void SetTextBible__13CGuiTextBiblePCc();
// void GetLocalizedText__13CGuiTextBiblePCc();
// void SetCurrentLanguage__13CGuiTextBibleQ27Scrooby10XLLanguage();
// void func_001ADA28();
// void __20CGuiUserInputHandler();
// void _$_20CGuiUserInputHandler();
// void Left__20CGuiUserInputHandleri();
// void Right__20CGuiUserInputHandleri();
// void Up__20CGuiUserInputHandleri();
// void Down__20CGuiUserInputHandleri();
// void Start__20CGuiUserInputHandleri();
// void Select__20CGuiUserInputHandleri();
// void Back__20CGuiUserInputHandleri();
// void AuxX__20CGuiUserInputHandleri();
// void AuxY__20CGuiUserInputHandleri();
// void L1__20CGuiUserInputHandleri();
// void R1__20CGuiUserInputHandleri();
// void OnControllerDisconnect__20CGuiUserInputHandleri();
// void OnControllerConnect__20CGuiUserInputHandleri();
// void OnButton__20CGuiUserInputHandleriiPC6Button();
// void OnButtonUp__20CGuiUserInputHandleriiPC6Button();
// void OnButtonDown__20CGuiUserInputHandleriiPC6Button();
// void LoadControllerMappings__20CGuiUserInputHandlerUi();
// void Update__20CGuiUserInputHandlerUiUi();
// void IsXAxisOnLeft__C20CGuiUserInputHandler();
// void IsXAxisOnRight__C20CGuiUserInputHandler();
// void IsYAxisOnUp__C20CGuiUserInputHandler();
// void IsYAxisOnDown__C20CGuiUserInputHandler();
// void ResetRepeatableButtons__20CGuiUserInputHandler();
// void __10CGuiWindowQ210CGuiWindow12eGuiWindowIDP10CGuiEntity();
// void _$_10CGuiWindow();
// void HandleMessage__10CGuiWindow11eGuiMessageUiUi();
// void CleanUp__10CGuiWindow();
// void ForceClearTransitions__10CGuiWindow();
// void func_001AE808();
// void __tf10CGuiEntity();
// void __tf14IRadMemoryHeap();
// void __tfQ27Scrooby15BoundedDrawable();
// void __tfQ27Scrooby4Text();
// void __tfQ27Scrooby6Sprite();
// void __tf11GuiMenuItem();
// void _$_15GuiMenuItemText();
// void __tf15GuiMenuItemText();
// void _$_17GuiMenuItemSprite();
// void __tf17GuiMenuItemSprite();
// void __tf8CGuiMenu();
// void __tf10CGuiMenu2D();
// void __tf14CGuiMenuPrompt();
// void __tf10CGuiWindow();
// void __tfQ27Scrooby18GotoScreenCallback();
// void __tf11CGuiManager();
// void __tf10CGuiSystem();
// void __tf10CGuiScreen();
// void __tf17CGuiScreenMessage();
// void __tf16CGuiScreenPrompt();
// void __tf20CGuiUserInputHandler();
// void __tf22CGuiScreenMemCardCheck();
// void __tf18CGuiScreenLoadSave();
// void __tf20CGuiScreenMemoryCard();
// void __tf13CGuiTextBible();
// void func_001AF070();
// void GetItem__C15GuiMenuItemText();
// void GetItemValue__C15GuiMenuItemText();
// void GetItem__C17GuiMenuItemSprite();
// void GetItemValue__C17GuiMenuItemSprite();
// void func_001AF0D8();
// void HasMenu__10CGuiWindow();
// void HandleEvent__11CGuiManager9EventEnumPv();
// void func_001AF100();
// void HasMenu__10CGuiScreen();
// void func_001AF120();
// void HasMenu__17CGuiScreenMessage();
// void HasMenu__16CGuiScreenPrompt();
// void func_001AF140();
// void __25IMemoryCardFormatCallback();
// void __24IMemoryCardCheckCallback();
// void HasMenu__20CGuiScreenMemoryCard();
// void func_001AF190();
// void __tfQ27Scrooby14HasBoundingBox();
// void func_001AF1F0();
// void __tf25IMemoryCardFormatCallback();
// void __tf24IMemoryCardCheckCallback();
// void func_001AF298();
// void __tfQ27Scrooby8Drawable();
// void func_001AF2F0();
// void _GLOBAL_$I$__10CGuiEntityP10CGuiEntity();

// bss

// extern UNK_TYPE D_004B1BB0;
// extern UNK_TYPE D_004B1BB8;
// extern UNK_TYPE D_004B1BC0;
// extern UNK_TYPE D_004B1BC8;
// extern UNK_TYPE D_004B1BD0;

// rodata

// extern UNK_TYPE D_00464290;
// extern UNK_TYPE D_004642A0;
// extern UNK_TYPE D_004642B0;
// extern UNK_TYPE D_004642C0;
// extern UNK_TYPE D_004642D0;
// extern UNK_TYPE D_004642E0;
// extern UNK_TYPE D_004642F0;
// extern UNK_TYPE D_00464318;
// extern UNK_TYPE jtbl_00464320;
// extern UNK_TYPE D_00464338;
// extern UNK_TYPE jtbl_00464350;
// extern UNK_TYPE D_00464380;
// extern UNK_TYPE D_00464388;
// extern UNK_TYPE D_00464398;
// extern UNK_TYPE D_004643A0;
// extern UNK_TYPE D_004643B0;
// extern UNK_TYPE D_004643C0;
// extern UNK_TYPE D_004643D0;
// extern UNK_TYPE D_004643D8;
// extern UNK_TYPE D_004643E0;
// extern UNK_TYPE D_004643E8;
// extern UNK_TYPE D_004643F0;
// extern UNK_TYPE D_00464400;
// extern UNK_TYPE D_00464408;
// extern UNK_TYPE D_00464410;
// extern UNK_TYPE D_00464418;
// extern UNK_TYPE D_00464420;
// extern UNK_TYPE D_00464430;
// extern UNK_TYPE D_00464438;
// extern UNK_TYPE D_00464440;
// extern UNK_TYPE D_00464450;
// extern UNK_TYPE D_00464460;
// extern UNK_TYPE D_00464470;
// extern UNK_TYPE D_00464480;
// extern UNK_TYPE D_00464488;
// extern UNK_TYPE D_00464490;
// extern UNK_TYPE D_004644A0;
// extern UNK_TYPE D_004644B0;
// extern UNK_TYPE D_004644C0;
// extern UNK_TYPE D_004644D0;
// extern UNK_TYPE D_004644E0;
// extern UNK_TYPE jtbl_00464500;
// extern UNK_TYPE jtbl_00464530;
// extern UNK_TYPE D_00464558;
// extern UNK_TYPE D_00464570;
// extern UNK_TYPE D_00464580;
// extern UNK_TYPE D_00464598;
// extern UNK_TYPE D_004645A8;
// extern UNK_TYPE D_004645B8;
// extern UNK_TYPE D_004645C8;
// extern UNK_TYPE D_004645D0;
// extern UNK_TYPE D_004645E0;
// extern UNK_TYPE D_004645F0;
// extern UNK_TYPE D_004645F8;
// extern UNK_TYPE D_00464600;
// extern UNK_TYPE D_00464610;
// extern UNK_TYPE D_00464618;
// extern UNK_TYPE D_00464628;
// extern UNK_TYPE D_00464638;
// extern UNK_TYPE D_00464660;
// extern UNK_TYPE D_00464688;
// extern UNK_TYPE D_004646C8;
// extern UNK_TYPE D_004646D0;
// extern UNK_TYPE D_004646E0;
// extern UNK_TYPE D_004646F0;
// extern UNK_TYPE D_00464700;
// extern UNK_TYPE D_00464708;
// extern UNK_TYPE D_00464730;
// extern UNK_TYPE D_00464750;
// extern UNK_TYPE D_00464778;
// extern UNK_TYPE D_004647A0;
// extern UNK_TYPE D_004647C8;
// extern UNK_TYPE D_004647E8;
// extern UNK_TYPE D_00464810;
// extern UNK_TYPE D_00464838;
// extern UNK_TYPE D_00464860;
// extern UNK_TYPE D_00464888;
// extern UNK_TYPE D_004648B0;
// extern UNK_TYPE D_004648D8;
// extern UNK_TYPE D_00464900;
// extern UNK_TYPE D_00464908;
// extern UNK_TYPE jtbl_00464920;
// extern UNK_TYPE jtbl_004649B0;
// extern UNK_TYPE jtbl_004649E0;
// extern UNK_TYPE D_00464A18;
// extern UNK_TYPE jtbl_00464AC0;
// extern UNK_TYPE jtbl_00464B00;
// extern UNK_TYPE _vt$13CGuiTextBible;
// extern UNK_TYPE _vt$20CGuiScreenMemoryCard;
// extern UNK_TYPE _vt$18CGuiScreenLoadSave;
// extern UNK_TYPE _vt$22CGuiScreenMemCardCheck$25IMemoryCardFormatCallback;
// extern UNK_TYPE _vt$22CGuiScreenMemCardCheck$24IMemoryCardCheckCallback;
// extern UNK_TYPE _vt$22CGuiScreenMemCardCheck;
// extern UNK_TYPE _vt$20CGuiUserInputHandler;
// extern UNK_TYPE _vt$16CGuiScreenPrompt;
// extern UNK_TYPE _vt$17CGuiScreenMessage;
// extern UNK_TYPE _vt$10CGuiScreen;
// extern UNK_TYPE _vt$10CGuiSystem$15GameDataHandler;
// extern UNK_TYPE _vt$10CGuiSystem$Q27Scrooby19LoadProjectCallback;
// extern UNK_TYPE _vt$10CGuiSystem;
// extern UNK_TYPE _vt$11CGuiManager$13EventListener;
// extern UNK_TYPE _vt$11CGuiManager$Q27Scrooby18GotoScreenCallback;
// extern UNK_TYPE _vt$11CGuiManager;
// extern UNK_TYPE _vt$Q27Scrooby18GotoScreenCallback;
// extern UNK_TYPE _vt$10CGuiWindow;
// extern UNK_TYPE _vt$14CGuiMenuPrompt;
// extern UNK_TYPE _vt$10CGuiMenu2D;
// extern UNK_TYPE _vt$8CGuiMenu;
// extern UNK_TYPE _vt$17GuiMenuItemSprite;
// extern UNK_TYPE _vt$15GuiMenuItemText;
// extern UNK_TYPE _vt$11GuiMenuItem;
// extern UNK_TYPE _vt$10CGuiEntity;
// extern UNK_TYPE D_00465060;
// extern UNK_TYPE D_00465070;
// extern UNK_TYPE D_00465088;
// extern UNK_TYPE D_004650A8;
// extern UNK_TYPE D_004650B0;
// extern UNK_TYPE D_004650C0;
// extern UNK_TYPE D_004650C8;
// extern UNK_TYPE D_004650E0;
// extern UNK_TYPE D_004650F0;
// extern UNK_TYPE D_00465108;
// extern UNK_TYPE D_00465120;
// extern UNK_TYPE D_00465130;
// extern UNK_TYPE D_00465140;
// extern UNK_TYPE D_00465158;
// extern UNK_TYPE D_00465168;
// extern UNK_TYPE D_00465188;
// extern UNK_TYPE D_00465198;
// extern UNK_TYPE D_004651B0;
// extern UNK_TYPE D_004651C0;
// extern UNK_TYPE D_004651D8;
// extern UNK_TYPE D_004651E8;
// extern UNK_TYPE D_00465200;
// extern UNK_TYPE D_00465218;
// extern UNK_TYPE D_00465230;
// extern UNK_TYPE D_00465250;
// extern UNK_TYPE D_00465268;
// extern UNK_TYPE D_00465280;
// extern UNK_TYPE D_00465298;
// extern UNK_TYPE D_00465390;
// extern UNK_TYPE _t13_Alloc_traits2ZQ210CGuiWindow12eGuiWindowIDZt7s2alloc1ZQ210CGuiWindow12eGuiWindowID$_S_instanceless;
// extern UNK_TYPE _vt$24IMemoryCardCheckCallback;
// extern UNK_TYPE _vt$25IMemoryCardFormatCallback;
// extern UNK_TYPE D_004654E0;
// extern UNK_TYPE D_00465500;
// extern UNK_TYPE D_00465578;
// extern UNK_TYPE D_00465598;
// extern UNK_TYPE D_004655D0;

// data

// extern UNK_TYPE D_0042CE20;
// extern UNK_TYPE D_0042CE24;
// extern UNK_TYPE D_0042CE28;
// extern UNK_TYPE D_0042CE2C;
// extern UNK_TYPE D_0042CE30;
// extern UNK_TYPE D_0042CE34;
// extern UNK_TYPE D_0042CE38;
// extern UNK_TYPE _11CGuiManager$s_memcardCheckState;
// extern UNK_TYPE D_0042CE40;
// extern UNK_TYPE FOREGROUND_LAYER;
// extern UNK_TYPE BACKGROUND_LAYER;
// extern UNK_TYPE FE_PURE3D_OBJECT;
// extern UNK_TYPE ACCEPT_PAGES;
// extern UNK_TYPE BACK_PAGES;
// extern UNK_TYPE _10CGuiScreen$s_p3dMultiController;
// extern UNK_TYPE _10CGuiScreen$s_numIrisFrames;
// extern UNK_TYPE _18CGuiScreenLoadSave$s_forceGotoMemoryCardScreen;
// extern UNK_TYPE D_0042CE81;
// extern UNK_TYPE _20CGuiScreenMemoryCard$s_currentMemoryCardSlot;
// extern UNK_TYPE _17CGuiScreenMessage$s_ControllerDisconnectedPort;
// extern UNK_TYPE _17CGuiScreenMessage$s_messageIndex;
// extern UNK_TYPE _17CGuiScreenMessage$s_pMessageCallback;
// extern UNK_TYPE _16CGuiScreenPrompt$s_messageIndex;
// extern UNK_TYPE _16CGuiScreenPrompt$s_numResponses;
// extern UNK_TYPE _16CGuiScreenPrompt$s_pPromptCallback;
// extern UNK_TYPE _16CGuiScreenPrompt$s_defaultToNo;
// extern UNK_TYPE D_0042CEA1;
// extern UNK_TYPE _10CGuiSystem$spInstance;
// extern UNK_TYPE g_scroobySimulationTime;
// extern UNK_TYPE PROJECT_FILE_LANGUAGE;
// extern UNK_TYPE PROJECT_FILE_BOOTUP;
// extern UNK_TYPE PROJECT_FILE_BACKEND;
// extern UNK_TYPE PROJECT_FILE_FRONTEND;
// extern UNK_TYPE PROJECT_FILE_MINIGAME;
// extern UNK_TYPE PROJECT_FILE_INGAME;
// extern UNK_TYPE D_0042CEC4;
// extern UNK_TYPE INGAME_LEVEL_PROJECT_FILES;
// extern UNK_TYPE TEXT_BIBLE_NAME;
// extern UNK_TYPE _13CGuiTextBible$s_textBible;
// extern UNK_TYPE _13CGuiTextBible$s_currentLanguage;

#endif