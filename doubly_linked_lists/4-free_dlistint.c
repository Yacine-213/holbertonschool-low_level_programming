#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * free_dlistint - free a dlistint_t list
 * @head: pointer to the list
 */

void free_dlistint(dlistint_t *head)
{
	dlistint_t *actual_node = head;
	dlistint_t *next;

	while (actual_node != NULL)
	{
		next = actual_node->next;

		free(actual_node);

		actual_node = next;
	}

}
