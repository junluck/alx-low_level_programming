#include <stdlib.h>
#include <stdio.h>
/**
 *
 *print_sign-Entry point for the print_sign function
 *
 *@n:parameter which is an interger
 *
 *Description:using a function to to see if n is pos/neg/equaltozero
 */
int print_sign(int n)
{
	int noting = 48;

	if (n > 0)
	{
		return (+1);	 
	}
	else if (n == 0)
	{	
		printf("0");
		return (0);
		
	}
	else if (n < 0)
	{
		return (-1);
	};

	return (0);
}
