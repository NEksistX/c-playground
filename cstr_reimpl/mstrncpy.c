#include "mstring.h"

char *m_strncpy(char *dst, const char *src, m_size_t n) {
    if (dst == M_NULL || src == M_NULL || n <= 0) {
        return M_NULL;
    }

    while (n--) {
        *dst++ = *src++;
    }
    *dst = '\0';

    return dst;
}
