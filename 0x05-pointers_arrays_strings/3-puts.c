#include "main.h"

/**
 * _puts - func that prints string to stdout
 * @str: pointer that points to the string
 * Return: void
 */

void _puts(char *str)
{
while (*str != '\0')
{
putchar(*str);
str++;
}
putchar('\n');
}
