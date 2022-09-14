#include "main.h"

/**
 * _isalpha - check for alphabet characters
 * @c: ASCII character
 *
 * Return: 1 if an alphabet, 0 if otherwise
 */
int _isalpha(int c)
{
	if ((c >= 97 && c <= 122) || (c >= 65 && c <= 90))
		return (1);
	return (0);
}
