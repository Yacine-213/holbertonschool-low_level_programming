#include "main.h"

/**
 * print_diagonal - Dessine une ligne diagonale avec le caractère `\`.
 * @n: Nombre de fois que le caractère `\` doit être imprimé.
 */
void print_diagonal(int n)
{
	int i, j;

	if (n > 0)
	{
		for (i = 0; i < n; i++)
		{
			for (j = 0; j < i; j++)
			{
				_putchar(' ');  /* Ajoute des espaces pour créer la diagonale */
			}
			_putchar('\\');  /* Imprime le caractère `\` pour la diagonale */
			_putchar('\n');  /* Passe à la ligne suivante */
		}
	}
	else
	{
		_putchar('\n');  /* Imprime un saut de ligne si n <= 0 */
	}
}
