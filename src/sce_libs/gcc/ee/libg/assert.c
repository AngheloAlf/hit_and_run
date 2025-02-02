#include "sce_libs/gcc/ee/libg/assert.h"

#include "include_asm.h"

#include "sce_libs/gcc/ee/libg/abort.h"
#include "sce_libs/gcc/ee/libg/fiprintf.h"
#include "sce_libs/gcc/ee/libg/impure.h"

#ifdef NON_MATCHING
// Seems to require an unknown version of a non-SN build of EE GCC.
// https://decomp.me/scratch/obN83
void __assert(const char *filename, int line, const char *expr) {
    fiprintf(_impure_ptr->unk_0C, "assertion \"%s\" failed: file \"%s\", line %d\n", expr, filename, line);
    abort();
}
#else
INCLUDE_ASM("asm/us_2003_07_10/nonmatchings/sce_libs/gcc/ee/libg/assert", __assert);
#endif
