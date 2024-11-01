#include "main.h"

/**
 * _strcat - Concatène deux chaînes de caractères.
 * @dest: La chaîne de destination, à laquelle `src` sera ajoutée.
 * @src: La chaîne source à ajouter à `dest`.
 *
 * Return: Un pointeur vers la chaîne résultante `dest`.
 */
char *_strcat(char *dest, char *src)
{
	int dest_len = 0, i = 0;

	/* Trouver la longueur de la chaîne de destination */
	while (dest[dest_len] != '\0')
	{
		dest_len++;
	}

	/* Ajouter `src` à `dest`, en commençant à la fin de `dest` */
	while (src[i] != '\0')
	{
		dest[dest_len + i] = src[i];
		i++;
	}

	/* Ajouter le nouveau caractère nul à la fin de `dest` */
	dest[dest_len + i] = '\0';

	return (dest);
}
