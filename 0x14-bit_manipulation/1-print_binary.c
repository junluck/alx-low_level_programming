#include <stdio.h>
#include <stdlib.h>
#include <string.h>
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
	int binaryAns;
	int binaryAnsTwo = n;
	int binaryAnsThree = n;
	int i = 0;
	int j;
	char binaryAnd;

	while (binaryAnsTwo != 0)
	{
		binaryAnsTwo >>= 1;
		i++;
	}

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

		for (j = i - 1 ; j >= 0 ; j--)
		{
			binaryAns = binaryAnsThree >> j;
			binaryAnd = binaryAns & 1;
			putchar(binaryAnd + 48);
		}
	}


}
