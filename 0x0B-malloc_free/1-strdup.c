#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 *_strdup - function to duplicate string
 *@str : the source string
 *Return:  length of string
 */
char *_strdup(char *str)
{
	char *copy;
	int i, size;

	if (str == NULL)
	{
		return (NULL);
	}

	size = strlen(str) + 1;
	copy = malloc(strlen(str));
	for (i = 0; i < size; i++)
	{
		if (copy == NULL)
		{
			return (NULL);
		}

		copy[i] = str[i];
	}

	return (copy);

}
