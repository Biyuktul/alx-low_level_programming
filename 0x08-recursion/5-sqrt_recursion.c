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
		return (_sqrt_recursion(n, (n + 1) / 2));
}
