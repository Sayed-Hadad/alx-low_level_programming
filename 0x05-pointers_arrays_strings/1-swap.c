#include "main.h"

/**
 *swap_int - swap value for to int.
 *
 *@a : first input.
 *@b : second input.
 */

void swap_int(int *a, int *b)
{
	int temp;

	temp = *a;
	*a = *b;
	*b = temp;
}
