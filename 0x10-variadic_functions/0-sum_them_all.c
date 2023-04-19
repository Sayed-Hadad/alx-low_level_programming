#include <stdarg.h>
#include "variadic_functions.h"

/**
 *sum_them_all - function to sum infinity nums
 *@n : number of nums
 *return : sum
 */
int sum_them_all(const unsigned int n, ...)
{
	int sum = 0, i;

	va_list ptr;
	va_start(ptr, n);
	for (i = 0; i < n; i++)
	{
		sum += va_arg(ptr, int);
	}

	return (sum);
};
