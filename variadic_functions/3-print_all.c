#include "variadic_functions.h"

/**
 * print_all - prints anything, followed by a new line.
 * @format: a list of types of arguments passed to the function
 */
void print_all(const char * const format, ...)
{
	va_list args;
	unsigned int i = 0;
	char *str;
	char separator = 0;

	va_start(args, format);

	while (format && format[i])  /* Loop through the format string */
	{
		if (separator)
			printf(", ");  /* Print a separator before the next argument */

		switch (format[i])
		{
			case 'c':  /* Handle character */
				printf("%c", va_arg(args, int));
				break;
			case 'i':  /* Handle integer */
				printf("%d", va_arg(args, int));
				break;
			case 'f':  /* Handle float */
				printf("%f", va_arg(args, double));
				break;
			case 's':  /* Handle string */
				str = va_arg(args, char*);
				if (str == NULL)  /* If the string is NULL, print (nil) */
					printf("(nil)");
				else
					printf("%s", str);
				break;
			default:
				break;  /* Ignore any other format specifier */
		}
		separator = 1;  /* Set separator flag after the first print */
		i++;
	}

	printf("\n");
	va_end(args);
}
