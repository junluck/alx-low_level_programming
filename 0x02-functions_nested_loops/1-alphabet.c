#include <stdlib.h>
#include <stdio.h>
/**
 *print_alphabet-Entry point for the print_alphabet function
 *
 *Description:using a function to print out alphabet
 *
 *Return:Always 0 (Success)
 */
void print_alphabet(void)
{
	int n;
	int lineBr = 10;

	for (n = 'a' ; n <= 'z' ; n++)
	{
		putchar(n);
	}

	putchar(lineBr);

}

