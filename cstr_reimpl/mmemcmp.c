#include "mstring.h"

int m_memcmp(const void *ptr1, const void *ptr2, m_size_t n){
    if (ptr1 == M_NULL || ptr2 == M_NULL || n <= 0) {
        return M_NULL;
    }
    
    const unsigned char *ubyte_ptr1 = (const unsigned char *)ptr1;
    const unsigned char *ubyte_ptr2 = (const unsigned char *)ptr2;

    while (n--)
    {
        if(*ubyte_ptr1 > *ubyte_ptr2) {
            return 1;
        } else if (*ubyte_ptr1 < *ubyte_ptr2)
        {
            return -1;
        } else {
            ubyte_ptr1++;
            ubyte_ptr2++;
        }
    }
    return 0;
}