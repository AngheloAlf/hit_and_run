#ifndef INCLUDE_ASM_H
#define INCLUDE_ASM_H

#if !defined(SPLAT) && !defined(M2CTX) && !defined(PERMUTER)
#ifndef INCLUDE_ASM
#define INCLUDE_ASM(FOLDER, NAME) \
    __asm__( \
        ".section .text\n" \
        "\t.set noat\n" \
        "\t.set noreorder\n" \
        "\t.align\t3\n" \
        "\t.include \""FOLDER"/"#NAME".s\"\n" \
        "\t.set reorder\n" \
        "\t.set at\n" \
        "\t.globl\t" #NAME ".NON_MATCHING\n" \
        "\t" #NAME ".NON_MATCHING" " = " #NAME "\n" \
    )
#endif
#ifndef INCLUDE_RODATA
#define INCLUDE_RODATA(FOLDER, NAME) \
    __asm__( \
        ".section .rodata\n" \
        "\t.include \""FOLDER"/"#NAME".s\"\n" \
        ".section .text" \
    )
#endif
__asm__(".include \"include/ee_labels.inc\"\n");
#else
#ifndef INCLUDE_ASM
#define INCLUDE_ASM(FOLDER, NAME)
#endif
#ifndef INCLUDE_RODATA
#define INCLUDE_RODATA(FOLDER, NAME)
#endif
#endif

#endif
