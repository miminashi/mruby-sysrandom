#ifndef MRUBY_SYSRANDOM_H
#define MRUBY_SYSRANDOM_H

#ifdef __cplusplus
extern "C" {
#endif

#include <mruby.h>

MRB_API uint32_t mrb_sysrandom(void);
MRB_API void mrb_sysrandom_buf(void * const buf, const size_t size);
MRB_API uint32_t mrb_sysrandom_uniform(const uint32_t upper_bound);
MRB_API char * mrb_sysrandom_bin2hex(char * const hex, const size_t hex_maxlen,
               const unsigned char * const bin, const size_t bin_len);

#ifdef __cplusplus
}
#endif

#endif
