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
