#include <stdlib.h>
#include <stdio.h>
/**
 *_islower-Entry point for the _islower function
 *
 *@c:parameter which is an interger
 *
 *Description:using a function to check if its a lowercase alphabet
 *
 *Return:Always 0 (Success)
 */
int _islower(int c)
{
	int n;

	for (n = 'a' ; n <= 'z' ; n++)
	{
		if (c == n)
		{
			return (1);
		}



	}

	return (0);
}
