#include "lists.h"
#include <stdlib.h>

/**
 * add_dnodeint_end - add a node at the end of a linked list
 * @head: pointer to the start of a list
 * @n: data of the new node
 * Return: pointer to the inserted node
*/

dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new_node, *temp;

	new_node = malloc(sizeof(dlistint_t));
	if (!new_node)
		return (NULL);
	temp = *head;
	new_node->n = n;
	if (temp == NULL)
	{
		new_node->next = NULL;
		new_node->prev = NULL;
		*head = new_node;
		return (new_node);
	}
	while (temp->next != NULL)
		temp = temp->next;
	temp->next = new_node;
	new_node->prev = temp;
	new_node->next = NULL;
	return (new_node);
}
