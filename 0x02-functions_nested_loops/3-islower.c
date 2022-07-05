#include <ctype.h>

/**
 * _islower - returns true if c is lower
 *
 * @c: the character to be checked
 *
 * main - Entry point
 *
 * Return: 1 if lower otherwie 0
 */

int _islower(int c)
{
if (islower(c))
return (1);

else
return (0);
}
