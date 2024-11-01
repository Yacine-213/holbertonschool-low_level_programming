#include "main.h"

/**
 * _strncat - Concatène deux chaînes de caractères avec un nom� d'octets.
 * @dest: La chaîne de destination.
 * @src: La chaîne source à ajouter à `dest`.
 * @n: Le nombre d'octets à utiliser de `src`.
 *
 * Return: Un pointeur vers la chaîne résultante `dest`.
 */
char *_strncat(char *dest, char *src, int n)
{
	int dest_len = 0, i;

	/* Trouver la longueur de la chaîne de destination */
	while (dest[dest_len] != '\0')
	{
		dest_len++;
	}

	/* Ajouter jusqu'à n octets de `src` à `dest` */
	for (i = 0; i < n && src[i] != '\0'; i++)
	{
		dest[dest_len + i] = src[i];
	}

	/* Ajouter le caractère nul à la fin de `dest` */
	dest[dest_len + i] = '\0';

	return (dest);
}
