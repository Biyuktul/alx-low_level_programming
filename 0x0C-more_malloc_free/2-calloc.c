#include <stdlib.h>
#include <stdio.h>

/**
 * _calloc - function that allocates specified size memory for elements
 * an array
 * @nmemb: number of elements in an array.
 * @size: size of each element
 * Return: pointer to the newly allocated memory.
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	int i;
	char *p;

	if (nmemb == 0 || size == 0)
		return (NULL);
	p = malloc((nmemb * size));

	if (p == NULL)
		return (NULL);

	for (i = 0; i < (size * nmemb); i++)
		p[i] = 0;

	return (p);
}
