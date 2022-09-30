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
	char c = s1[0];
	char d = s2[0];

	while (c != '\0')
	{
		sum++;
		c = s1[i++];
	}
	while (d != '\0')
	{
		sumTwo++;
		d = s2[j++];
	}
	for (k = 0 ; k <= sum ; k++)
	{
		if (s1[k] == s2[k])
		{
			return (0);
		}

		else if (s1[0] > s2[0])
		{
			return (15);
		}
		else if (s1[0] < s2[0])
		{
			return (-15);
		}
	}
	return (0);
}
