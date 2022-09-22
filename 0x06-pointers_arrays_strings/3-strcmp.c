#include <stdio.h>
#include <stdlib.h>
/**
 * _strcmp-Entry point for the  _strcmp function
 *
 *@s1:array of chars
 *
 *@s2:second array of chars
 *
 *Description:compare two strings
 *
 *Return:Always 0 (Success)
 */
int _strcmp(char *s1, char *s2)
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
	for (k = 0 ; k = sum ; k++)
	{
		if (dest[k] == src[k])
		{
			return (0);	
		}
		else if (dest[k] > src[k])
		{
			return (15);
		}
		else if (dest[k] < src[k])
		{
			return (-15)
		}
	}
	return (0);
}
