#include "main.h"

/**
 *main - check the code
 *
 *Return: Always 0.
 */
int main(void)
{
	int i;

	print_diagonal(0);
	print_diagonal(2);
	print_diagonal(10);
	print_diagonal(-4);
	for(i = 1 ; i <= 10 ; i++)
		print_diagonal(i);
	return (0);
}
