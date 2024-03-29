#include "main.h"

/**
 * _memcpy - copies n bytes from memory area src to memory area dest
 * @dest: the destination memory area
 * @src: the source memory area
 * @n: the number of bytes to copy
 * Return: the pointer to dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
    char *start = dest;

    while (n-- > 0)
        *dest++ = *src++;
    return start;
}

