#include "hash_tables.h"
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <stdbool.h>

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

	if (ht == NULL)
		return (0);
	if (key == NULL || value == NULL || *(key) == '\0'
	|| *(value) == '\0' || strlen(key) == 0)
		return (0);
	
	new_node = malloc(sizeof(hash_node_t));

	if (!new_node)
		return (0);
	
	new_node->key = strdup(key);
	new_node->value = strdup(value ? value : "");
	new_node->next = NULL;

	index = key_index((const unsigned char *)key, ht->size);

	if (ht->array[index] == NULL)
	{
		ht->array[index] = new_node;
	}
	else
	{
		new_node->next = ht->array[index];
		ht->array[index] = new_node;
	}
	return (1);
}
