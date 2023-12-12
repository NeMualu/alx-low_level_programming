#include "main.h"

/**
 * _memset - fills the first n bytes of the memory area pointed to by s with b
 * @s: the memory area to be filled
 * @b: the byte to fill the memory with
 * @n: the number of bytes to be filled
 * Return: the pointer to the memory area s
 */
char *_memset(char *s, char b, unsigned int n)
{
    char *start = s;

    while (n-- > 0)
        *s++ = b;
    return start;
}

