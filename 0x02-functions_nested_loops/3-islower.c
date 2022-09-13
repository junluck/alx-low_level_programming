#include <stdlib.h>
#include <stdio.h>
/**
 *int _islower-Entry point for the int _islower function
 *
 *Description:using a function to check if its input is alphabey
 *
 *Return:Always 0 (Success)
 */
int _islower(int c)
{
	int n;
	for (n = 'a' ; n <= 'z' ; n++)
	{
		if(c == n)
		{
			printf("1");
		}

		else {printf("0");};
	}
}
