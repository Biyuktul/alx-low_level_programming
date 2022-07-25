#include "main.h"
#include <stdlib.h>

/**
 * _strdup - function that copies a string pointed to by str
 *				to newly allocated memory.
 * @str: pointer to the string.
 * Return: on Success pointer to newly allocated memory or return
 *			Null if allocated memory is insufficient or if passed
 *			pointer to the string is empty.
 */

char *_strdup(char *str)
{
	unsigned int len;
	int i;
	char *a;

	if (str == 0)
		return (0);
	for (len = 0; str[len] != '\0'; len++)
	{
	}
	a = malloc(len + 1);
	if (a == 0)
		return (0);
	i = 0;
	while (str[i])
	{
		a[i] = str[i];
		i++;
	}
	a[i] = '\0';

	return (a);
	free(a);
}
