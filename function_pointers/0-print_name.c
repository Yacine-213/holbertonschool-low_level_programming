#include "function_pointers.h"
#include <stddef.h> /* For NULL */

/**
 * print_name - Prints a name using a given function.
 * @name: Pointer to the name to print.
 * @f: Pointer to the function used to print the name.
 *
 * Return: Nothing.
 */
void print_name(char *name, void (*f)(char *))
{
	if (name == NULL || f == NULL)
		return;

	f(name);
}
