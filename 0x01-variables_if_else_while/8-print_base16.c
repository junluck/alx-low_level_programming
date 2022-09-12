#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 *main-Entry point for the main function
 *
 *Description:print out characters from 0 to f
 *
 *Return:Always 0 (Success)
 */
int main(void)
{
	int alp;
	int alpTwo;
	int lineBr = 10;

	for (alp = '0' ; alp <= '9' ; alp++)
	{
		putchar(alp);
	}
	for (alpTwo = 'a' ; alpTwo <= 'f' ; alpTwo++)
	{
		putchar(alpTwo);
	}
	putchar(lineBr);

	return (0);

}
