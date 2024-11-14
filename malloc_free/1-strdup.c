#include <stdlib.h>

/**
 * _strdup - Returns a pointer to a new string .
 * @str: The string to duplicate.
 *
 * Return: A pointer to the duplicated string.
 */
char *_strdup(char *str)
{
	char *dup_str;
	unsigned int i, len = 0;

	/* Check if str is NULL */
	if (str == NULL)
		return (NULL);

	/* Calculate the length of the input string */
	while (str[len] != '\0')
		len++;

	/* Allocate memory for the duplicate string (+1 for the null terminator) */
	dup_str = malloc((len + 1) * sizeof(char));
	if (dup_str == NULL)
		return (NULL);

	/* Copy the string */
	for (i = 0; i < len; i++)
		dup_str[i] = str[i];
	dup_str[len] = '\0'; /* Null-terminate the duplicated string */

	return (dup_str);
}
