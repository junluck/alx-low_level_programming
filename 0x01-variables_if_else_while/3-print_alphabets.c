#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/*
 **main-Entry point for the main function
 *
 *Description:Printing out alphabet from a to Z
 *
 *Return:Always 0 (Success)
 **/
int main(void)
{
	int alph;
	int space = 10;

	for (alph = 'a' ; alph <= 'Z' ; alph++)
	{
		putchar (alph);
	}
	putchar (space);

	return (0);
}
