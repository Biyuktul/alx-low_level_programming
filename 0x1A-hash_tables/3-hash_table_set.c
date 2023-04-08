#include "hash_tables.h"
#include <stdlib.h>
#include <stdio.h>
#include <string.h>

/**
 * hash_table_set - adds an element to the hash table.
 * @ht: the hash table we want to add or update the key/value to.
 * @key: the key.
 * @value: value associated with the key.
 * Return: 1 if succeeded, 0 otherwise.
*/
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	hash_node_t *new_node;
	unsigned long int index;

	if (key == NULL || value == NULL || strlen(key) == 0)
		return (0);
	new_node = malloc(sizeof(hash_node_t));
	if (!new_node)
		return (0);
	new_node->key = (char *)key;
	new_node->value = strdup(value);
	if (!new_node->value)
	{
		free(new_node->key);
		free(new_node);
		return (0);
	}
	new_node->next = NULL;
	index = key_index((const unsigned char *)key, ht->size);

	if (ht->array[index] == NULL)
		ht->array[index] = new_node;
	else
		ht->array[index]->next = new_node;
	return (1);
}
