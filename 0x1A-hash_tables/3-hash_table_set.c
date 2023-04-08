#include "hash_tables.h"
#include <stdlib.h>
#include <stdio.h>

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

	if (!key || !value)
		return (0);
	new_node = malloc(sizeof(hash_node_t));
	if (!new_node)
		return (0);
	new_node->key = (char *)key;
	new_node->value = (char *)value;
	new_node->next = NULL;
	index = key_index((const unsigned char *)key, ht->size);
	printf("%ld \n", index);
	ht->array[index] = new_node;
	
	return (1);
}