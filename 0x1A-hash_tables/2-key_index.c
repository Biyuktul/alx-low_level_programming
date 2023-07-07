#include "hash_tables.h"

/**
 * key_index - function to calculate the index of a given key
 * @key: the key
 * @size: size of the array
 * Return: index in the range of size
*/
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int hash_value;
	unsigned long int index;

	hash_value = hash_djb2(key);
	index = hash_value % size;
	return (index);
}
