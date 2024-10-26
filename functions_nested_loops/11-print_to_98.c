#include "main.h"
#include <stdio.h>

/**
 * print_to_98 - imprime tous les nombres naturels de n à 98
 * @n: le nombre de départ
 */
void print_to_98(int n)
{
	if (n <= 98)
	{
		for (; n < 98; n++)
			printf("%d, ", n);
	}
	else
	{
		for (; n > 98; n--)
			printf("%d, ", n);
	}
	printf("98\n");
}
