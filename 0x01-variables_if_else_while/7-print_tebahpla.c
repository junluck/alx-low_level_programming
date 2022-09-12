#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 *main-Entry point for the main function
 *
 *Description:printing out reversed alphabet with putchar
 *
 *Return:Always 0 (Success)
 */
int main(void)
{
	int alph;
	int lineBr = 10;

	for (alph = 'z' ; alph >= 'a' ; alph--)
	{
		putchar(alph);
	}

	putchar(lineBr);

	return (0);
}
