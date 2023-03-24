#include "main.h"

/**
 *print_most_numbers - is a function for print number
 *from 0 : 9 and Do not print 2 and 4
 *no return because it`s avoid function
 */
void print_most_numbers(void)
{
	int i;

	for (i = 0; i < 10; i++)
	{
		if ((i != 2) && (i != 4))
		{
			_putchar(i + '0');
		}
	}
	_putchar('\n');

}
