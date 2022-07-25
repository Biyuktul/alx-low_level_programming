#include "main.h"

/**
 * create_array - function that allocate specified size of memory
 *					and initializes it with specified character.
 * @size: the size of memory to be allocated.
 * @c: the character to initialize size locatiion of memory.
 * Return: a pointer to the array or Null if it fails to allocate.
 */

char *create_array(unsigned int size, char c)
{
	int i;

	if (size == 0)
		return (NULL);

	char *a = malloc(sizeof(char) * size);

	if (a == NULL)
		return (NULL);
	else
		for (i = 0; i < size; i++)
			a[i] = c;
	return (a);
}
