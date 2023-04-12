#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 *_strdup - function to duplicate string
 *@str : the source string
 * Return:  length of string
 */

char *_strdup(char *str)
{
	char *copy = malloc(strlen(str));

	if (copy == NULL)
	{
		return (NULL);
	}

	strcpy(copy, str);
	return (copy);
}
