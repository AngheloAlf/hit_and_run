#ifndef IRADDRIVEERRORCALLBACK_HPP
#define IRADDRIVEERRORCALLBACK_HPP

class IRadDriveErrorCallback {
public:
    IRadDriveErrorCallback(void);

    /* vt 0x0C */ virtual ~IRadDriveErrorCallback();
    /* vt 0x14 */ virtual void virtual_14(void);
};

#endif
