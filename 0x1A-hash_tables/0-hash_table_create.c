#include "hash_tables.h"
#include <stdlib.h>
#include <string.h>

/**
 * hash_table_create - a function to create a hash table
 * @size: size of the hash_table
 * Return: pointer to newly created hash_table
*/

hash_table_t *hash_table_create(unsigned long int size)
{
	unsigned long int  i;

	hash_table_t *new_ht = malloc(sizeof(hash_table_t));

	if (!new_ht)
		return (NULL);

	new_ht->size = size;
	new_ht->array = malloc(sizeof(hash_node_t *) * new_ht->size);

	if (!new_ht->array)
	{
		free(new_ht);
		return (NULL);
	}

	for (i = 0; i < size; i++)
		memset(new_ht->array, 0, sizeof(hash_node_t *) * new_ht->size);

	return (new_ht);
}
