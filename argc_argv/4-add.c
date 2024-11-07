#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include "main.h"

/**
 * is_number - Checks if a string consists only of digits
 * @s: The string to check
 *
 * Return: 1 if the string is a number, 0 otherwise
 */
int is_number(char *s)
{
	int i = 0;

	if (s[i] == '\0') /* Handle the case of an empty string */
		return (0);

	while (s[i])
	{
		if (!isdigit(s[i])) /* Checks if the character is not a digit */
			return (0);
		i++;
	}
	return (1);
}
