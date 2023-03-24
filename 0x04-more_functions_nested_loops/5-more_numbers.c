#include "main.h"

/**
 *more_numbers - is a function for print number
 *from 0 : 14 10 times
 *no return because it`s avoid function
 */
void more_numbers(void)
{
	int x, i;

	for (x = 0; x < 10; x++)
	{
		for (i = 0; i <= 14; i++)
		{
			if (i >= 10)
			{
				_putchar((i / 10) + '0');
			}
			_putchar((i % 10) + '0');
		}

		_putchar('\n');
	}
}
