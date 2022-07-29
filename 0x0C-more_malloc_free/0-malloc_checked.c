#include "main.h"
#include <stdlib.h>

/**
 * malloc_checked - allocates memory using malloc, exit(98) if it fails
 * @b: size of chunk of memory to be allocated
 * Return: a pointer to the address of the memory block
 */
void *malloc_checked(unsigned int b)
{
	char *p;

	p = malloc(b);
	if (p == NULL)
		exit(98);
	return (p);
}
