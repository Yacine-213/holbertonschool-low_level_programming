#include <stdlib.h>

/**
 * create_array - Creates an array of chars, initialized with a specific char.
 * @size: The size of the array.
 * @c: The char to initialize the array with.
 * Return: A pointer to the array, or NULL if size is 0
 */
char *create_array(unsigned int size, char c)
{
	char *array;
	unsigned int i;

	/* Check if size is 0 */
	if (size == 0)
		return (NULL);

	/* Allocate memory for the array */
	array = malloc(size * sizeof(char));
	if (array == NULL) /* Check if malloc fails */
		return (NULL);

	/* Initialize each element with the specified character */
	for (i = 0; i < size; i++)
		array[i] = c;

	return (array);
}
