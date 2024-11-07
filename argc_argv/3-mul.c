#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * main - Multiplie deux nombres passés en arguments
 * @argc: Nombre d'arguments
 * @argv: Tableau contenant les arguments
 *
 * Return: 0 si succès, 1 si erreur
 */
int main(int argc, char *argv[])
{
	int num1, num2, result;

	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}

	num1 = atoi(argv[1]);
	num2 = atoi(argv[2]);
	result = num1 * num2;

	printf("%d\n", result);
	return (0);
}
