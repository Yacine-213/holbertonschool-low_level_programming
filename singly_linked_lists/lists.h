#ifndef LISTS_H
#define LISTS_H

#include <stddef.h> /* For size_t */
#include <stdlib.h> /* For malloc and free */
#include <string.h> /* For strdup and strlen */

/**
 * struct list_s - Singly linked list
 * @str: String - (malloc'ed string)
 * @len: Length of the string
 * @next: Pointer to the next node
 *
 * Description: Node structure for a singly linked list
 */
typedef struct list_s
{
	char *str; /* Pointer to the string */
	unsigned int len; /* Length of the string */
	struct list_s *next; /* Pointer to the next node */
} list_t;

/* Function prototypes */
list_t *add_node(list_t **head, const char *str);
size_t print_list(const list_t *h); /* Assuming you have this function defined */

#endif /* LISTS_H */
