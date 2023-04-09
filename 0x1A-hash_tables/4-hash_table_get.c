#include "hash_tables.h"
#include <string.h>
#include <stdlib.h>

/**
 * hash_table_get -  a function that retrieves a value associated with a key.
 * @ht:the hash table to look into.
 * @key: the key to look for.
 * Return:  value associated with the key, or NULL if key couldn’t be found.
*/
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	hash_node_t *head;
	unsigned long int index = key_index((const unsigned char *)key, ht->size);

	if (!ht)
		return (NULL);
	if (ht->array[index] == NULL)
		return (NULL);
	if (key == ht->array[index]->key)
		return (ht->array[index]->value);

	head = ht->array[index];
	while (head)
	{
		if (strcmp(head->key, key) == 0)
			return (head->value);
		head = head->next;
	}
	return (NULL);
}
