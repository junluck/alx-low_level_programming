#include <stdio.h>
#include <stdlib.h>
/**
 *cap_string-Entry point for the cap_string function
 *
 *@a:the pointer that must be uppercase
 *
 *Description:Convert string to uppercase
 *
 *Return:Always 0 (Success)
 */
char *cap_string(char *a)
{
	int i = 0;
	int k;
	char c = a[0];

	while (c != '\0')
	{

		c = a[i++];
		if (c >= 'a' && c <= 'z' )
		{
			a[i++] = c -32;
		}

	}
	return (a);
}
