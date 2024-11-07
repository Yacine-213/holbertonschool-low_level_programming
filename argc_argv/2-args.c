#include <stdio.h>
#include "main.h"

/**
 * main - Affiche tous les arguments reçus par le programme
 * @argc: Nombre d'arguments
 * @argv: Tableau contenant les arguments
 *
 * Return: Toujours 0 (Succès)
 */
int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}

	return (0);
}
