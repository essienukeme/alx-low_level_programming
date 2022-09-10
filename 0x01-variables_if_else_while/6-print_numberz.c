#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - Prints all base 10 digits without char
 *
 * Return: Always 0
 */
int main(void)
{
	int i;

	for (i = 48; i <= 57; i++)
		putchar(i);
	putchar('\n');

	return (0);
}
