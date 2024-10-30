#include "main.h"

/**
 * _atoi - Convert a string to an integer
 * @s: The string to convert
 *
 * Return: The integer value of the string, or 0 if no numbers found
 */
int _atoi(char *s)
{
	int result = 0;
	int sign = 1;
	int started = 0;

	while (*s)
	{
		if (*s == '-')
		{
			if (!started)
				sign *= -1;
		}
		else if (*s == '+')
		{
			/* If there are '+' characters, ignore them they are between digits */
			if (started)
				break;
		}
		else if (*s >= '0' && *s <= '9')
		{
			started = 1;
			result = result * 10 + (*s - '0') * sign;
		}
		else if (started)
		{
			/* Stop parsing as soon as non-numeric characters after the number  */
			break;
		}
		s++;
	}

	return (result);
}
