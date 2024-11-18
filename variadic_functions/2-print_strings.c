#include "variadic_functions.h"

/**
 * print_strings - prints strings, followed by a new line.
 * @separator: string to be printed between strings
 * @n: number of strings passed to the function
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list args;
	unsigned int i;
	char *str;

	va_start(args, n);

	for (i = 0; i < n; i++)
	{
		str = va_arg(args, char*);  /* Get the current string */

		if (str == NULL)
			printf("(nil)");  /* If the string is NULL, print (nil) */
		else
			printf("%s", str);  /* Otherwise, print the string */

		if (separator != NULL && i < n - 1)  /* Print separator if it's not NULL */
			printf("%s", separator);
	}

	printf("\n");  /* Print a new line at the end */
	va_end(args);
}
