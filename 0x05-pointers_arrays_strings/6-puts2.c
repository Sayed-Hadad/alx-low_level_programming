#include "main.h"

/**
 *puts2 - prints every char in string
 *
 *@str: the input
 */
void puts2(char *str)
{
	int counter = 0, i;

	while (str[counter] != '\0')
	{
		counter++;
	}

	for (i = 0; i <= counter; i += 2)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
