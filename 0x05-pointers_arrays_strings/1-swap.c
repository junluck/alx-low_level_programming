#include <stdio.h>
#include <stdlib.h>
/**
 *swap_int-Entry point for the swap_int function
 *
 *@a:The int thats going to swap with b
 *
 *@b:The int thats going to swap with a
 *
 *Description:assigning 98 to a pointer
 *
 *Return:Always 0 (Success)
 */
void swap_int(int *a, int *b)
{
	int n;
	n = *a;
	*a = *b;
	*b = n;
	
}
