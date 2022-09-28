#include <stdio.h>
#include <stdlib.h>
/**
 *_pow_recursion-Entry point for the _pow_recursion function
 *
 *@x:The int
 *
 *@y:The int
 *
 *Description:getting power of number
 *
 *Return: Always 0.
 */
int _pow_recursion(int x, int y)
{
	if (y >= 0)
	{
		_pow_recursion(x ,(y - 1));
		return (x * x);
	}

	return (-1);
}
