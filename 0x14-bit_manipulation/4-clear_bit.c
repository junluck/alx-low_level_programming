#include <stdio.h>
#include <stdlib.h>
/*
 *clear_bit-entry point for clear_bit function
 *
 *@n: long int that needs to be index
 *
 *@index:index number
 *
 *description:a function that sets the value of a bit to 0 at a given index.
 *
 *Return:-1 if error or 1 if worked
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int ans = *n;
	unsigned long int binary = ans >> index;
	unsigned long int binaryTwo = binary & 1;
	unsigned long int binaryThree = binaryTwo << index;
	unsigned long int binaryFour = ans | binaryThree;

	*n = binaryFour;

	return (1);
}
