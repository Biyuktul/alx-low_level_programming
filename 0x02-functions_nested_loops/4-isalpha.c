#include <ctype.h>

/**
 * _isalpha - returns true if c is lower
 *
 * @c: the character to be checked
 *
 * main - Entry point
 *
 * Return: 1 if alphabet otherwie 0
 */

int _isalpha(int c)
{
if (isalpha(c))
return (1);

else
return (0);
}

