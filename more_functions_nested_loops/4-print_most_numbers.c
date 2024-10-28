#include "main.h"

/**
 * print_most_numbers - Affiche les chiffres de 0 à 9, sauf 2 et 4,
 * suivi d'un saut de ligne.
 */
void print_most_numbers(void)
{
	char c;

	for (c = '0'; c <= '9'; c++)
	{
		if (c != '2' && c != '4')  /* Ignorer les chiffres 2 et 4 */
		{
			_putchar(c);
		}
	}
	_putchar('\n');  /* Ajouter un saut de ligne à la fin */
}
