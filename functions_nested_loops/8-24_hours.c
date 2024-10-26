#include "main.h"

/**
 * jack_bauer - Imprime chaque minute de la journée de Jack Bauer.
 */
void jack_bauer(void)
{
	int hour, minute;

	for (hour = 0; hour < 24; hour++)
	{
		for (minute = 0; minute < 60; minute++)
		{
			_putchar((hour / 10) + '0');  /* Affiche le chiffre des dizaines d'heures */
			_putchar((hour % 10) + '0');  /* Affiche le chiffre des unités d'heures */
			_putchar(':');
			_putchar((minute / 10) + '0'); /* Affiche le chiffre des dizaines de minutes */
			_putchar((minute % 10) + '0'); /* Affiche le chiffre des unités de minutes */
			_putchar('\n');
		}
	}
}
