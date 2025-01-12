#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * add_node - add a new node at the begin of a list_t list
 * @head: pointer to the head of the list
 * @str: the string to be added to the list
 *
 * Return: the address of the new element, or NULL if fail
 */

list_t *add_node(list_t **head, const char *str)
{
	char *duplicate;
	int len;
	list_t *new_node;

	if (head == NULL || str == NULL)
		return (NULL);

	new_node = malloc(sizeof(list_t));
	if (new_node == NULL)
		return (NULL);

	duplicate = strdup(str);
	if (duplicate == NULL)
	{
		free(new_node);
		return (NULL);
	}

	for (len = 0; str[len];)
		len++;

	new_node->str = duplicate;
	new_node->len = len;
	new_node->next = *head;

	*head = new_node;

	return (new_node);
}
