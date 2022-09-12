#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 *main-Entry point for the main function
 *
 *Description:print out base of 10 with putchar
 *
 *Return:Always 0 (Success)
 */
int main(void)
{
	int n;
	int lineBr = 10;

	for (n = '0' ; n <= '9' ; n++)
	{
		putchar(n);
	}

	putchar(lineBr);

	return (0);

}
