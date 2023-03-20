#include <stdio.h>

/**
 *main - Write a program that prints the alphabet in
 *lowercase, followed by a new line.
 *
 *Return: Always 0.
 */
int main(void)
{
	int nums;
	int i;

	for (nums = 48; nums <= 57; nums++)
	{
		for (i = 1; i < 2; i++)
		{
			putchar(nums);
		}

		if (nums != 57)
			putchar(',');
		putchar(' ');
	}

	putchar('\n');

	return (0);
}
