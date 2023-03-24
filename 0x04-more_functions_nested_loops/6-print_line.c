#include "main.h"

/**
 *print_line -pritn line in termail

 *
 *@n: the input
 */
void print_line(int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		_putchar('_');
	}
	_putchar('\n');
}
