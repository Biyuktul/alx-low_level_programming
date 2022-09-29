#include "lists.h"

/**
 * free_dlistint - frees a given list
 * @head: pointer to the first node of a list
 * Return: void
 */

void free_dlistint(dlistint_t *head)
{
	dlistint_t *cur;

	while (head)
	{
		cur = head;
		head = head->next;
		free(cur);
	}
}
