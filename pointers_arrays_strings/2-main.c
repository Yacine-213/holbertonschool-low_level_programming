#include "main.h"
#include <stdio.h>

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
	char dest[20];
	char *src = "Hello, World!";
	int n = 5;

	_strncpy(dest, src, n);
	printf("Copied string (first %d chars): %s\n", n, dest);

	n = 15;
	_strncpy(dest, src, n);
	printf("Copied string (first %d chars): %s\n", n, dest);

	return (0);
}
