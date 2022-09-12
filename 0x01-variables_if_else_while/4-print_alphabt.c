#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 *main-Entry point for the main function
 *
 *Description:printing all letters but e and q
 *
 *Return:Always 0 (Success)
 */
int main(void)
{
	int alp;
	int space = 10;

	for (alp = 'a' ; alp <= 'z' ; alp++)
	{
		if (alp == 'e' || alp == 'q')
		{
			alp++;
		};
		putchar (alp);
	}

	putchar (space);

	return (0);
}
