#include "main.h"

/**
 * print_last_digit - prints last digit of a number
 *
 * @n: number to be checked
 *
 * main- Entry point
 *
 * Return: Always Last Digit
 */

int print_last_digit(int n)
{
int res;

res = n % 10;

if (n < 0)
	res = res* -1;
_putchar(res + '0');

return (res);
}

