#include "main.h"

/**
 * _sqrt_recursion - function that computes square root of a given number
 * @n: number of type double
 * Return: square root of n.
 */

int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	else
		return (squareroot(n, (n + 1) / 2));
}

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
		return (squareroot(n, i - 1));
}
