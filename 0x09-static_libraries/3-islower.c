#include "main.h"

/**
 * _islower - Check for lowercase characters
 * @c: ASCII character
 *
 * Return: 1 if lowercase, 0 if otherwise
 */
int _islower(int c)
{
	if ((c >= 97) && (c <= 122))
	{
		return (1);
	}
	return (0);
}
