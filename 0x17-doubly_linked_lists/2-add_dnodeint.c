#include "lists.h"

/**
 * add_dnodeint - add node to beggining of the list
 * @head: pointer to the start of the list
 * @n: data member of the struct dlistint_t
 * Return: pointer to the newNode or NULL if failed
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
