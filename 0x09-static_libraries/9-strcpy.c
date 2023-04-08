#include "main.h"

/**
 **_strcpy - copies the string
 *@dest: pointer
 *@src: string to be copied
 *Return: the pointer to dest
 */
char *_strcpy(char *dest, char *src)
{
	int counter, i;

	counter = 0;

	while (src[counter] != '\0')
	{
		counter++;
	}

	for (i = 0; i < counter; i++)
	{
		dest[i] = src[i];
	}

	dest[i] = '\0';

	return (dest);
}
