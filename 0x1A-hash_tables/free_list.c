#include "hash_tables.h"
#include <stdlib.h>

/**
 * free_list - frees a list
 * @head: head of the linked list.
 * Return: no return.
 */

void free_list(hash_node_t *head)
{
	hash_node_t *current;

	while ((current = head) != NULL)
	{
		head = head->next;
		free(current->key);
		free(current->value);
		free(current);
	}
}
