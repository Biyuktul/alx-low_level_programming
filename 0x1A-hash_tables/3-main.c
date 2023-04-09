#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "hash_tables.h"

/**
 * main - check the code
 *
 * Return: Always EXIT_SUCCESS.
 */
int main(void)
{
    hash_table_t *ht;
    long unsigned int i;
    hash_node_t *head;

    ht = hash_table_create(10);
    hash_table_set(ht, "hetairas", "yonatan");
    hash_table_set(ht, "mentioner", "biyuktul");
    hash_table_set(ht, "heliotropes", "hapyyyyy");
    hash_table_set(ht, "depravement", "putiiiii");

    hash_table_set(ht, "cat", "mollooo");
    hash_table_set(ht, "dog", "boloooo");
    hash_table_set(ht, "rabit", "sutaaaa");
    hash_table_set(ht, "cow", "fuaiiffff");
    hash_table_set(ht, "parrot", "hataadir");
    hash_table_set(ht, "bird", "teteass");
    hash_table_set(ht, "Holberton", "is cool");
    hash_table_set(ht, "Holberton", "is soooo cooool"); 
    hash_table_set(ht, "Holberton", "is awesome");


    for (i = 0; i < ht->size; i++)
    {
        if (ht->array[i] == NULL)
                printf("array[%ld] ==> NULL \n", i);
        else if (ht->array[i]->next != NULL)
        {
            head = ht->array[i];
            while (head)
            {
                printf("array[%ld] ==> %s  : ", i, head->value);
                head = head->next;
            }
            printf("\n");
        }
        else
                printf("array[%ld] ==> %s  \n", i, ht->array[i]->value);
                
    }
    return (EXIT_SUCCESS);
}