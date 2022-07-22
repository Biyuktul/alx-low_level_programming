#include <stdio.h>
#include "main.h"

/**
 * main - entry point
 * @argc: number of command line argument passed
 * @argv: array of command line arguments passed
 * Return: Always (0) on Success
 */

int main(int argc, __attribute__((unused)) char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
	}
	printf("%d\n", i - 1);
	return (0);
}
