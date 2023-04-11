#include <stdio.h>

/**
 *main - print the name of program
 *@argc : the counter of arguments
 *@argv : the array of strings contain the arguments
 * Return: 0
 */
int main(int argc, char **argv)
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[0]);
	}

	return (0);
}
