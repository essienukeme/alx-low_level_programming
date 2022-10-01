#include "main.h"
#include <ctype.h>

/**
 * _isdigit - Checks for digits
 * @c: ASCII integer
 *
 * Return: 0 if not digit, 1 if otherwise
 */
int _isdigit(int c)
{
	if (isdigit(c))
		return (1);
	return (0);
}
