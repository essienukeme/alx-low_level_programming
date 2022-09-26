#include "main.h"
#include <stdio.h>

/**
 * _memset:fill memory
 * @b: constant value to be passed 
 * @s: address of the memory area
 * @n: number of bytes of the memory
 *
 * Return: the area pointed by s
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i = 0;

	while (i < n)
	{
		*(s + i) = b;
		i++;
	}
	return (s);
}
