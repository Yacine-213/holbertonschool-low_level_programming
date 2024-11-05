#include "main.h"

/**
 * _print_rev_recursion - Imprime une chaîne en inversé.
 * @s: La chaîne à imprimer.
 */
void _print_rev_recursion(char *s)
{
	if (*s) /* Vérifie si le caractère actuel n'est pas le caractère nul */
	{
		_print_rev_recursion(s + 1); /* Appel récursif avec le caractère suivant */
		_putchar(*s); /* Imprime le caractère actuel après l'appel récursif */
	}
}
