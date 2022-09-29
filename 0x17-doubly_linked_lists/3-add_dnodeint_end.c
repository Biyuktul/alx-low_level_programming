#include "lists.h"

/**
 * add_dnodeint_end - adds a node to the end of a list
 * @head: pointer to the first element in the list
 * @n: member data of the structure dlistint_t
 * Return: address to the new node or NULL if failed
 */

dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *temp, *newNode;

	newNode = (dlistint_t *)malloc(sizeof(dlistint_t));
	temp = *head;
	if (newNode == NULL)
	{
		return (NULL);
	}
	newNode->n = n;
	if (temp == NULL)
	{
		newNode->next = temp;
		newNode->prev = temp;
		*head = newNode;
		return (newNode);
	}
	temp = *head;
	while (temp->next != NULL)
		temp = temp->next;
	newNode->next = temp->next;
	newNode->prev = temp;
	temp->next = newNode;
	return (newNode);
}
