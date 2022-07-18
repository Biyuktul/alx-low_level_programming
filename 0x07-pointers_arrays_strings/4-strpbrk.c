#include "main.h"

/**
 * _strpbrk - ocates the first occurrence in the string s of any of
 * the bytes in the string accept
 * @s: pointer to the string to be scanned.
 * @accept: pointer to the string containing the characters to match
 * Return: pointer to the character in s that
 * matches one of the characters in accept, else returns NULL.
 */

char *_strpbrk(char *s, char *accept)
{
int i, n;

	for (i = 0; s[i] != '\0'; i++)
	{
		for (n = 0; accept[n] != '\0'; n++)
		{
			if (s[i] == accept[n])
				return (s + i);
		}
	}

	return (NULL);
}
