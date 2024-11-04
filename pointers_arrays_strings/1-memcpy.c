#include "main.h"

/**
 * _memcpy - Copies a memory area from source to destination
 * @dest: Pointer to the destination memory area
 * @src: Pointer to the source memory area
 * @n: Number of bytes to copy from `src` to `dest`
 *
 * This function copies `n` bytes from the memory area pointed to by `src`
 * the memory area pointed to by `dest`. It returns the destination pointer.
 *
 * Return: Pointer to the destination memory area `dest`
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	/* Copy each byte from `src` to `dest` */
	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}

	return (dest); /* Return the pointer `dest` */
}
