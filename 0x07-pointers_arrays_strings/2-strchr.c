#include "main.h"
#include <stddef.h>

/**
 * _strchr - finds the first occurence of a char in a string
 * @s: the string to be searched
 * @c: the character the be found
 *
 * Return: pointer to the first occurence of the char or null
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
