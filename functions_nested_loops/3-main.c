#include "main.h"

/**
 * main - Test the _islower function.
 *
 * Return: Always 0.
 */
int main(void)
{
	int r;

	r = _islower('H');
	_putchar(r + '0');
	r = _islower('o');
	_putchar(r + '0');
	r = _islower(108); /* ASCII pour 'l' */
	_putchar(r + '0');
	_putchar('\n');
	return (0);
}