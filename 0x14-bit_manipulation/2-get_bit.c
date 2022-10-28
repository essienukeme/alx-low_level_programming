#include "main.h"

/**
 * get_bit - get bit at nth index
 * @n: binary number
 * @index: nth position
 *
 * Return: value of bit at index, -1 if error occurs
 */

int get_bit(unsigned long int n, unsigned int index)
{
	if (index >= sizeof(n) * 8)
		return (-1);

	return ((n >> index) & 1);
}
