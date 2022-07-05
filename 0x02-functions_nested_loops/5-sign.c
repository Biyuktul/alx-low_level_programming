#include "main.h"

/**
 * print_sign - prints sign of number
 *
 * @n: number to be checked
 *
 * main - Entry point
 *
 * Return: -1 if Negative 1 if Positive and 0 if 0
 */

int print_sign(int n)
{
if (n > 0)
{
_putchar(43);
return (1);
}
else if (n == 0)
{
_putchar(48);
return (0);
}
else
{
_putchar(45);
return (-1);
}
}
