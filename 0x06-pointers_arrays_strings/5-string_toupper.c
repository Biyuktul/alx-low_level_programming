#include "main.h"
/**
 * string_toupper ->change low to upper letter
 * @n: parameter 1
 * Return: return the upper latters
 */
char *string_toupper(char *n)
{
	int i;

	for (i = 0; n[i]; i++)
	{
		if (n[i] >= 97 && n[i] <= 122)
			n[i] = n[i] - 32;
	}
	return (n);
}
