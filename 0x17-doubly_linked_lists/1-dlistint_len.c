#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

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
