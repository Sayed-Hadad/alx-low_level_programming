#include "main.h"

/**
 *print_numbers - is a function for print number
 *from 0 : 9
 *no return because it`s avoid function
 */
void print_numbers(void)
{
	int i;

	for (i = 0; i <= 9; i++)
		_putchar(i + '0');
	_putchar('\n');
}
