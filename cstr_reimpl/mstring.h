#ifndef __MSTRING_H
#define __MSTRING_H

#define M_NULL ((void *)0)

typedef unsigned int m_size_t;

// copying functions
void *m_memcpy(void *dst, const void *src, m_size_t n);
void *m_memmove(void *dst, const void *src, m_size_t n);
char *m_strcpy(char *dst, const char *src);
char *m_strncpy(char *dst, const char *src, m_size_t n);

// concatenation functions
char *m_strcat(char *dst, const char *src);
char *m_strncat(char *dst, const char *src, m_size_t n);

// comparison functions
int m_memcmp(const void *ptr1, const void *ptr2, m_size_t n);
int m_strcmp(const char *str1, const char *str2);
// strcoll is not implemented
int m_strncmp(const char *str1, const char *str2, m_size_t n);
// strxfrm is not implemented

/* NOT IMPLEMENTED YET
// searching functions
const void *m_memchr(const void *ptr, int val, m_size_t n);
const char *m_strchr(char *str, int c);
m_size_t m_strcspn(const char *str1, const char *str2);
const char *m_strpbrk(const char *str1, const char *str2);
const char *m_strrchr(const char *str, int character);
m_size_t m_strcspn(const char *str1, const char *str2);
const char *m_strpbrk(const char *str1, const char *str2);
const char *m_strrchr(const char *str, int character);
m_size_t m_strspn(const char *str1, const char *str2);
const char *m_strstr(const char *str1, const char *str2);
char *m_strtok(char *str, const char *split);

// other functions
void *m_memset(void *ptr, int value, m_size_t num);
// strerror is not implemented
m_size_t m_strlen(const char *str);
*/
#endif // !__MSTRING_H
