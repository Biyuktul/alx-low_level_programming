#include "hash_tables.h"
#include <stdlib.h>

/**
 * hash_table_delete - deletes a hash table.
 * @ht: the hash table.
 * Return: Always void.
*/
void hash_table_delete(hash_table_t *ht)
{
	unsigned int long i;
	hash_node_t *head;

	if (ht == NULL)
		return;
	for (i = 0; i < ht->size; i++)
	{
		head = ht->array[i];
		free_list(head);
	}
	free(ht->array);
	free(ht);
}

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
