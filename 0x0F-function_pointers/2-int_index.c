#include "function_pointers.h"
#include <stddef.h>

/**
 * int_index -searches for an integer
 * @array: an integer array of size size
 * @size: the size of the array
 * @cmp: the compare function to be used
 *
 * Return: the index of the first element for which
 * the cmp function does not return 0
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (array == NULL || size <= 0 || cmp == NULL)
		return (-1);

	for (i = 0; i < size; i++)
	{
		if (cmp(array[i]) != 0)
			return (i);
	}

	return (-1);
}
