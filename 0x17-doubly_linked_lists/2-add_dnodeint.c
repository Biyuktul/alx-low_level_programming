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
	dlistint_t *newNode, *temp;

	newNode = (dlistint_t *)malloc(sizeof(dlistint_t));
	if (newNode == NULL)
		return (NULL);
	temp = *head;
	newNode->n = n;
	if (temp == NULL)
	{
		newNode->next = NULL;
		newNode->prev = NULL;
		*head = newNode;
		return (newNode);
	}

	newNode->next = temp;
	newNode->prev = temp->prev;
	temp->prev = newNode;
	*head = newNode;
	return (newNode);
}

