#include <stdarg.h>
#include <stdio.h>
#include <stdlib.h>
/**
 *print_numbers-point for print_numbers function
 *
 *@separator:separation character for each
 *
 *Description:function that prints numbers
 *
 *Return: Always 0.
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list ap;
	unsigned int i;
	int sum;

	va_start(ap, n);

	for (i = 0 ; i < n ; i++)
	{
		sum = va_arg(ap, int);
		printf("%i",sum);
		if (separator[0] != '\0')
		{
			printf("%s",separator);
		}
	}
	va_end(ap);
	printf("\n");
}
