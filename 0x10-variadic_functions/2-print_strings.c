#include <stdarg.h>
#include <stdio.h>
#include <stdlib.h>
/**
 *print_strings-point for print_strings function
 *
 *@separator:separation character for each
 *
 *@n:number of intergers
 *
 *Description:function that prints strings
 *
 *Return: Always 0.
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list ap;
	unsigned int i;
	int sum;

	va_start(ap, n);


	for (i = 0 ; i < n ; i++)
	{
		sum = va_arg(ap, int);
		printf("%i", sum);
		if (i != n - 1)
		{
			printf("%s", separator);
		}
	}
	va_end(ap);
	printf("\n");
}
