#include "main.h"

/**
 * factorial - computes factorial of all positive numbers recursively
 * @n: number to be computed
 * Return: -1 if  n < 0, and 1 if n == 0 and return result if n < 1
 */

int factorial(int n)
{
	if (n < 0)
		return (-1);
	else if (n == 0)
		return (1);
	return (n * factorial(n - 1));
}
