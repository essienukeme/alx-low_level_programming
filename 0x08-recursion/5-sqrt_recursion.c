#include "main.h"

/**
 * _sqrt - Returns the square root of a number
 * @n: sum
 * @y: buffer
 * Return: square root of n
 */
int _sqrt(int n, int y)
{
	if (n == 1)
		return (1);
	else if (y == n || n < 0)
		return (-1);
	else if (y * y == n)
		return (y);
	else
		return (_sqrt(n, y + 1));
}

/**
 * _sqrt_recursion - Returns to the main program in _sqrt()
 * @n: the number
 *
 * Return: Always 0
 */
int _sqrt_recursion(int n)
{
	return (_sqrt(n, 1));
}
