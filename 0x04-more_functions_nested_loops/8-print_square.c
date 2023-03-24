#include "stdio.h"

/**
 *print_square - print squares
 *
 *@size: the input
 */

void print_square(int size)
{
	int x, y;

	scanf("%d", &size);
	if (size > 0)
	{
		for (x = 1; x <= size; x++)
		{
			for (y = 0; y <= size; y++)
			{
				printf("#");
			}

			printf("\n");
		}
	}
}
