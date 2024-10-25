#include <unistd.h>

/**
 * main - Prints "_putchar" followed by a new line.
 *
 * Return: Always 0.
 */
int main(void)
{
	/* Affiche chaque caractère de "_putchar" en utilisant write */
	write(1, "_putchar\n", 9);
	return (0); /* Indique un succès d'exécution */
}
