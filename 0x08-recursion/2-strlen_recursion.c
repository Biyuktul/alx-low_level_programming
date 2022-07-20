#include "main.h"

/**
 * _strlen_recursion - calculates length of a string recursively
 * @s: pointer to the string
 * Return: length of the string pointed to by s
 */

int _strlen_recursion(char *s)
{
	if (*s == '\0')
		return (0);

	return (_strlen_recursion(s + 1) + 1);
}
