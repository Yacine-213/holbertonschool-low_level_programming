#include "main.h"

/**
 * puts2 - imprime chaque deuxième caractère d'une chaîne
 * @str: la chaîne à imprimer
 */
void puts2(char *str)
{
	int i;

	/* Imprime chaque deuxième caractère */
	for (i = 0; str[i] != '\0'; i += 2)
	{
		_putchar(str[i]);  /* Imprimer le caractère courant */
	}
	_putchar('\n');  /* Imprimer une nouvelle ligne à la fin */
}
