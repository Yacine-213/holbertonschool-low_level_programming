#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * free_list - free a list_t list
 * @head: pointer to the list
 */

void free_list(list_t *head)
{
	list_t *actualnode = head;
	list_t *next;

	while (actualnode != NULL)
	{
		next = actualnode->next;

		free(actualnode->str);
		free(actualnode);

		actualnode = next;
	}
}
