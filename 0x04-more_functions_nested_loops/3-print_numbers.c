#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 *print_numbers-Entry point for the _isdigit function
 *
 *Description:printing numbers from 0 to 9
 *
 *Return:Always 0 (Success)
 */
void print_numbers(void)
{
	int count;
	int lineBr = 10;

	for (count = 48 ; count <= 57 ; count++)
	{
		putchar(count);

	}
	putchar(lineBr);
}
