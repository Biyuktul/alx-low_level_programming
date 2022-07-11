#include "main.h"
#include <string.h>

/**
 * char *_strcpy - function that copies string pointed to by src
 * @dest: destination
 * @src: sorce
 * Return: string
 */

char *_strcpy(char *dest, char *src)
{
int i;

for (i = 0; src[i] != '\0'; i++)
{
	dest[i] = src[i];
}
return (dest);
}
