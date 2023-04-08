#include "main.h"

/**
 *_strncpy - function  copies a string,
 *@dest: the first input
 *@src: the second input
 *@n: number of bytes to copy
 *
 *Return: resault of copy
 */

char *_strncpy(char *dest, char *src, int n)
{
	int counter;

	for (counter = 0; counter < n && src[counter] != '\0'; counter++)
	{
		dest[counter] = src[counter];
	}

	for (; counter < n; counter++)
	{
		dest[counter] = '\0';
	}
	return (dest);
}
