#include <stdio.h>
#include <stdlib.h>
/**
 **_strcat-Entry point for the *_strcat function
 *
 *@dest:array of chars
 *
 *@src:second array of chars
 *
 *Description:concatenates two strings
 *
 *Return:Always 0 (Success)
 */
char *_strcat(char *dest, char *src)
{
	int i = 0;
	int j = 0;
	int k;
	int l;
	int m;
	int sum = -2;
	int sumTwo = -1;
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
	int total = sum + sumTwo;
	
	for (k = 0 ; k < sum ; k++)
	{
		dest[k] = dest[k];
	}
	for (l = sum + 1 ; l < total ; l++)
	{
		dest[l] = src[m++];
	}
	return (dest);
}
