#include "main.h"

/**
 *print_chessboard - function that print a chessboard
 *@a: the array
 *
 *
 *Return: chessboard.
 */
void print_chessboard(char(*a)[8])
{
	int i, j;

	for (i = 0; i < 8; i++)
	{
		for (j = 0; j < 8; i++)
		{
			_putchar(a[i][j]);
		}
	}
}
