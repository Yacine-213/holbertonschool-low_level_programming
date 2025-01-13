#include "main.h"

/**
 * flip_bits - returns the number of bits needed to flip to get from n to m
 * @n: the first number
 * @m: the second number
 *
 * Return: the number of bits that need to be flipped
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int xor_result = n ^ m;
	unsigned int bit_count = 0;

	/* Count the number of 1's in the XOR result */
	while (xor_result > 0)
	{
		bit_count += xor_result & 1;  /* Check the least significant bit */
		xor_result >>= 1;             /* Right shift to check the next bit */
	}

	return (bit_coun);
}
