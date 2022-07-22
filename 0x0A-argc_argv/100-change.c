#include <stdio.h>
#include <stdlib.h>
#include "main.h"

int change(int cents);

/**
 * main - Entry Point
 * @argc: number of arguments
 * @argv: array pointing to arguments
 * Return: Always (0) at success
 */

int main(int argc, char *argv[])
{
	if (argc != 1)
	{
		printf("%s\n", "Error");
		return (1);
	}
	else if (argc < 0)
	{
		printf("%d\n", 0);
	}

	printf("%d\n", change(atoi(argv[1])));
	return (0);
}

/**
 * change - get change
 * @cents: amount of coins from main function
 * Return: change
 */

int change(int cents)
{
	int q = 25, d = 10, n = 5, t = 2, p = 1;
	int coins;

	while (cents > 0)
	{
		while (cents >= q)
		{
			cents -= q;
			coins++;
		}
		while (cents >= d)
		{
			cents -= d;
			coins++;
		}
		while (cents >= n)
		{
			cents -= n;
			coins++;
		}
		while (cents >= t)
		{
			cents -= t;
			coins++;
		}
		while (cents >= p)
		{
			cents -= p;
			coins++;
		}
	}
	return (coins);
}
