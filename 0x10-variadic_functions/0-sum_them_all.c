#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>
/**
<<<<<<< HEAD
 * sum_them_all - The entery point
 * @n: inputs
=======
 * sum_them_all - Entry Point
 * @n: variadic inputs
>>>>>>> 9ec144ae8423826208ec9de99cc37cf9139ed628
 * Return: sum
 */
int sum_them_all(const unsigned int n, ...)
{
<<<<<<< HEAD
	va_list valist;
	unsigned int i, sum = 0;

	if (n == 0)
		return (0);

	va_start(valist, n);

=======
	int sum = 0;
	unsigned int i;

	va_list ptr;

	if (n == 0)
		return (0);
	va_start(ptr, n);
>>>>>>> 9ec144ae8423826208ec9de99cc37cf9139ed628
	for (i = 0; i < n; i++)
	{
		sum += va_arg(valist, const unsigned int);
	}

	va_end(valist);

	return (sum);
}
