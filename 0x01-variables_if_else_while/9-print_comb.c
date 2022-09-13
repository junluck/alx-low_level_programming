#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 *main-entry point for the main function
 *
 *Description:print out 0 to 1 with comma and space
 *
 *Return:Always 0 (Success)
 */
int main(void)
{
	int num;
	int comma = ',';
	int space = ' ';
	int lineBr = 10;

	for (num = '0' ; num <= '9' ; num++)
	{
		putchar(num);
		putchar(comma);
		putchar(space);
	}

	putchar(lineBr);

	return (0);
}
