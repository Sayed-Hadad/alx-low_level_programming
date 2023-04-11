#include <stdio.h>

/**
 *main - print the args
 *@argc : the counter of arguments
 *@argv : the array of strings contain the arguments
 *Return: 0
 */
int main(int argc, char *argv[])
{
	int i;

	for (i = 1; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}

	return (0);
}
