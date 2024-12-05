#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * print_list - Affiche tous les éléments de la liste.
 * @h: Pointeur vers la tête de la liste.
 *
 * Return: Le nombre de nœuds dans la liste.
 */
size_t print_list(const list_t *h)
{
	size_t count = 0; /* Compteur de nœuds */

	while (h) /* Parcours de la liste */
	{
		if (h->str) /* Vérifie si la chaîne n'est pas NULL */
			printf("[%u] %s\n", h->len, h->str);
		else
			printf("[0] (nil)\n"); /* Affiche (nil) si la chaîne est NULL */
		h = h->next; /* Passe au nœud suivant */
		count++; /* Incrémente le compteur */
	}
	return (count); /* Retourne le nombre de nœuds */
}

/**
 * main - Vérifie le code.
 *
 * Return: Toujours 0.
 */
int main(void)
{
	list_t *head; /* Pointeur vers la tête de la liste */

	head = NULL; /* Initialise la tête de la liste à NULL */
	add_node(&head, "Alexandro");
	add_node(&head, "Asaia");
	add_node(&head, "Augustin");
	add_node(&head, "Bennett");
	add_node(&head, "Bilal");
	add_node(&head, "Chandler");
	add_node(&head, "Damian");
	add_node(&head, "Daniel");
	add_node(&head, "Dora");
	add_node(&head, "Electra");
	add_node(&head, "Gloria");
	add_node(&head, "Joe");
	add_node(&head, "John");
	add_node(&head, "John");
	add_node(&head, "Josquin");
	add_node(&head, "Kris");
	add_node(&head, "Marine");
	add_node(&head, "Mason");
	add_node(&head, "Praylin");
	add_node(&head, "Rick");
	add_node(&head, "Rick");
	add_node(&head, "Rona");
	add_node(&head, "Siphan");
	add_node(&head, "Sravanthi");
	add_node(&head, "Steven");
	add_node(&head, "Tasneem");
	add_node(&head, "William");
	add_node(&head, "Zee");

	/* Affiche la liste */
	print_list(head);

	return (0); /* Retourne 0 pour indiquer que le programme s'est terminé avec succès */
}
