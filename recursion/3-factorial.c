#include "main.h"

/**
 * factorial - Calcule la factorielle d'un nombre donné.
 * @n: Le nombre dont on veut calculer la factorielle.
 *
 * Return: La factorielle de n, ou -1 si n est négatif.
 */
int factorial(int n)
{
	if (n < 0)
	{
		return (-1); /* Retourne -1 pour indiquer une erreur si n est négatif */
	}
	if (n == 0)
	{
		return (1); /* Retourne 1 car 0! est 1 */
	}
	return (n * factorial(n - 1)); /* Appel récursif pour calculer n * (n-1)! */
}
