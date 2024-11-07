#include <stdio.h>
#include "main.h"

/**
 * main - Affiche le nombre d'arguments passés au programme
 * @argc: Nombre d'arguments
 * @argv: Tableau d'arguments (inutilisé ici)
 *
 * Return: Toujours 0 (Succès)
 */
int main(int argc, char *argv[] __attribute__((unused)))
{
	printf("%d\n", argc - 1);
	return (0);
}
