#include "main.h"

/**
 *print_diagonal - print diagonal line on the terminal.
 *
 *@n: the input
 */
void print_diagonal(int n)
{
	int column, row;

	if (n > 0)
	{
		for (column = 1; column <= n; column++)
		{
			for (row = 1; row <= n; row++)
			{
				if (column == row)
				{
					_putchar(92);
					break;
				}
				_putchar(' ');
			}
			_putchar('\n');
		}
	}
	else
	{
		_putchar('\n');
	}
}
