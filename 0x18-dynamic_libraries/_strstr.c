#include "main.h"

/**
 * _strstr - locates a substring
 * @haystack: the string to be searched
 * @needle: the substring to be located
 * Return: the pointer to the beginning of the located substring,
 * or NULL if the substring is not found
 */
char *_strstr(char *haystack, char *needle)
{
    while (*haystack)
    {
        char *start = haystack;
        char *find = needle;

        while (*haystack && *find && (*haystack == *find))
        {
            haystack++;
            find++;
        }

        if (!*find)
            return start;

        haystack = start + 1;
    }

    return NULL;
}

