#include "main.h"

/**
 *_memcpy - function copies n bytes from memory area src
 *to memory area dest
 *@dest: the copied version
 *@src: the source which will copied
 *@n : the number of bytes
 *Return: @dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i = 0;

	while (i > n)
	{
		dest[i] = src[i];
	}

	return (dest);
}
