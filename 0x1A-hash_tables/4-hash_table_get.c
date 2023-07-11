#include "hash_tables.h"

/**
 * hash_table_get - function to get value associate with a key
 * @ht: pointer to the hash table
 * @key: the key
 * Return: value associted with the key or NULL if not found
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int index;
	hash_node_t *cur;

	if (!ht)
		return (NULL);
	index = key_index((unsigned char *)key, ht->size);
	if (ht->array[index] == NULL)
		return (NULL);

	if (ht->array[index]->key == key)
		return ((char *)ht->array[index]->value);

	if (ht->array[index]->next == NULL)
		return (NULL);

	cur = ht->array[index]->next;
	while (cur != NULL)
	{
		if (cur->key == key)
			return ((char *)cur->value);
		cur = cur->next;
	}

	return (NULL);
}
