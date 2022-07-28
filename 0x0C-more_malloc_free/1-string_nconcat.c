#include "main.h"

#include <stdlib.h>
#include <stdio.h>

/**
 * string_nconcat - function that concatenates a string pointed to by s1 to n
 *		characters of string pointed to by s2 into newly  allocated memory.
 * @s1: pointer to th first string
 * @s2: pointer to the second string
 * @n: number of character to be concatenated
 * Return: pointer to the newly allocated memory.
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *p;
	unsigned int len = n, i;

	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";

	for (i = 0; s1[i]; i++)
		len++;

	p = malloc(sizeof(char) * (len + 1));

	if (p == NULL)
		return (NULL);

	len = 0;

	for (i = 0; s1[i]; i++)
		p[len++] = s1[i];

	for (i = 0; s2[i] && i < n; i++)
		p[len++] = s2[i];

	p[len] = '\0';

	return (p);
}
