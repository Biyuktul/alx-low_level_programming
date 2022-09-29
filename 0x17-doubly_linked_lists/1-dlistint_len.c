#include "lists.h"

/**
 * dlistint_len - display the length of a list
 * @h: pointer to the first element in the list
 * Return: length of the list
 */

size_t dlistint_len(const dlistint_t *h)
{
	int len;

	len = 0;
	while (h != NULL)
	{
		len++;
		h = h->next;
	}
	return (len);
}
