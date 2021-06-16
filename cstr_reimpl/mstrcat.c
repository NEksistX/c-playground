#include "mstring.h"

char *m_strcat(char *dst, const char *src) {
    if (dst == M_NULL || src == M_NULL) {
        return M_NULL;
    }

    const char *psrc = src;
    char *pdst = dst;

    while (*pdst != '\0')
    {
        pdst++;
    }
    
    while (*psrc != '\0')
    {
        *pdst++ = *psrc++;
    }
    *pdst = M_NULL;
    
    return dst;
}