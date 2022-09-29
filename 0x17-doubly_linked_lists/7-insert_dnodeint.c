#include "lists.h"

/**
 * insert_dnodeint_at_index - inserts a node at specified position
 * @h: pointer to the start of a list
 * @idx: position the node to be inserted
 * @n: Data member of the dlistint_t struct
 * Return: pointer to the newNode or Null if it failed
 */

dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *temp;
	dlistint_t *newNode;
	unsigned int i;

	newNode = (dlistint_t *)malloc(sizeof(dlistint_t));
	if (!newNode)
		return (NULL);
	temp = *h;
	newNode->n = n;

	i = 0;
	while (temp != NULL)
	{
		if (i == idx)
			break;
		i++;
		temp = temp->next;
	}
	if (temp != NULL)
	{
		newNode->next = temp;
		newNode->prev = temp->prev;
		temp->prev->next = newNode;
		temp->prev = newNode;
		return (newNode);
	}
	else
		return (NULL);

}
