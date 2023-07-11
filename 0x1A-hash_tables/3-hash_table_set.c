#include "hash_tables.h"
#include <string.h>

/**
 * hash_table_set - function to add entries into the hash tables
 * @ht: pointer to the hash table
 * @key: the key
 * @value: the value
 * Return: 1 if succeeded, 0 otherwise
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	hash_node_t *hashNode = NULL;
	unsigned long int index;

	if (!key || !value || !ht)
		return (0);
	hashNode = malloc(sizeof(hash_node_t));
	if (!hashNode)
		return (0);
	hashNode->key = strdup((char *)key);
	hashNode->value = strdup((char *)value);
	hashNode->next = NULL;
	index = key_index((unsigned char *)key, ht->size);
	if (ht->array[index] == NULL)
	{
		ht->array[index] = hashNode;
		return (1);
	}
	else
	{
		if (ht->array[index]->key == key)
		{
			ht->array[index]->key = (char *)key;
			ht->array[index]->value = (char *)value;
			return (1);
		}
		hashNode->next = ht->array[index];
		ht->array[index] = hashNode;
		return (1);
	}
}
