#include "mstring.h"

char *m_strncat(char *dst, const char *src, m_size_t n){
    if (dst == M_NULL || src == M_NULL || n <= 0) {
        return M_NULL;
    }

    const char *psrc = src;
    char *pdst = dst;

    while (*pdst != '\0')
    {
        pdst++;
    }
    
    while (n--)
    {
        *pdst++ = *psrc++;
    }
    *pdst = M_NULL;
    
    return dst;
}
