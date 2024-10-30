#include "main.h"

/**
 * puts_half - Prints the second half of a string.
 * @str: The string to be printed.
 */
void puts_half(char *str)
{
	int len = 0;
	int start, i;

	/* Calcul de la longueur de la chaîne */
	while (str[len] != '\0')
	{
		len++;
	}

	/* Calcul du point de départ */
	if (len % 2 == 0)
	{
		start = len / 2;
	}
	else
	{
		start = (len - 1) / 2 + 1;
	}

	/* Impression de la seconde moitié de la chaîne */
	for (i = start; i < len; i++)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
