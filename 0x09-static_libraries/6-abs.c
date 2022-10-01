#include "main.h"

/**
 * _abs - computes the absolute value of the integer passed
 * @n: real number
 *
 * Return: the absolute Value
 */
int _abs(int n)
{
	if (n > 0)
		return (n);
	else if (n < 0)
		return (n * -1);
	else
		return (0);
}
