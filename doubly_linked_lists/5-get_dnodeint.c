#include <stdio.h>
#include "lists.h"

/**
 * get_dnodeint_at_index - return the nth node of a dlistint_t list
 * @index: the index of node starting from 0
 * @head: pointer to the list
 *
 * Return: the nth node in the list
 */

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *current_node = head;
	unsigned int j = 0;

	if (head == NULL)
		return (NULL);

	while (current_node != NULL && j < index)
	{
		current_node = current_node->next;
		j++;
	}

	if (current_node == NULL)
		return (NULL);

	else
		return (current_node);

}
