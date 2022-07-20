#include "main.h"

/**
 * _pow_recursion - computes power of a number
 * @x: base value
 * @y: a power raised to the base value
 * Return: 1 if y == 0 and computed value if y != 0
 */

int _pow_recursion(int x, int y)
{
	if (y != 0)
		return (x * _pow_recursion(x, y - 1));
	else
		return (1);
}
