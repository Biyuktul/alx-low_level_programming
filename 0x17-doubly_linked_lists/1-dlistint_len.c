#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * dlistint_len - a function to print length of a list
 * @h: pointer to the start of a list
 * Return: number of element visited
*/

size_t dlistint_len(const dlistint_t *h)
{
	unsigned int num;

	num = 0;
	while (h != NULL)
	{
		h = h->next;
		num++;
	}
	return (num);
}
