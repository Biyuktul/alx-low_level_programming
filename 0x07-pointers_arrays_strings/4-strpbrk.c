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
	int i = 0, j = 0, pos = 0, match_found = 0;

	while (*(s + i))
		i++;

	pos = i;
	i = 0;
	while (*(accept + i))
	{
		j = 0;
		while (*(s + j))
		{
			if (accept[i] == s[j])
			{
				if (j <= pos)
				{
					pos = j;
					match_found = 1;
				}
			}
			j++;
		}
		i++;
	}

	if (match_found == 1)
		return (&s[pos]);

	return (NULL);
}
