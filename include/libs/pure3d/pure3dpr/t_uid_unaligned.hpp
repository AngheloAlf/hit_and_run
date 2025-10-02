#ifndef T_UID_UNALIGNED_HPP
#define T_UID_UNALIGNED_HPP

#include "types.h"

// Private?
// Completely made up
class tUidUnaligned_aux {
    union {
        s32 si[2];
        u64 ul;
    } u;

public:
    tUidUnaligned_aux(s32 a1, s32 a2) {
        this->u.si[0] = a1;
        this->u.si[1] = a2;
    }

    tUidUnaligned_aux(u64 a1) {
        this->u.ul = a1;
    }

    s32 get_word0(void) const {
        return this->u.si[0];
    }

    s32 get_word1(void) const {
        return this->u.si[1];
    }

    bool operator<(tUidUnaligned_aux &other) const {
        return this->u.ul < other.u.ul;
    }

    tUidUnaligned_aux operator^(tUidUnaligned_aux &other) const {
        return tUidUnaligned_aux(this->u.ul ^ other.u.ul);
    }

    // wrong?
    tUidUnaligned_aux operator*(u64 other) const {
        return tUidUnaligned_aux(this->u.ul * other);
    }

    tUidUnaligned_aux operator>>(s32 other) const {
        return tUidUnaligned_aux(this->u.ul >> other);
    }
};


class tUidUnaligned {
private:
    /* 0x00 */ s32 unk_00;
    /* 0x04 */ s32 unk_04;
    /* size >= 0x08 */

private:
    tUidUnaligned(void);
    tUidUnaligned(tUidUnaligned const &);

    tUidUnaligned(s32 a1, s32 a2) {
        this->unk_00 = a1;
        this->unk_04 = a2;
    }

    tUidUnaligned &operator=(const tUidUnaligned &other) {
        this->unk_00 = other.unk_00;
        this->unk_04 = other.unk_04;
        return *this;
    }

    bool operator!=(tUidUnaligned) const;
    bool operator==(tUidUnaligned) const;
    bool operator<(tUidUnaligned) const;
    tUidUnaligned operator^(tUidUnaligned arg1) const;
    tUidUnaligned operator*=(u64);
    tUidUnaligned operator&(tUidUnaligned) const;
    tUidUnaligned operator>>(s32) const;
};


#endif
