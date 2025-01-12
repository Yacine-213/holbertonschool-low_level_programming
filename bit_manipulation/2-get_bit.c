#include "main.h"

/**
 * get_bit - returns the value of a bit at a given index
 * @n: the number from which to get the bit
 * @index: the index of the bit to retrieve
 *
 * Return: the value of the bit at index, or -1 if an error occurs
 */
int get_bit(unsigned long int n, unsigned int index)
{
	/* Check if index is out of range */
	if (index > 63)  /* 63 is the maximum valid index for an unsigned long int */
	{
		return (-1);
	}

	/* Shift the number to the right by 'index' positions and isolate the bit */
	return ((n >> index) & 1);
}
