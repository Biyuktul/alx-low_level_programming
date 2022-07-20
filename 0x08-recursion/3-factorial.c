#include "main.h"

/**
 * factorial - computes factorial of all positive numbers recursively
 * @n: number to be computed
 * Return: Factorial of given number
 */

int factorial(int n)
{
	if (n < 0)
		return (-1);
	return (n * factorial(n - 1));
}
