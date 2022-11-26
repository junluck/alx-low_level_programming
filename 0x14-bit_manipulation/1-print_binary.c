#include <stdio.h>
#include <stdlib.h>
/**
 *print_binary-entry point for the print_binary function
 *
 *@n:Base 10 number
 *
 *Description: a function that prints the binary representation of a number.
 *
 *Return: void
 **/
void print_binary(unsigned long int n)
{
	int binaryAns = n;
	char binaryAnd;

	if (n == 0)
	{
		putchar(48);
	}
	else if (n == 1)
	{
		putchar(49);
	}
	else
	{
		while (binaryAns != 0)
		{
			binaryAnd = binaryAns & 1;
			binaryAns >>= 1;
			putchar(binaryAnd + 48);
		}
	}
}
