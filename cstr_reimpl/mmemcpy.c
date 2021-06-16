#include "mstring.h"

void *m_memcpy(void *dst, const void *src, m_size_t n) {
    if (dst == M_NULL || src == M_NULL || n <= 0) {
        return M_NULL;
    }

    char *byte_dst = (char *)dst;
    const char *byte_src = (const char *)src;

    while (n--) {
        *byte_dst++ = *byte_src++;
    }

    return dst;
}
