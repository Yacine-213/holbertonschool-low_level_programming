#include "main.h"

/**
 * set_bit - sets the value of a bit to 1 at a given index
 * @n: pointer to the number to modify
 * @index: the index of the bit to set
 *
 * Return: 1 if it worked, or -1 if an error occurred
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	/* Check if index is out of range for an unsigned long int */
	if (index > 63)
	{
		return (-1);
	}

	/* Use bitwise OR to set the bit at the given index */
	*n |= (1 << index);

	return (1);
}
