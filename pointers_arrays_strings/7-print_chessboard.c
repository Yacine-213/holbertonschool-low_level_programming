#include "main.h"

/**
 * print_chessboard - Affiche un échiquier.
 * @a: Tableau 2D représentant l'échiquier de taille 8x8.
 */
void print_chessboard(char (*a)[8])
{
	int i, j;

	for (i = 0; i < 8; i++)
	{
		for (j = 0; j < 8; j++)
		{
			_putchar(a[i][j]); /* Affiche chaque caractère de la ligne */
		}
		_putchar('\n'); /* Ajoute un saut de ligne après chaque lign */
	}
}
