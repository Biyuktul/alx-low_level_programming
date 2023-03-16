#include "lists.h"
#include <stdlib.h>

/**
 * free_dlistint - a function to free a linked list
 * @head: pointer to start of the list
 * Return: Void
*/
void free_dlistint(dlistint_t *head)
{
	dlistint_t *cur;

	cur = head;
	while (cur != NULL)
	{
		head = head->next;
		free(cur);
		cur = head;
	}
}
