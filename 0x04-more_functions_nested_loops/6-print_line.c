#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 *print_line-Entry point for the print_line function
 *
 *@n:a parameter for an int
 *
 *Description:draws a straight line in the terminal.
 *
 *Return:Always 0 (Success)
 */
void print_line(int n)
{
	int i;
	int under = 95;
	int lineBr = 10;

	for (i = 0 ; i <= n ; i++)
	{
		putchar(under);
	}
	putchar(lineBr);

}
