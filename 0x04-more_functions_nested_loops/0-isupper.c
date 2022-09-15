#include <stdio.h>
#include <stdlib.h>

/**
 *_isupper-Entry point for the _isalpha functio
 *
 *@c:a parameter for an int
 *
 *Description:checking if character is upper case
 *
 *Return:Always 0 (Success)
 */
int _isupper(int c)
{
	int i;

	for(i = 65 ; i <= 90 ; i++ )
	{
		if (c == i)
		{
			return (1);		
		}

		else 
		{
			return (0);
		}
	}
	return (0);
}
