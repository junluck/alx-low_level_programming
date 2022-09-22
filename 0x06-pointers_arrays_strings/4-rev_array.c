#include <stdio.h>
#include <stdlib.h>
/**
 *reverse_array-Entry point for the reverse_array function
 *
 *@a:array of intergers
 *
 *@n:second array of chars
 *
 *Description:reverese array of intergers
 *
 *Return:Always 0 (Success)
 */
void reverse_array(int *a, int n)
{
	int i = 0;
	int k;
	int sum = -1;
	char c = a[0];

	while (c != '\0')
	{
		sum++;
		c = a[i++];
	}

	for (k = 0 ; k <= n / 2 ; k++)
	{
		int temp = a[k];

		a[k] = a[n - 1 - k];

		a[n - 1 - k] = temp;
	}
}
