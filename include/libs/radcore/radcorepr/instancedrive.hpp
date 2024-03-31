#ifndef INSTANCEDRIVE_HPP
#define INSTANCEDRIVE_HPP

#include "IRadDriveErrorCallback.hpp"
#include "platform.hpp"

//! @GUESS This is here by guessing
class IRadDrive {
private:
    /* vt 0x00C */ virtual void virtual_00C(void);
public:
    /* vt 0x014 */ virtual void virtual_014(void);
private:
    /* vt 0x01C */ virtual void virtual_01C(void);
    /* vt 0x024 */ virtual void virtual_024(void);
    /* vt 0x02C */ virtual void virtual_02C(void);
    /* vt 0x034 */ virtual void virtual_034(void);
    /* vt 0x03C */ virtual void virtual_03C(void);
    /* vt 0x044 */ virtual void virtual_044(void);
    /* vt 0x04C */ virtual void virtual_04C(void);
    /* vt 0x054 */ virtual void virtual_054(void);
    /* vt 0x05C */ virtual void virtual_05C(void);
    /* vt 0x064 */ virtual void virtual_064(void);
    /* vt 0x06C */ virtual void virtual_06C(void);
    /* vt 0x074 */ virtual void virtual_074(void);
    /* vt 0x07C */ virtual void virtual_07C(void);
    /* vt 0x084 */ virtual void virtual_084(void);
    /* vt 0x08C */ virtual void virtual_08C(void);
    /* vt 0x094 */ virtual void virtual_094(void);
    /* vt 0x09C */ virtual void virtual_09C(void);
    /* vt 0x0A4 */ virtual void virtual_0A4(void);
    /* vt 0x0AC */ virtual void virtual_0AC(void);
    /* vt 0x0B4 */ virtual void virtual_0B4(void);
    /* vt 0x0BC */ virtual void virtual_0BC(void);
public:
    /* vt 0x0C4 */ virtual void virtual_0C4(IRadDriveErrorCallback *, s32);
private:
    /* vt 0x0CC */ virtual void virtual_0CC(void);
    /* vt 0x0D4 */ virtual void virtual_0D4(void);
    /* vt 0x0DC */ virtual void virtual_0DC(void);
    /* vt 0x0E4 */ virtual void virtual_0E4(void);
    /* vt 0x0EC */ virtual void virtual_0EC(void);
    /* vt 0x0F4 */ virtual void virtual_0F4(void);
    /* vt 0x0FC */ virtual void virtual_0FC(void);
    /* vt 0x104 */ virtual void virtual_104(void);
    /* vt 0x10C */ virtual void virtual_10C(void);
    /* vt 0x114 */ virtual void virtual_114(void);
    /* vt 0x11C */ virtual void virtual_11C(void);
    /* vt 0x124 */ virtual void virtual_124(void);
    /* vt 0x12C */ virtual void virtual_12C(void);
    /* vt 0x134 */ virtual void virtual_134(void);
    /* vt 0x13C */ virtual void virtual_13C(void);
    /* vt 0x144 */ virtual void virtual_144(void);
    /* vt 0x14C */ virtual void virtual_14C(void);
    /* vt 0x154 */ virtual void virtual_154(void);
};

// text

// void radDrivePoolInitialize__FUii();
// void radDrivePoolTerminate__Fv();
// void __nw__16radInstanceDriveUi();
// void __dl__16radInstanceDrivePv();
// void __16radInstanceDriveP8radDrive15radFilePriority();
// void _$_16radInstanceDrive();
// void AddRef__16radInstanceDrive();
// void Release__16radInstanceDrive();
// void Lock__16radInstanceDrive();
// void Unlock__16radInstanceDrive();
// void GetCapabilities__16radInstanceDrive();
// void GetMediaInfoAsync__16radInstanceDrivePQ29IRadDrive9MediaInfo();
// void FormatAsync__16radInstanceDrive();
// void CreateDirectoryAsync__16radInstanceDrivePCc();
// void DestroyDirectoryAsync__16radInstanceDrivePCc();
// void FindFirstAsync__16radInstanceDrivePCcPQ29IRadDrive13DirectoryInfo();
// void FindNextAsync__16radInstanceDrivePQ29IRadDrive13DirectoryInfo();
// void DestroyFileAsync__16radInstanceDrivePCcb();
// void GetMediaInfoSync__16radInstanceDrivePQ29IRadDrive9MediaInfo();
// void FormatSync__16radInstanceDrive();
// void CreateDirectorySync__16radInstanceDrivePCc();
// void DestroyDirectorySync__16radInstanceDrivePCc();
// void FindFirstSync__16radInstanceDrivePCcPQ29IRadDrive13DirectoryInfo();
// void FindNextSync__16radInstanceDrivePQ29IRadDrive13DirectoryInfo();
// void DestroyFileSync__16radInstanceDrivePCcb();
// void CancelAsync__16radInstanceDrive();
// void AddCompletionCallback__16radInstanceDriveP27IRadDriveCompletionCallbackPv();
// void AddCompletionEvent__16radInstanceDriveP19IRadThreadSemaphore();
// void CheckForCompletion__16radInstanceDrive();
// void WaitForCompletion__16radInstanceDrive();
// void GetLastError__16radInstanceDrive();
// void RegisterErrorHandler__16radInstanceDriveP22IRadDriveErrorCallbackPv();
// void UnregisterErrorHandler__16radInstanceDriveP22IRadDriveErrorCallback();
// void RegisterErrorEvent__16radInstanceDriveP19IRadThreadSemaphore();
// void UnregisterErrorEvent__16radInstanceDriveP19IRadThreadSemaphore();
// void CheckForErrorState__16radInstanceDrive();
// void ResumeRequest__16radInstanceDriveb();
// void SetDefaultErrorBehaviour__16radInstanceDriveQ29IRadDrive14ErrorBehaviour();
// void SetErrorClearReporting__16radInstanceDriveb();
// void SetReadWriteGranularity__16radInstanceDriveUi();
// void GetReadWriteGranularity__16radInstanceDrive();
// void FileOpenAsync__16radInstanceDrivePP8IRadFilePCcb16radFileOpenFlags15radFilePriorityUii14radMemorySpace();
// void FileOpenSync__16radInstanceDrivePP8IRadFilePCcb16radFileOpenFlags15radFilePriorityUii14radMemorySpace();
// void SaveGameOpenAsync__16radInstanceDrivePP8IRadFilePCcb16radFileOpenFlagsP14radMemcardInfoUiT315radFilePriority();
// void SaveGameOpenSync__16radInstanceDrivePP8IRadFilePCcb16radFileOpenFlagsP14radMemcardInfoUiT315radFilePriority();
// void SetPriority__16radInstanceDrive15radFilePriority();
// void GetPriority__16radInstanceDrive();
// void GetDriveName__16radInstanceDrive();
// void GetCreationSize__16radInstanceDriveP14radMemcardInfoUi();
// void __tf16radInstanceDrive();
// void __9IRadDrive();
// void func_003E7298();
// void FileOpen__16radInstanceDrivePP8IRadFilePCcb16radFileOpenFlags15radFilePriorityUii14radMemorySpace();
// void __tf9IRadDrive();
// void func_003E7330();

// rodata

// extern UNK_TYPE D_004AA628;
// extern UNK_TYPE _vt$16radInstanceDrive$11IRadMutable;
// extern UNK_TYPE _vt$16radInstanceDrive;
// extern UNK_TYPE D_004AA7C0;
// extern UNK_TYPE D_004AA7D8;
// extern UNK_TYPE _vt$9IRadDrive;
// extern UNK_TYPE D_004AA968;

// data

// extern UNK_TYPE D_0043E218;
// extern UNK_TYPE D_0043E21C;

#endif
