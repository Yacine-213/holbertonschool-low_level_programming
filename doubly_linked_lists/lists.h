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
size_t dlistint_len(const dlistint_t *h);

#endif /* LISTS_H */

