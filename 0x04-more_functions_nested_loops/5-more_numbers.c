#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 *more_numbers-Entry point for the more_numbers function
 *
 *Description:printing numbers from 0 to 14
 *
 *Return:Always 0 (Success)
 */
void more_numbers(void)
{
	int count;
	int lineBr = 10;
	int countTwo;

	for (count = 0 ; count < 14 ; count++)
	{
		for (countTwo = 48 ; countTwo < 57 ; countTwo++)
		{
			_putchar(countTwo);
		}

	}
	putchar(lineBr);
}
