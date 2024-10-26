#include "main.h"

/**
 * times_table - Affiche la table de multiplication de 9, de 0 à 9
 */
void times_table(void)
{
	int row, col, produit;

	for (row = 0; row <= 9; row++)
	{
		for (col = 0; col <= 9; col++)
		{
			produit = row * col;

			if (produit > 9)
			{
				_putchar((produit / 10) + '0');  /* Affiche la dizaine */
				_putchar((produit % 10) + '0');  /* Affiche l'unité */
			}
			else
			{
				if (col != 0)
					_putchar(' ');  /* Espace pour l'alignement */
				_putchar(produit + '0');
			}

			if (col < 9)
			{
				_putchar(',');
				_putchar(' ');
			}
		}
		_putchar('\n');
	}
}
