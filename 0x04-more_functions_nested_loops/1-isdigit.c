#include <stdio.h>
#include <stdlib.h>

/**
 *_isdigit-Entry point for the _isdigit function
 *
 *@c:a parameter for an int
 *
 *Description:checking if character is number
 *
 *Return:Always 0 (Success)
 */
int _isdigit(int c)
{
	int i;
	int total;

	for (i = 48 ; i <= 57 ; i++)
	{
		if (c == i)
		{
	   		total = 1;
		}

		else if (c != i)
		{
			total = 0;
		};
	
	}
	if (total == 1)
	{
		return (1);
	}
	else if (total == 0)
	{
		return (0);
	};

	return (0);
}
