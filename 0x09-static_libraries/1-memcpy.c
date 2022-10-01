#include "main.h"

/**
 * _memcpy - fills a buffer with a constant for a specified size
 * @dest: the buffer to be filled
 * @src: the char that fills the buffer
 * @n: number of bytes to fill in the memory array of dest
 *
 * Return: returns dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}

	return (dest);
}
