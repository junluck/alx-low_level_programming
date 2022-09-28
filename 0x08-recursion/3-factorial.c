#include <stdio.h>
#include <stdlib.h>
/**
 *factorial-Entry point for the factorial function
 *
 *@n:The int
 *
 *Description:getting factorial of number
 *
 *Return: Always 0.
 */
int factorial(int n)
{
	if (n > 0)
	{
		return (n * (factorial(n - 1)));
	}
	else if (n == 0)
	{
		return (1);
	}

	return (-1);
}
