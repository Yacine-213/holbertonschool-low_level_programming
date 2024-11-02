#include "main.h"
#include <stdio.h>

/**
 * _strncat - a function that concatenates two strings
 * @dest: a pointer pointing to the destination string
 * @src: a pointer pointing to the source string
 * @n: the maximum number of characters to append from src to dest
 *
 * Return: a pointer to the resulting destination string
 */
char *_strncat(char *dest, char *src, int n)
{
	int i, j;

	/* Find the length of dest */
	for (i = 0; dest[i] != '\0'; i++)
		;

	/* Append up to n characters from src to dest */
	for (j = 0; j < n && src[j] != '\0'; j++, i++)
	{
		dest[i] = src[j];
	}

	/* Ensure the result is null-terminated */
	dest[i] = '\0';

	return (dest);
}
