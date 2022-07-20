#include "main.h"

/**
 * _print_rev_recursion - print reversed string recursivly
 * @s: pointer to the string
 * Return: void
 */

void _print_rev_recursion(char *s)
{
	if (*s != '\0')
		_print_rev_recursion(s + 1);
	else
		return;
	_putchar(*s);
}
