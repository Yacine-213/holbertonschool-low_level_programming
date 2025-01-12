#include "main.h"

/**
 * print_binary - prints the binary representation of a number
 * @n: the number to print
 */
void print_binary(unsigned long int n)
{
	int i;
	int bit_flag = 0;	/* To track leading zeros */

	/* Check each bit starting from the most significant bit */
	for (i = sizeof(n) * 8 - 1; i >= 0; i--)
	{
		/* Shift the bit to the right to check the current bit */
		if ((n >> i) & 1)
		{
			_putchar('1');	/* Print '1' if the bit is set */
			bit_flag = 1;	/* Set the flag once we encounter the first 1 */
		}
		else if (bit_flag)	/* Print '0' only after encountering the first 1 */
		{
			_putchar('0');
		}
	}

	/* If n is 0, we need to print 0 */
	if (!bit_flag)
	{
		_putchar('0');
	}
}
