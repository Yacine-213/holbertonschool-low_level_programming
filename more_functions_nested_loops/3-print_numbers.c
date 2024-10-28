#include "main.h"

/**
 * print_numbers - Affiche les chiffres de 0 à 9 suivi d'un saut de ligne.
 */
void print_numbers(void)
{
	char c;

	for (c = '0'; c <= '9'; c++)  /* Parcourt chaque chiffre de '0' à '9' */
	{
		_putchar(c);  /* Affiche chaque chiffre un par un */
	}
	_putchar('\n');  /* Ajoute un saut de ligne à la fin */
}
