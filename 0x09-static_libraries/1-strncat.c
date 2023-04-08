#include "main.h"

/**
 *_strncat -  function  concatenates two strings
 *
 *
 *@dest: first input
 *@src: second input
 *@n: This is the number bytes from src
 *
 *Return: the resautl
 */
char *_strncat(char *dest, char *src, int n)
{
	int index, counter;

	for (index = 0; dest[index] != '\0'; index++)
	;
	for (counter = 0; counter < n && src[counter] != '\0'; counter++)
	{
		dest[index] = src[counter];
		index++;
	}

	if (counter < n)
	{
		dest[index] = '\0';
	}

	return (dest);
}
