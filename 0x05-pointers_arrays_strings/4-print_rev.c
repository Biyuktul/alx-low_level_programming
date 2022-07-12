#include "main.h"
#include <string.h>

/**
 * print_rev - Func that reverse and print given string
 * @s: pointer that points to the string
 * Return: Void
 */

void print_rev(char *s)
{
int len;

len = strlen(s);
int i = len + 1;
while (i != (strlen - (strlen + 1)))
{
_putchar(s[i]);
i--;
}
_putchar('\n');
}
