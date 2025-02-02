#ifndef ASSERT_HPP
#define ASSERT_HPP

// text

// void __assert();

// rodata

#ifdef __cplusplus
extern "C" {
#endif

void __assert(const char *filename, int, const char *expr);

#ifdef __cplusplus
}
#endif

// extern UNK_TYPE D_004AC370;

#endif
