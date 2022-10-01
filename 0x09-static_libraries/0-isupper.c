#include "main.h"
#include <ctype.h>

/**
 * _isupper - checks for uppercase characters
 * @c: ASCII character
 *
 * Return:1 if uppercase, 0 if otherwise
 */
int _isupper(int c)
{
	if (isupper(c))
		return (1);
	return (0);
}
