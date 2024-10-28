#include "main.h"

/**
 * more_numbers - Affiche 10 fois les nombres de 0 à 14, saut de ligne.
 */
void more_numbers(void)
{
	int i, j;

	for (i = 0; i < 10; i++)
	{
		for (j = 0; j <= 14; j++)
		{
			if (j > 9)
				_putchar((j / 10) + '0');  /* Affiche le chiffre des dizaines */
			_putchar((j % 10) + '0');  /* Affiche le chiffre des unités */
		}
		_putchar('\n');  /* Ajoute un saut de ligne après chaque série */
	}
}
