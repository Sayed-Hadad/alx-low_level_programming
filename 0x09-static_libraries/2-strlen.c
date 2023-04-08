#include "stdio.h"

/**
 *_strlen - function returns the length of a string
 *@s: the input string
 *
 *Return:  length of string
 */

int _strlen(char *s)
{
	int counter = 0;

	while (s[counter] != '\0')
	{
		counter++;
	}

	return (counter);
}
