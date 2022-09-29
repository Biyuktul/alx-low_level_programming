#include "lists.h"

/**
 * sum_dlistint - sums up elements a list
 * @head: pointer to the start of the linked list
 * Return: sum of the list or 0 if empty list passed
 */

int sum_dlistint(dlistint_t *head)
{
	int sum = 0;

	if (head == NULL)
		return (0);

	while (head != NULL)
	{
		sum = sum + head->n;
		head = head->next;
	}
	return (sum);
}
