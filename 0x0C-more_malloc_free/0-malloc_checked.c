#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 *malloc_checked - fun to allocates memory using malloc.
 *@b: size to allocates.
 *
 *Return: Void.
 */
void *malloc_checked(unsigned int b)
{
	void *ptr;
	ptr = malloc(b);
	if (ptr == NULL)
		exit(98);
	return (ptr);
}
