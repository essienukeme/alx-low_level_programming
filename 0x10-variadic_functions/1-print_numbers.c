#include "variadic_functions.h"

/**
 * print_numbers - prints a number followed by a separator
 * @separator: the string to separate the numbers
 * @n: number of arguments
 *
 * Return: Null void
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list ap;
	unsigned int i;

	va_start(ap, n);
	for (i = 0; i < n; i++)
	{
		printf("%i", va_arg(ap, int));
		if (i < (n - 1) && separator)
		{
			printf("%s", separator);
		}
	}
	va_end(ap);
	putchar('\n');
}
