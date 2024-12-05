#ifndef LISTS_H
#define LISTS_H

#include <stddef.h> /* Pour size_t */
#include <stdlib.h> /* Pour malloc et free */
#include <string.h> /* Pour strdup et strlen */

/**
 * struct list_s - liste simplement chaînée
 * @str: chaîne de caractères - (chaîne allouée avec malloc)
 * @len: longueur de la chaîne
 * @next: pointeur vers le nœud suivant
 *
 * Description: structure de nœud de liste simplement chaînée
 */
typedef struct list_s
{
    char *str; /* Pointeur vers la chaîne de caractères */
    unsigned int len; /* Longueur de la chaîne */
    struct list_s *next; /* Pointeur vers le nœud suivant */
} list_t;

/* Prototypes des fonctions */
list_t *add_node(list_t **head, const char *str);
size_t print_list(const list_t *h); /* Change to size_t */

#endif /* LISTS_H */
