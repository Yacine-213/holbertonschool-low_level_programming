#include "main.h"

/**
 * print_square - Dessine un carré dans le terminal.
 * @size: La taille du carré.
 */
void print_square(int size)
{
	int i, j;

	if (size <= 0)
	{
		_putchar('\n');  /* Imprime seulement un saut de ligne si size <= 0 */
	}
	else
	{
		for (i = 0; i < size; i++)  /* Boucle pour chaque ligne */
		{
			for (j = 0; j < size; j++)  /* Boucle pour chaque colonne */
			{
				_putchar('#');  /* Imprime le caractère # */
			}
			_putchar('\n');  /* Passe � ligne suivante */
		}
	}
}
