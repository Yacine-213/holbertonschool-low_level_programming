#include <stdio.h>
#include "main.h"

/**
 * main - Affiche le nom du programme
 * @argc: Nombre d'arguments
 * @argv: Tableau d'arguments
 *
 * Return: Toujours 0 (Succès)
 */
int main(int argc __attribute__((unused)), char *argv[])
{
	printf("%s\n", argv[0]);
	return (0);
}
