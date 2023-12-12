#include "main.h"

/**
 * _strncat - concatenates n characters from src to dest
 * @dest: the destination string
 * @src: the source string
 * @n: the number of characters to concatenate
 * Return: the concatenated string
 */
char *_strncat(char *dest, char *src, int n)
{
    char *result = dest;

    while (*dest)
        dest++;
    while (n-- > 0 && (*dest++ = *src++))
        ;
    *dest = '\0';
    return result;
}

