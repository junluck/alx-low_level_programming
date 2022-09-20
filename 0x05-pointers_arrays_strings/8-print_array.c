#include <stdio.h>
#include <stdlib.h>
/**
 *print_array-entry point for the print_array function
 *
 *@a:pointer of a array
 *
 *@n:the number of elements in array
 *
 *Description:print out the who;e array 
 *
 *Return:Always 0 (Success)
 */
void print_array(int *a, int n)
{
	int i;
	int lineBr = 10;

	for (i = 0 ; i < n - 1 ; i++)
	{
		printf("%i, ",a[i]);
	}
	printf("%i",a[n-1]);
	putchar(lineBr);

}
