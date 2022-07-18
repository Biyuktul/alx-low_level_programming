#include "main.h"

/**
 * _memcpy - function to copy mem
 * @dest: pointer to destination string
 * @src: pointer to the source string
 * @n: number of byte tobe copied
 * Return: pointer to destination string.
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{

	if ((dest != NULL) && (src != NULL))
	{
		while (n)
		{
			*(dest++) = *(src++);
			--n;
		}
	}
	return (dest);
}
