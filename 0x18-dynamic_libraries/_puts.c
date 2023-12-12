#include "main.h"
#include <unistd.h>

/**
 * _puts - writes a string to stdout
 * @s: the string to be written
 */
void _puts(char *s)
{
    while (*s != '\0')
    {
        write(1, s, 1);
        s++;
    }
    write(1, "\n", 1);
}

