#include "main.h"

/**
 * find_sqrt - Calcule la racine carrée de `n` en essayant progressivement.
 * @n: Le nombre dont on cherche la racine carrée.
 * @guess: L'essai actuel pour la racine carrée.
 *
 * Return: La racine carrée de `n` si elle est naturelle, sinon -1.
 */
int find_sqrt(int n, int guess)
{
	if (guess * guess == n)  /* Cas où guess est la racine carrée exacte de n */
	{
		return (guess);
	}
	if (guess * guess > n)   /* Si guess^2 dépasse n, n'a pas de racine carr� */
	{
		return (-1);
	}
	return (find_sqrt(n, guess + 1));  /* Essayer la valeur suivante */
}

/**
 * _sqrt_recursion - Retourne la racine carrée naturelle de `n`.
 * @n: Le nombre dont on cherche la racine carrée.
 *
 * Return: La racine carrée naturelle de `n` ou -1 si n'en a pas.
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
	{
		return (-1);  /* Retourne -1 si n est négatif */
	}
	return (find_sqrt(n, 0));  /* Initialisation de l'essai à 0 */
}
