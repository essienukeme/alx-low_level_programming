#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - Prints a-z to screen
 *
 * Return: Always 0 (Successful)
 */
int main(void)
{
	char low;

	for (low = 'a'; low <= 'z'; low++)
		putchar(low);
	putchar('\n');
	return (0);
}
