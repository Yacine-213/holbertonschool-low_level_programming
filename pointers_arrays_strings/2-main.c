#include "main.h"
#include <stdio.h>

/**
 * main - Teste la fonction _strlen
 *
 * Return: Toujours 0.
 */
int main(void)
{
	char *str;
	int len;

	str = "My first strlen!";
	len = _strlen(str);
	printf("%d\n", len);
	return (0);
}
