#include <stdio.h>

/**
 * fizz_buzz - Imprime les nombres de 1 à 100 selon les règles Fizz-Buzz
 */
void fizz_buzz(void)
{
	int i;  /* Déclaration de la variable en dehors de la boucle for */

	for (i = 1; i <= 100; i++)
	{
		if (i % 3 == 0 && i % 5 == 0)
			printf("FizzBuzz");
		else if (i % 3 == 0)
			printf("Fizz");
		else if (i % 5 == 0)
			printf("Buzz");
		else
			printf("%d", i);

		if (i < 100)
			printf(" ");
	}
	printf("\n");
}
