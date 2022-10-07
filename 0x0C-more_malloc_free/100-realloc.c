#include <stdio.h>
#include <stdlib.h>
#include "main.h"
#include <string.h>

/**
 * _realloc - function to reallocate a block of memory
 * @ptr: pointer to the previously allocated memory
 * @old_size: size of the previous memory
 * @new_size: new size in bytes
 *
 * Return: pointer to the reallocated memory
 */

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	int *tmp;

	if (new_size == old_size)
		return (ptr);
	tmp = realloc(ptr, new_size);
	if (tmp == NULL)
		return (NULL);

	return (tmp);
}
