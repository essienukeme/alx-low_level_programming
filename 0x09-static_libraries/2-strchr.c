#include "main.h"
#include <stddef.h>

/**
 * _strchr - finds the first occurence of a char in a string
 * @s: string to be searched
 * @c: character the be found
 *
 * Return: point to the first occurence of the char or null
 */
char *_strchr(char *s, char c)
{
	int i;

	for (i = 0; s[i] != '\n'; i++)
	{
		if (s[i] == c)
			return (&s[i]);
	}
	return (NULL);
}
