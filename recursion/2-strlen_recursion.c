#include "main.h"

/**
 * _strlen_recursion - Renvoie la longueur d'une chaîne.
 * @s: La chaîne dont la longueur doit être calculée.
 *
 * Return: La longueur de la chaîne.
 */
int _strlen_recursion(char *s)
{
	if (*s == '\0') /* Vérifie si le caractère actuel est nul */
		return (0); /* Si c'est le cas, la longueur est 0 */
	else
		return (1 + _strlen_recursion(s + 1)); /* 1 et appelle pour le  suivant */
}
