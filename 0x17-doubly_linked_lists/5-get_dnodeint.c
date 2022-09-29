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

	i = 0;
	while (head != NULL || i != index)
	{
		head = head->next;
		i++;
	}
	if (head == NULL)
		return (NULL);

	return (head);
}
