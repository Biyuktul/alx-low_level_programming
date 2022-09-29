#include "lists.h"

/**
 * get_dnodeint_at_index - finds a node at specfied index
 * @head: pointer to the start of the list
 * @index: position of the node to be searched
 * Return: The node at pos index or NULL if doesn't exist in the list
 */

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int i;
	dlistint_t *temp;

	temp = head;
	i = 0;
	while (temp != NULL)
	{
		if (i == index)
			break;
		temp = temp->next;
		i++;
	}
	if (temp == NULL)
		return (NULL);
	return (temp);
}
