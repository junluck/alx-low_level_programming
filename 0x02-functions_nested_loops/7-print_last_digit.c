#include <stdlib.h>
#include <stdio.h>
/**
 *print_last_digit-Entry point for the print_sign function
 *
 *@n:parameter which is an interger
 *
 *Description:using a function to get a remainder
 *
 *Return:Always 0 (Success)
 */
int print_last_digit(int n)
{

	int rem = n / 10;
	int result = (n % rem) * 11;

	return (result);
}
