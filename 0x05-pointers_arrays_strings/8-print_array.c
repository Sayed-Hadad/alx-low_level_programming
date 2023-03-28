#include "main.h"

/**
 *puts - prints every char in string
 *
 *@str: the input
 */
void print_array(int *a, int n)
{
	int i;
	for (i = 0; i < n; i++)
	{
		if (i == 0)
			printf("%d", a[i]);
		else
			printf(", %d", a[i]);
	}

	_putchar('\n');
}
