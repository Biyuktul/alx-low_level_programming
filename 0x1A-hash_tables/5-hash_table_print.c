#include "hash_tables.h"

/**
 * hash_table_print - function to print content of a hash table
 * @ht: pointer to the hash table
 * Return: Always Void
 */
void hash_table_print(const hash_table_t *ht)
{
        unsigned long int i;
        for (i = 0; i < ht->size; i++)
        {
                printf("{%s}", print_list(ht));
        }
}

char *print_list(hash_node_t *head)
{
        if (head == NULL)
                return (NULL);
        while (head != NULL)
        {
                return ("%s: %s", head->key, head->value);
                head = head->next;
        }
}