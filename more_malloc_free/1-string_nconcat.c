#include "main.h"
#include <stdlib.h>

/**
 * string_nconcat - Concatenates two strings.
 * @s1: The first string.
 * @s2: The second string.
 * @n: The number of bytes to concatenate from s2.
 *
 * Return: A pointer to the newly allocated memory containing s1
 *         NULL if the function fails.
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *concat;
	unsigned int i, j, len1, len2;

	/* Handle NULL inputs */
	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	/* Calculate the length of s1 */
	for (len1 = 0; s1[len1] != '\0'; len1++)
		;

	/* Calculate the length of s2 */
	for (len2 = 0; s2[len2] != '\0'; len2++)
		;

	/* If n is greater than or equal to the length of s2 */
	if (n >= len2)
		n = len2;

	/* Allocate memory for the new concatenated string */
	concat = malloc(sizeof(char) * (len1 + n + 1));
	if (concat == NULL)
		return (NULL);

	/* Copy s1 into concat */
	for (i = 0; i < len1; i++)
		concat[i] = s1[i];

	/* Copy the first n bytes of s2 into concat */
	for (j = 0; j < n; j++)
		concat[i + j] = s2[j];

	/* Null-terminate the concatenated string */
	concat[i + j] = '\0';

	return (concat);
}
