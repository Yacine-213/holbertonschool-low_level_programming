#include "main.h"

/**
 * _strspn - gets the length of a prefix substring
 * @s: the string to be searched
 * @accept: the string containing the list of characters to match
 * Return: the number of bytes in the initial segment of s
 *
 * which consist only of bytes from accept
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int count = 0; /* Counter for the number of matching bytes */
	int i, j;

	/* Loop through each character in the string s */
	for (i = 0; s[i] != '\0'; i++)
	{
		/* Check if the character s[i] is in the string accept */
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (s[i] == accept[j])
			{
				count++; /* Increment count if there's a match */
				break; /* Exit the inner loop */
			}
		}
		/* If s[i] is not found in accept, break the loop */
		if (accept[j] == '\0')
			break;
	}

	return (count);/* Return the count of matching bytes */
}
