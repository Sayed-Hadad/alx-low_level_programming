#include <stdio.h>

/**
 *main - Write a program that prints the alphabet in
 *lowercase, followed by a new line.
 *
 *Return: Always 0.
 */
int main(void)
{
	char i;

	for (i = 'z'; i >= 'a'; i--)
		putchar(i);

	putchar('\n');

	return (0);
}
