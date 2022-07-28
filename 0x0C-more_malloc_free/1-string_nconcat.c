#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * string_nconcat - function that concatenates a string pointed to by s1 to
 *			n characters of string pointed to by s2 into newly  allocated memory.
 * @s1: pointer to th first string
 * @s2: pointer to the second string
 * @n: number of character to be concatenated
 * Return: pointer to the newly allocated memory.
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	int i, j, s1_len, s2_len;
	char *p;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	for (s1_len = 0; s1[s1_len]; s1_len++)
	{
	}

	for (s2_len = 0; s2[s2_len]; s2_len++)
	{
	}

	

	p = malloc(sizeof(char) + (s1 + s2 + 1));
	if  (p == NULL)
		return (NULL);

	for (i = 0; s1[i]; i++)
	{
		p[i] = s1[i];
	}

	for (j = 0; s2[j] && j < n; j++, i++)
	{
		p[i] = s2[j];
	}

	p[i] = '\0';

	return (p);
}
