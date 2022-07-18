#include "main.h"

/**
 * _memset - sets memory location to b
 * @s - memory address that we want to set
 * @b: the character to be set
 * @n: number of bytes
 *
 * Return: a pointer to the memory area s
 */

char *_memset(char *s, char b, unsigned int n)
{
unsigned int i;

for (i = 0; i < n; i++)
s[i] = b;
return (s);
}
