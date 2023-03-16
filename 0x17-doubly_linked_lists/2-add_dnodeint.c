#include "lists.h"
#include <stdlib.h>

/**
 * add_dnodeint - a function to add node at the begining of a list
 * @head: pointer to the  start of a list
 * @n: data of the node
 * Return: pointer to inserted node
*/

dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new_node;

	new_node = malloc(sizeof(dlistint_t));
	if (!new_node)
		return (NULL);
	if (*head)
	{
		new_node->n = n;
		new_node->next = *head;
		new_node->prev = (*head)->prev;
		*head = new_node;
		return (new_node);
	}
	else
	{
		new_node->next = *head;
		new_node->prev = *head;
		*head = new_node;
		return (new_node);
	}
}
