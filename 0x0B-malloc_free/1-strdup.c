#include "main.h"
#include <string.h>
#include <stdlib.h>
#include <stdio.h>

/**
 * _strdup - allocates memory space for a copy of the str given as a parameter
 * @str: string to be copied
 *
 * Return: On success, a pointer to the duplicated string;
 * NULL on failure or if insufficient memory is allocated
 */

char *_strdup(char *str)
{
	int size = 0;
	char *strCopy;

	if (str == NULL)
		return (NULL);

	for (; str[size] != '\0'; size++)
		;

	strCopy = malloc(size * sizeof(*str) + 1);

	if (strCopy == 0)
		return (NULL);

	strcpy(strCopy, str);
	return (strCopy);
}
