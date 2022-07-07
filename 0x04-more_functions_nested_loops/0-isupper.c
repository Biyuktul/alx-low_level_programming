#include "main.h"
#include <ctype.h>

/**
 * _isupper - check for uppercase
 *
 * @c: character to be checked
 *
 * Return: 1 if upper and otherwise 0
 */

int _isupper(int c)
{
	if (isupper(c))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
