#ifndef GARBAGE_HELPER_H
#define GARBAGE_HELPER_H

#define GARBAGE_INSTR(instr) \
    __asm__(".align 3;"); \
    __asm__(instr)

#endif
