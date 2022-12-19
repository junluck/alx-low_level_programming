#include <stdio.h>
#include <stdlib.h>
/**
 *get_bit-Entry point for get_bit function
 *
 *@n:Int that needs to be indexed
 *
 *@index:index number
 *
 *description: a function that returns the value of a bit at a given index.
 *
 *Return: return index number or -1 if error
 */
int get_bit(unsigned long int n, unsigned int index)
{
	int binary = n >> index;
	int binaryTwo = binary & 1;

	if (binaryTwo == 1 || binaryTwo == 0)
	{
		return(binaryTwo);
	};	
	
	return(-1);
}
