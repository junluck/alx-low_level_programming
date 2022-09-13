#include <stdlib.h>
#include <stdio.h>
/**
 *main-Entry point for the main function
 *
 *Description:using a function to print out alphabet
 *
 *Return:Always 0 (Success)
 */
void print_alphabet(void)
{
	int n;
	for(n = 'a' ; n <= 'z' ; n++)
	{
		putchar(n);
	}

}

