#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "hash_tables.h"

/**
 * main - check the code for Holberton School students.
 *
 * Return: Always EXIT_SUCCESS.
 */
int main(void)
{
    hash_table_t *ht;
    int ret;

    ht = hash_table_create(10);
    ret = hash_table_set(ht, "Holberton", "is cool");
    printf("%d\n", ret);
    hash_table_print(ht);
    ret = hash_table_set(ht, "Holberton", "is soooo cooool");
    printf("%d\n", ret);
    hash_table_print(ht);
    ret = hash_table_set(ht, "Holberton", "is awesome");
    printf("%d\n", ret);
    hash_table_print(ht);
    return (EXIT_SUCCESS);
}
