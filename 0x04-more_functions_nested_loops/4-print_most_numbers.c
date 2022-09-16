#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 *print_most_numbers-Entry point for the print_most_numbers function
 *
 *Description:printing numbers from 0 to 9 except fo 2 and 4
 *
 *Return:Always 0 (Success)
 */
void print_most_numbers(void)
{
	int count;
	int lineBr = 10;

	for (count = 48 ; count <= 57 ; count++)
	{
		if (count == 50 || count == 52)
		{
			count++;
		}
		putchar(count);

	}
	putchar(lineBr);
}
