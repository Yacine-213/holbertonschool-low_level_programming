#include "main.h"

/**
 * clear_bit - sets the value of a bit to 0 at a given index
 * @n: pointer to the number to modify
 * @index: the index of the bit to clear
 *
 * Return: 1 if it worked, or -1 if an error occurred
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	/* Check if index is out of range for an unsigned long int */
	if (index > 63)
	{
		return (-1);
	}

	/*Use bitwise AND with the negated bitmask to clear thebit atthe given index*/
	*n &= ~(1 << index);

	return (1);
}
