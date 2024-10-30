#include "main.h"

/**
 * _strcpy - la chaîne pointée par src vers dest, incluant le caractère n.
 * @dest: Pointeur vers le buffer de destination
 * @src: Pointeur vers la chaîne source à copier
 *
 * Return: Le pointeur vers dest
 */
char *_strcpy(char *dest, char *src)
{
	int i = 0;

	/* Boucle pour copier chaque caractère de src vers dest */
	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0'; /* Ajouter le caractère nul à la fin de dest */

	return (dest);
}
