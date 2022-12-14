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
	if (y > 0 && x < 0)
	{
		return (x * _pow_recursion(x, y - 1) * -1);
	}
	else if (y > 0 && x > 0)
	{
		return (x * _pow_recursion(x, y - 1) * -1);
	}
	else if (y < 0)
	{
		return (-1);
	};

	return (1);
}
