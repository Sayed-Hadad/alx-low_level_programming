#include <stdio.h>
#include <stdlib.h>

/**
 *create_array - prints buffer in hexa
 *@c: the char will print
 *@size: the size of the memory to print
 *
 *Return: s.
 */
char *create_array(unsigned int size, char c)
{
	char *s;
	unsigned int i;

	if (size == 0)
	{
		return (NULL);
	}

	s = malloc((size) * sizeof(char));
	if (s == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < size; i++)
	{
		s[i] = c;
	}

	s[i] = '\0';
	return (s);
}
