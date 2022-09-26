#include "main.h"
#include <stdio.h>

/**
 * _memset: fill the memory
 * @b: the constant to be passed
 * @s: the address of the memory area
 * @n: the number of bytes of the memory
 *
 * Return: The area pointed by s
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
		s[i] = b;

	return (s);
}
