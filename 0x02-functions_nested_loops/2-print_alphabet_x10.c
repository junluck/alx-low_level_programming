#include <stdlib.h>
#include <stdio.h>
/**
 *print_alphabet_x10-Entry point for the print_alphabet_x10 function
 *
 *Description:prints 10 times the alphabet, in lowercase, followed by
 *
 *Return:Always 0 (Success)
 */
void print_alphabet_x10(void)
{
	int n;
	int ten;
	int lineBr;

	for (ten = 0 ; ten < 10 ; ten++)
	{
		for (n = 'a' ; n <= 'z' ; n++)
		{
			putchar(n);

		}

		putchar(lineBr);
	}
}
