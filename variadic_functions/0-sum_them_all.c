#include "variadic_functions.h"

/**
 * sum_them_all - Returns the sum of all its parameters.
 * @n: The number of parameters passed to the function.
 *
 * Return: The sum of all the parameters, or 0 if n == 0.
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list args; /* Declare a va_list to access the arguments */
	unsigned int i, sum = 0;

	if (n == 0)
		return (0);

	va_start(args, n); /* Initialize the va_list */

	for (i = 0; i < n; i++)
	{
		sum += va_arg(args, int); /* Access the next argument */
	}

	va_end(args); /* Clean up the va_list */

	return (sum);
}
