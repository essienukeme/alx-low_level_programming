#include "main.h"

/**
 * _memcpy - Fills a buffer with a constant of specified size
 * @dest: the buffer to be filled
 * @src: the char that will be used to fill the buffer
 * @n: the number of bytes to fill in the memory array of dest
 *
 * Return: return dest
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
