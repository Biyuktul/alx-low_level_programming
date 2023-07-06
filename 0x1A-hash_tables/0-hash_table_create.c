#include "hash_tables.h"

/**
 * hash_table_create - function to create hash table data structure
 * @size: the size for the hash table
 * Return: pointer to the newly created hash table
*/
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *ht = NULL;

	ht = malloc(sizeof(hash_table_t));
	if (ht == NULL)
		return (NULL);

	ht->size = size;
	ht->array = malloc(sizeof(hash_node_t) * size);
	if (ht->array == NULL)
	{
		free(ht);
		return (NULL);
	}

	for (unsigned long int i = 0; i < size; i++)
	{
		ht->array[i] = NULL;
	}
	return (ht);
}
