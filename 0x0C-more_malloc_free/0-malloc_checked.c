#include "main.h"
#include <stdlib.h>
/**
 * malloc_checked - this is a safe way of mallocing
 * @b: the number of bytes to be malloced
 *
 * Return: Void
 */

void *malloc_checked(unsigned int b)
{
	void *ptr;

	ptr = malloc(b);
	if (ptr == NULL)
		exit(98);
	return (ptr);
}
