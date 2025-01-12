#ifndef LISTS_H
#define LISTS_H

#include <stdio.h>
#include <stdlib.h>

/* Structure for doubly linked list node */
typedef struct dlistint_s
{
    int n; /* The data in the node */
    struct dlistint_s *prev; /* Pointer to the previous node */
    struct dlistint_s *next; /* Pointer to the next node */
} dlistint_t;

/* Function prototypes */
dlistint_t *add_dnodeint(dlistint_t **head, const int n);
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n);
void free_dlistint(dlistint_t *head);
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index);
int sum_dlistint(dlistint_t *head);
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n);
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index);
void print_dlistint(const dlistint_t *h);

#endif /* LISTS_H */

