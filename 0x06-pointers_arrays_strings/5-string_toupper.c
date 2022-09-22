#include <stdio.h>
#include <stdlib.h>
/**
 *string_toupper-Entry point for the reverse_array function
 *
 *@*:the pointer that must be uppercase
 *
 *Description:Convert string to uppercase
 *
 *Return:Always 0 (Success)
 */
char *string_toupper(char *a)
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

	for (k = 0 ; k <= sum ; k++)
	{
		if (a[k] >= 97 && a[k] <= 122)
		{
			a[k] = a[k] - 32;
		}
	}
	return (a);
}
