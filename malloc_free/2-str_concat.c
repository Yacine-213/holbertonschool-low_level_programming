#include <stdlib.h>

/**
 * str_concat - Concatenates two strings into a newly allocated memory space.
 * @s1: The first string.
 * @s2: The second string.
 *
 * Return: A pointer to the concatenated string, or NULL on failure.
 */
char *str_concat(char *s1, char *s2)
{
	char *concat_str;
	unsigned int i = 0, j = 0, len1 = 0, len2 = 0;

	/* Treat NULL strings as empty strings */
	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	/* Calculate lengths of s1 and s2 */
	while (s1[len1] != '\0')
		len1++;
	while (s2[len2] != '\0')
		len2++;

	/* Allocate memory for the concatenated string */
	concat_str = malloc((len1 + len2 + 1) * sizeof(char));
	if (concat_str == NULL)
		return (NULL);

	/* Copy s1 into concat_str */
	while (i < len1)
	{
		concat_str[i] = s1[i];
		i++;
	}

	/* Copy s2 into concat_str */
	while (j < len2)
	{
		concat_str[i] = s2[j];
		i++;
		j++;
	}

	/* Null-terminate the concatenated string */
	concat_str[i] = '\0';

	return (concat_str);
}
