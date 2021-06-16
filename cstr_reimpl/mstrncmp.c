#include "mstring.h"

int m_strncmp(const char *str1, const char *str2, m_size_t n){
    if (str1 == M_NULL || str1 == M_NULL || n <= 0) {
        return M_NULL;
    }

    const char *pstr1 = str1;
    const char *pstr2 = str1;

    while (n--)
    {
        if(*pstr1 > *pstr2) {
            return 1;
        } else if (*pstr1 < *pstr2)
        {
            return -1;
        } else {
            pstr1++;
            pstr2++;
        }
    }
    return 0;
}