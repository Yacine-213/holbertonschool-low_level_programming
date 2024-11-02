#include "main.h"

/**
 * cap_string - Capitalizes all words of a string.
 * @str: The string to be modified.
 *
 * Return: A pointer to the modified string.
 */
char *cap_string(char *str)
{
	int i;
	int capitalize_next = 1; /* Flag to indicate when to capitalize */

	for (i = 0; str[i] != '\0'; i++)
	{
		/* Check if the character is a separator */
		if (str[i] == ' ' || str[i] == '\t' || str[i] == '\n' ||
				str[i] == ',' || str[i] == ';' || str[i] == '.' ||
				str[i] == '!' || str[i] == '?' || str[i] == '"' ||
				str[i] == '(' || str[i] == ')' || str[i] == '{' ||
				str[i] == '}')
		{
			capitalize_next = 1; /* Set flag to capitalize next character */
		}
		else if (capitalize_next && str[i] >= 'a' && str[i] <= 'z')
		{
			str[i] = str[i] - ('a' - 'A'); /* Capitalize the letter */
			capitalize_next = 0; /* Reset flag after capitalization */
		}
		else
		{
			capitalize_next = 0; /* Reset flag if not a separator */
		}
	}
	return (str);
}
