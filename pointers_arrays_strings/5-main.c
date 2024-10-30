#include "main.h"
#include <stdio.h>

/**
 * main - teste la fonction rev_string
 *
 * Return: Toujours 0.
 */
int main(void)
{
	char s[10] = "My School";

	printf("%s\n", s);
	rev_string(s);
	printf("%s\n", s);
	return (0);
}
