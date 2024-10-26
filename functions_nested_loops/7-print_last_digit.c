#include "main.h"

/**
 * print_last_digit - Prints the last digit of a number.
 * @n: The number to extract the last digit from.
 *
 * Return: The value of the last digit.
 */
int print_last_digit(int n)
{
	int last_digit;

	/* Calculer le dernier chiffre */
	last_digit = n % 10;

	/* Si n est négatif, convertir last_digit en positif */
	if (n < 0)
	{
		last_digit = -last_digit;
	}

	_putchar('0' + last_digit);  /* Imprimer le dernier chiffre */

	return (last_digit);  /* Retourner la valeur du dernier chiffre */
}
