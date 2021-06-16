#include "mstring.h"

int m_strcmp(const char *str1, const char *str2){
    if (str1 == M_NULL || str1 == M_NULL) {
        return M_NULL;
    }

    const char *pstr1 = str1;
    const char *pstr2 = str1;

    while (*pstr1 != '\0' && *pstr2 != '\0')
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