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
	int i;
	int binaryAns;
	int half;

	for (i = n ; i > 0 ; i * 0.5)
	{
		half = i * 0.5;
		binaryAns = i - (half * 2);
		if (binaryAns == 1)
		{
			putchar(49);
		}
		else if (binaryAns == 0)
		{
			
			putchar(48);

		}
	}

}
