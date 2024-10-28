#include "main.h"
#include <stdio.h>

/**
 * main - Vérifie le code.
 *
 * Return: Toujours 0.
 */
int main(void)
{
	printf("%d\n", mul(98, 1024));    /* Devrait afficher 100352 */
	printf("%d\n", mul(-402, 4096));   /* Devrait afficher -1646592 */
	return (0);
}
