#include <stdlib.h>
#include <stdio.h>
/**
 *_abs-Entry point for the print_sign function
 *
 *@n:parameter which is an interger
 *
 *Description:using a function to get abosulte value
 *
 *Return:Always 0 (Success)
 */
int _abs(int n)
{

	if (n >= 0)
	{
		int ab = n * 1;

		return (ab);

	}
	else if (n < 0)
	{
		int abs = n * -1;

		return (abs);

	};

	return (0);
}
