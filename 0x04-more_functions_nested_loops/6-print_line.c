#include "main.h"

/**
 *print_line - prit lines in teminal
 *
 *@n: the input
 */
void print_line(int n)
{
	int i;

	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (i = 1; i <= n; i++)
		{
			_putchar('_');
		}

		_putchar('\n');
	}
}
