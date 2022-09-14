#include "main.h"

/**
 * print_last_digit - Prints the last dogit of any value
 * @n: real number
 *
 * Return: last value of digit
 */
int print_last_digit(int n)
{
	int last = n % 10;

	if (n < 0)
		last *= -1;
	_putchar(last + '0');

	return (last);
}
