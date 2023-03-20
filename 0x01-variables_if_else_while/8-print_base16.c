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

	for (i = 48; i <= 57; i++)
		putchar(i);
	for (i = 97; i <= 102; i++)
		putchar(i);

	putchar('\n');

	return (0);
}
