#include "main.h"

/**
 * set_string - Met � la valeur d'un pointeur vers une chaîne de caractères
 * @s: Pointeur double qui sera mis à jour
 * @to: Nouvelle chaîne de caractères à assigner
 *
 * Return: Rien (void)
 */
void set_string(char **s, char *to)
{
	*s = to;  /* Met à jour le pointeur pour pointer vers la nouvelle chaîne */
}
