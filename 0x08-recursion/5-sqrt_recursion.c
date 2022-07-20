#include "main.h"

/**
 * squareroot - finds square root of passed number
 * @n: input number
 * @i: counter
 * Return: -1 if i < 1 and i if i * i == n
 */

int squareroot(int n, int i)
{
	if (i < 1)
		return (-1);
	else if (i * i == n)
		return (i);
	else
		return (squareroot(n, (n + 1) / 2));
}

/**
 * _sqrt_recursion - computes square root of given number n
 * @n: number to be computed
 * Return: -1 if n is negative
 */

int _sqrt_recursion(int n)
{
if (n < 0)
return (-1);
else
return (squareroot(n, (n + 1) / 2));
}
