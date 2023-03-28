#include "main.h"

/**
 *print_rev - prints a string, in reverse
 *
 *@s : input
 *Return : void
 */
void print_rev(char *s)
{
	int counter, i, x;
	counter = 0;

	while (s[counter] != '\0')
	{
		counter++;
	}

	x = counter;
	for (i = x - 1; i >= 0; i--)
	{
		_putchar(s[i]);
	}

	_putchar('\n');
}
