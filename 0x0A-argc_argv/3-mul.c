#include <stdio.h>
#include <stdlib.h>

/**
 *main - print mult of two  args
 *@argc : the counter of arguments
 *@argv : the array of strings contain the arguments
 *Return: 0
 */
int main(int argc, char *argv[])
{
        int i, mult = 1;

        if (argc == 1 || argc == 2)
        {
                printf("Error\n");
                return (1);
        }
        else
        {
                for (i = 1; i < 3; i++)
                {
                        mult *= atoi(argv[i]);
                }

                printf("%d\n", mult);
        }

        return (0);
}
