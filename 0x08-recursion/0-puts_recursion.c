#include "main.h"

/**
 * _puts_recursion - Prints a string to stdout recursively
 * @s: the string to be printed
 *
 * Return: null
 */
void _puts_recursion(char *s)
{
	if (*s == '\0')
	{
		_putchar('\n');
		return;
	}
	_putchar(*s);
	_puts_recursion(++s);
}
