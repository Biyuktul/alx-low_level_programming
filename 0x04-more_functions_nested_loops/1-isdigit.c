#include "main.h"
#include <ctype.h>

/**
 * _isdigit - check for digit
 *
 * @c: character to be checked
 *
 * Return: 1 if digit and otherwise 0
 */

int _isdigit(int c)
{
if (isdigit(c))
return (1);
else
return (0);
}
