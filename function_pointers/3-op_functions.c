#include "3-calc.h"

/**
 * op_add - Returns the sum of a and b.
 * @a: First integer.
 * @b: Second integer.
 * Return: Sum of a and b.
 */
int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - Returns the difference of a and b.
 * @a: First integer.
 * @b: Second integer.
 * Return: Difference of a and b.
 */
int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - Returns the product of a and b.
 * @a: First integer.
 * @b: Second integer.
 * Return: Product of a and b.
 */
int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - Returns the result of the division of a by b.
 * @a: First integer.
 * @b: Second integer.
 * Return: Quotient of a and b.
 * Error: If b is 0, return an error.
 */
int op_div(int a, int b)
{
	if (b == 0)
	{
		return (0); /* Will handle division by zero in main */
	}
	return (a / b);
}

/**
 * op_mod - Returns the remainder of the division of a by b.
 * @a: First integer.
 * @b: Second integer.
 * Return: Remainder of a divided by b.
 * Error: If b is 0, return an error.
 */
int op_mod(int a, int b)
{
	if (b == 0)
	{
		return (0); /* Will handle modulo by zero in main */
	}
	return (a % b);
}
