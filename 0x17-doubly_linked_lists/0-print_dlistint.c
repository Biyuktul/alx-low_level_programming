#include "lists.h"

/**
 * print_dlistint - prints a doubly linked list
 * @h: pointer to the first element in the list
 * Return: number of lists displayed
 */

size_t print_dlistint(const dlistint_t *h)
{
	unsigned int num;

	num = 0;
	while (h != NULL)
	{
		printf("%i\n", h->n);
		h = h->next;
		num++;
	}
	return (num);
}
