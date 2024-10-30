#include <stdio.h>

/**
 * print_array - Prints n elements of an array of integers
 * @a: Array of integers
 * @n: Number of elements to print
 */
void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		printf("%d", a[i]);

		/* Imprime une virgule et un espace pour chaque élément sauf le dernier */
		if (i < n - 1)
		{
			printf(", ");
		}
	}
	printf("\n");
}