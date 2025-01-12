#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * delete_dnodeint_at_index - delete a node at given index of a dlistint_t
 * @head: pointer to a pointer to the head of the list
 * @index: index of the node that should be deleted
 *
 * Return: 1 if success, -1 if fail
 */

int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *current_node;
	dlistint_t *node_to_delete;
	unsigned int i;

	if (*head == NULL)
		return (-1);

	current_node = *head;
	i = 0;

	if (index == 0)
	{
		*head = (*head)->next;
		free(current_node);
		return (1);
	}

	while (current_node != NULL && i < index - 1)
	{
		current_node = current_node->next;
		i++;
	}

	if (current_node == NULL || current_node->next == NULL)
		return (-1);

	node_to_delete = current_node->next;

	current_node->next = node_to_delete->next;
	if (node_to_delete->next != NULL)
		node_to_delete->next->prev = current_node;
	free(node_to_delete);

	return (1);
}
