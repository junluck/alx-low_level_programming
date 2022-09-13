#include <stdlib.h>
#include <stdio.h>
/**
 *_isalpha-Entry point for the _isalpha function
 *
 *@c:parameter which is an interger
 *
 *Description:using a function to check if c a lower/uppercase alphabet
 *
 *Return:Always 0 (Success)
 */
int _isalpha(int c)
{
	int n;
	int m;

	for (n = 'a' ; n <= 'z' ; n++)
	{
		if (c == n)
		{
			return (1);
		}

	}

	for (m = 'A' ; m <= 'Z' ; m++)
	{
		if (c == m)
		{
			return (1);
		}
	}

	return (0);
}
