#include "main.h"

/**
 * print_line - Dessine une ligne droite avec des underscores dans le terminal.
 * @n: Nombre de fois que le caractère '_' doit être imprimé.
 */
void print_line(int n)
{
	int i;

	if (n > 0)
	{
		for (i = 0; i < n; i++)
		{
			_putchar('_');
		}
	}
	_putchar('\n');  /* Ajouter un saut de ligne à la fin */
}
