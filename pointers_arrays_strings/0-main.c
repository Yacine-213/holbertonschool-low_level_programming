#include "main.h"
#include <stdio.h>

/**
 * simple_print_buffer - Affiche le contenu d'un buffer en hexadécimal
 * @buffer: Pointeur vers la mémoire à afficher
 * @size: Taille de la zone mémoire à afficher
 *
 * Description: Affiche chaque octet du buffer en hexadécimal, avec un formatage
 * de 10 octets par ligne pour une lecture facilitée.
 */
void simple_print_buffer(char *buffer, unsigned int size)
{
	unsigned int i;

	/* Boucle pour afficher chaque octet en hexadécimal */
	for (i = 0; i < size; i++)
	{
		/* Affichage d'un espace entre les octets sauf au début de chaque ligne */
		if (i % 10)
			printf(" ");
		/* Saut de ligne tous les 10 octets */
		if (!(i % 10) && i)
			printf("\n");
		/* Affiche l'octet en hexadécimal */
		printf("0x%02x", buffer[i]);
	}
	printf("\n"); /* Ajoute une nouvelle ligne après l'affichage du buffer */
}

/**
 * main - Point d'entrée pour tester la fonction _memset
 *
 * Description: Initialise un buffer de 98 octets, affiche son contenu initial,
 * utilise _memset pour remplir 95 octets avec la valeur 0x01, puis affiche
 * le buffer modifié.
 *
 * Return: Retourne 0 pour indiquer le succès
 */
int main(void)
{
	/* Initialise un buffer de 98 octets, rempli avec des valeurs nulles */
	char buffer[98] = {0x00};

	/* Affiche le contenu initial du buffer */
	simple_print_buffer(buffer, 98);

	/* Utilise _memset pour remplir les 95 premiers octets avec 0x01 */
	_memset(buffer, 0x01, 95);

	/* Séparateur pour distinguer avant et après l'appel de _memset */
	printf("-------------------------------------------------\n");

	/* Affiche le contenu final du buffer après l'appel de _memset */
	simple_print_buffer(buffer, 98);

	return (0); /* Renvoie 0 pour signaler la réussite de l'exécution */
}
