#ifndef LISTS_H
#define LISTS_H

#include <stddef.h>

/**
 * struct dlistint_s - Liste doublement chaînée
 * @n: Entier stocké dans le nœud
 * @prev: Pointeur vers le nœud précédent
 * @next: Pointeur vers le nœud suivant
 *
 * Description: Structure pour une liste doublement chaînée
 */
typedef struct dlistint_s
{
    int n;
    struct dlistint_s *prev;
    struct dlistint_s *next;
} dlistint_t;

/* Prototypes des fonctions */
dlistint_t *add_dnodeint(dlistint_t **head, const int n);
size_t print_dlistint(const dlistint_t *h);

#endif /* LISTS_H */

