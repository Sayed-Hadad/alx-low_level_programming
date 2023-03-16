#include <stdio.h>
int main(void)
{
    char char_size;
    int int_size;
    long int l_i_size;
    long long int lli_size;
    float float_size;

    printf("Size of a char: %zu byte(s)\n", sizeof(char_size));
    printf("Size of an int: %zu byte(s)\n", sizeof(int_size));
    printf("Size of a long int: %zu byte(s)\n", sizeof(l_i_size));
    printf("Size of a long long int: %zu byte(s)\n", sizeof(lli_size));
    printf("Size of a float: %zu byte(s)\n", sizeof(float_size));
    return (0);
}

