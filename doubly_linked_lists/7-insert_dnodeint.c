#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * insert_dnodeint_at_index - insert a new node at a given position
 * @h: pointer to a pointer to the head of the list
 * @idx: index of the list where the new node should be added
 * @n: value to be added to the new node
 *
 * Return: the adress of the new node, or NULL if fail
 */

dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *new_node, *current_node = *h;
	unsigned int i = 0;

	new_node = malloc(sizeof(dlistint_t));
	if (new_node == NULL)
		return (NULL);
	new_node->n = n;

	if (idx == 0)
	{
		return (add_dnodeint(h, n));
	}

	for (i = 0; i < idx - 1; i++)
	{
		if (current_node == NULL)
		{
			free(new_node);
			return (NULL);
		}
		current_node = current_node->next;
	}

	if (current_node == NULL)
	{
		free(new_node);
		return (NULL);
	}

	new_node->next = current_node->next;
	new_node->prev = current_node;
	if (current_node->next != NULL)
		current_node->next->prev = new_node;
	current_node->next = new_node;

	return (new_node);
}
