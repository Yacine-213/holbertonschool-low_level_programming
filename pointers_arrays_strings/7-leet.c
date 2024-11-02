#include "main.h"

/**
 * leet - encodes a string into 1337 (leet speak)
 * @s: the string to encode
 *
 * Return: the encoded string
 */
char *leet(char *s)
{
	int i;
	char leet_map[256] = {0}; /* Create a mapping array */

	/* Fill the mapping array */
	leet_map['a'] = '4';
	leet_map['A'] = '4';
	leet_map['e'] = '3';
	leet_map['E'] = '3';
	leet_map['o'] = '0';
	leet_map['O'] = '0';
	leet_map['t'] = '7';
	leet_map['T'] = '7';
	leet_map['l'] = '1';
	leet_map['L'] = '1';

	for (i = 0; s[i] != '\0'; i++)
	{
		if (leet_map[(unsigned char)s[i]] != 0) /* Only if there's a mapping */
		{
			s[i] = leet_map[(unsigned char)s[i]];
		}
	}
	return (s);
}
