#ifndef UNICODE_HPP
#define UNICODE_HPP

typedef unsigned short char16_t;

namespace p3d {
    // void UnicodeStrLen__3p3dPCUs();
    // void UnicodeStrCpy__3p3dPCUsPUsi();
    // void UnicodeStrUpr__3p3dPUs();
    // void UnicodeToAscii__3p3dPCUsPci();
    void AsciiToUnicode(char const *, char16_t *, s32);
};

#endif
