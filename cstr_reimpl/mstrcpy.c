#include "mstring.h"

char *m_strcpy(char *dst, const char *src) {
    if (dst == M_NULL || src == M_NULL) {
        return M_NULL;
    }

    while (src != '\0') {
        *dst++ = *src++;
    }
    *dst = '\0';

    return dst;
}
