#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
 * _calloc - Allocates memory for an array of nmemb elements.
 *           The memory is set to zero.
 * @nmemb: Number of elements in the array.
 * @size: Size of each element in bytes.
 *
 * Return: A pointer to the allocated memory, or NULL if the function fails.
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *ptr;

	/* If nmemb or size is 0, return NULL */
	if (nmemb == 0 || size == 0)
		return (NULL);

	/* Allocate memory using malloc */
	ptr = malloc(nmemb * size);
	if (ptr == NULL)
		return (NULL);

	/* Set all memory to zero using memset */
	memset(ptr, 0, nmemb * size);

	return (ptr);
}
