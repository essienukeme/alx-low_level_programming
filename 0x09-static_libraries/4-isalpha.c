#include "main.h"

/**
 * _isalpha - Check for alphabet characters
 * @c: an ASCII character
 *
 * Return: 1 if it is an alphabet, 0 if otherwise
 */
int _isalpha(int c)
{
	if ((c >= 97 && c <= 122) || (c >= 65 && c <= 90))
		return (1);
	return (0);
}
