#include <stdio.h>

/**
 * main - Affiche le nom du programme suivi d'un saut de ligne.
 * @argc: Nombre d'arguments
 * @argv: Tableau des arguments (chaînes de caractères)
 *
 * Retour : Toujours 0 (Succès)
 */
int main(int argc, char *argv[])
{
	(void)argc;  /* Paramètre non utilisé, on peut l'ignorer. */
	printf("%s\n", argv[0]);  /* Affiche le nom du programme. */
	return (0);
}
