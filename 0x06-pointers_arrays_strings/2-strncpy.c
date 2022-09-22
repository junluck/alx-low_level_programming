#include <stdio.h>
#include <stdlib.h>
/**
 **_strncpy-Entry point for the *_strncpy function
 *
 *@dest:array of chars
 *
 *@src:second array of chars
 *
 *@n:number of chars
 *
 *Description:concatenates two strings
 *
 *Return:Always 0 (Success)
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i = 0;
	int j = 0;
	int k;
	int sum = -1;
	int sumTwo = 0;
	char c = dest[0];
	char d = src[0];

	while (c != '\0')
	{
		sum++;
		c = dest[i++];
	}
	while (d != '\0')
	{
		sumTwo++;
		d = src[j++];
	}
	if (n > sumTwo)
	{
		n = sumTwo;
	}
	for (k = 0 ; k < n ; k++)
	{
		dest[k] = src[k];
	}

	return (dest);
}
