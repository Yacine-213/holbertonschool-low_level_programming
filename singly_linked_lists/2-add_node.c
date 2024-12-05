#include "lists.h"

/**
 * add_node - Adds a new node at the beginning of a list_t list.
 * @head: Double pointer to the head of the list.
 * @str: String to be duplicated and added to the new node.
 *
 * Return: The address of the new element, or NULL if it failed.
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *new_node; /* Pointer to the new node */
	char *dup_str; /* Pointer to the duplicated string */

	/* Duplicate the string */
	dup_str = strdup(str);
	if (dup_str == NULL) /* Check for memory allocation failure */
		return (NULL);

	/* Allocate memory for the new node */
	new_node = malloc(sizeof(list_t));
	if (new_node == NULL) /* Check for memory allocation failure */
	{
		free(dup_str); /* Free the duplicated string if node allocation fails */
		return (NULL);
	}

	/* Initialize the new node */
	new_node->str = dup_str; /* Set the string */
	new_node->len = strlen(dup_str); /* Set the length of the string */
	new_node->next = *head; /* Point to the current head of the list */

	/* Update the head to point to the new node */
	*head = new_node;

	return (new_node); /* Return the address of the new node */
}
