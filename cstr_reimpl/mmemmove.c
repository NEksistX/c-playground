#include "mstring.h"

void *m_memmove(void *dst, const void *src, m_size_t n) {
    if (dst == M_NULL || src == M_NULL || n <= 0) {
        return M_NULL;
    }

    char *byte_dst = (char *)dst;
    const char *byte_src = (const char *)src;

    // deal with overlapping
    if (byte_dst > byte_src && byte_dst < byte_src + n) {
        byte_dst += n - 1;
        byte_src += n - 1;
        while (n--) {
            *byte_dst-- = *byte_src--;
        }
    }

    while (n--) {
        *byte_dst++ = *byte_src++;
    }

    return dst;
}
