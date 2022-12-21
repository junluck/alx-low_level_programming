#include <stdio.h>
#include <stdlib.h>
/*
 *set_bit- Entry Point for the set Function
 *
 *@n:The int 
 *
 *@index:The index that needs to be changed to 1
 *
 *Description: a function that sets the value of a bit to 1 at a given index.
 *
 *Return:1 if worked or -1 if error
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int ans = *n;
	unsigned long int binary = ans >> index;
	unsigned long int binaryTwo = binary | 1;
	unsigned long int binaryThree = binaryTwo << index;
	unsigned long int binaryFour = ans | binaryThree;
	*n = binaryFour;

	return(1);
}
