#include <stdarg.h>
#include <string.h>
#include <stdlib.h>
/**
 *sum_them_all-Entry point for sum_them_all function
 *
 *@n:Number of ints
 *
 *Description: function that returns the sum of all its parameters.
 *
 *Return: Always 0.
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list ap;
	int i, sum;

	va_start(ap, n);

	for (i = 0 ; i < n ; i++)
	{
		sum += va_arg(ap, int);
	}
	va_end(ap);
	return (sum);
}
