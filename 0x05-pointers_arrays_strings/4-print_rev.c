#include "main.h"

/**
 * print_rev - a function that prints a string, in reverse
 * @s: pointer points to the string
 * Return: void
 */

void print_rev(char *s)
{
	int cnt = 0;
	int i, n;

	for (i = 0; s[i] != '\0'; i++)
	{
		cnt++;
	}

	for (n = (cnt++ - 1); n >= 0; n--)
	{
		_putchar(s[n]);
	}
	_putchar('\n');
}
