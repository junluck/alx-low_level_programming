#include <stdio.h>
#include <stdlib.h>
/**
 *_strlen-Entry point for the _strlen function
 *
 *@s:get the length of this string
 *
 *Description:get the length of the string
 *
 *Return:Always 0 (Success)
 */
int _strlen(char *s)
{
	int sum = -1;
	int i = 0;
	char c = s[0];

	while (c != '\0')
	{
		sum++;
		c = s[i++];
	}
	return (sum);
}
