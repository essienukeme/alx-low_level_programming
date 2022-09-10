#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - Prints all possible combo of single-digit numbers without printf
 *
 * Return: Always 0
 */
int main(void)
{
	int i;

	for (i = 48; i <= 57; i++)
	{
		putchar(i);
		if (i == 57)
			break;
		putchar(',');
		putchar(' ');
	}
	putchar('\n');

	return (0);
}
