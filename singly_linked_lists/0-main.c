#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
	list_t *head;
	list_t *new;
	list_t hello = {"World", 5, NULL};
	size_t n;

	head = &hello; /* Initialize head to point to the first node */
	new = malloc(sizeof(list_t)); /* Allocate memory for a new node */
	if (new == NULL)
	{
		printf("Error\n");
		return (1);
	}
	new->str = strdup("Hello"); /* Duplicate the string "Hello" */
	new->len = 5; /* Set the length of the string */
	new->next = head; /* Link the new node to the existing list */
	head = new; /* Update head to point to the new node */

	/* Print the list and the number of elements */
	n = print_list(head);
	printf("-> %lu elements\n", n);

	printf("\n");

	/* Free the string in the new node and set it to NULL */
	free(new->str);
	new->str = NULL;

	/* Print the list again and the number of elements */
	n = print_list(head);
	printf("-> %lu elements\n", n);

	/* Free the allocated memory for the new node */
	free(new);
	return (0);
}
