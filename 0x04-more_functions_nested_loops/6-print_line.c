#include "main.h"

/**
 * print_line - Prints '_' n times
 * @n: number of times '_' should be printed
 *
 * Return: void
 */
void print_line(int n)
{
	if (n <= 0)
		_putchar('\n');
	else
	{
		while (n--)
			_putchar('_');
		_putchar('\n');
	}
}
