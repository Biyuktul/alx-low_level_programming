#include <stdio.h>
#include "main.h"

/**
 * main - Entry Point
 * @argc: arguments
 * @argv: array pointing to arguments
 * Return: 0
 */

int main(int argc, char *argv[])
{

	while (argc--)
	{
		printf("%s\n", argv[argc]);
	}
	return (0);
}
