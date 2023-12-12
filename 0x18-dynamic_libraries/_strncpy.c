#include "main.h"

/**
 * _strncpy - copies n characters from src to dest
 * @dest: the destination buffer
 * @src: the source string
 * @n: the number of characters to copy
 * Return: the pointer to dest
 */
char *_strncpy(char *dest, char *src, int n)
{
    char *copy = dest;

    while (n-- > 0 && (*dest++ = *src++))
        ;
    while (n-- > 0)
        *dest++ = '\0';
    return copy;
}

