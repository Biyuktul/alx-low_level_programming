#include "main.h"
#include <stdlib.h>

/**
 * str_concat - concatenates two strings and store the result to
 *					dynamically allocated memory
 * @s1: pointer to the first string
 * @s2: pointer to the second string
 * Return: on success return pointer to newly allocated memory
 *				on failure returns NULL
 */

char *str_concat(char *s1, char *s2)
{
	unsigned int s1_len, s2_len, i, j;
	char *a;

	if (s1 == 0)
		s1 = "";
	if (s2 == 0)
		s2 = "";
	for (s1_len = 0; s1[s1_len] != '\0'; s1_len++)
	{}
	for (s2_len = 0; s2[s2_len] != '\0'; s2_len++)
	{}

	a = malloc(s1_len + s2_len + 1);

	if (a == 0)
		return (0);

	for (i = 0; s1[i] != '\0'; i++)
	{
		a[i] = s1[i];
	}
	for (j = 0; s2[j] != '\0'; j++, i++)
	{
		a[i] = s2[j];
	}

	return (a);
}
