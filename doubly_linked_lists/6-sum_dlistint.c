#include <stdio.h>
#include "lists.h"

/**
 * sum_dlistint - return the sum of all the data (n) of a dlistint_t list
 * @head: pointer to the list
 *
 * Return: the sum of all the data on the list
 */

int sum_dlistint(dlistint_t *head)
{
	int sum = 0;
	dlistint_t *current_node = head;

	if (head == NULL)
		return (0);

	while (current_node != NULL)
	{
		sum += current_node->n;
		current_node = current_node->next;
	}

	return (sum);

}
