#include <stdio.h>

/**
 *main - Write a program that prints the alphabet in
 *lowercase, followed by a new line.
 *
 *Return: Always 0.
 */
int main(void)
{
	char s;

	for (s = 'a'; s <= 'z'; s++)
		putchar(s);
	for (s = 'A'; s <= 'Z'; s++)
		putchar(s);

	putchar('\n');

	return (0);
}
