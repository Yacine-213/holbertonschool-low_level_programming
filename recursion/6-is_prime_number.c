#include "main.h"

/**
 * is_divisible - Vérifie si `n` est divisible par `i`.
 * @n: Le nombre à vérifier.
 * @i: Le diviseur possible.
 *
 * Return: 0 si `n` est divisible par `i`, 1 sinon.
 */
int is_divisible(int n, int i)
{
	if (i * i > n)    /* Si i*i dépasse n, alors n est premier */
		return (1);
	if (n % i == 0)   /* Si n est divisible par i, alors n n'est pas premier */
		return (0);
	return (is_divisible(n, i + 1));  /* Continue vérifier avec le prochain i */
}

/**
 * is_prime_number - Vérifie si un nombre est premier.
 * @n: Le nombre à vérifier.
 *
 * Return: 1 si le nombre est premier, 0 sinon.
 */
int is_prime_number(int n)
{
	if (n <= 1)   /* Les nombres <= 1 ne sont pas premiers */
		return (0);
	return (is_divisible(n, 2));  /* Lance la vérification à partir de 2 */
}
