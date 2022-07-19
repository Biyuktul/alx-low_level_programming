#include "main.h"

/**
 * print_chessboard - prints the chessboard
 * @a: number of rows
 * Return: Void
 */

void print_essboard(char (*a)[8])
{
	int i, n;

	for (i = 0; i < 8; i++)
	{
		for (n = 0; n < 8; n++)
			_putchar(a[i][n]);
		_putchar('\n');
	}
}
