#include <stdio.h>
#include <stdlib.h>
/**
 *rev_string-Entry point for the rev_string function
 *
 *@s:print out string
 *
 *Description:print out the whole string in reverse
 *
 *Return:Always 0 (Success)
 */
void rev_string(char *s)
{
	int i = 0;
	int sum = -2;
	int k;
	char c = s[0];
	int lineBr = 10;

	while (c != '\0')
	{
		sum++;
		c = s[i++];
	}
	for (k = 0 ; k < sum ;)
	{
		c = s[k++];
		putchar(c);
	}
	for (k = sum ; k >= 0 ;)
	{
		c = s[k--];
		putchar(c);
	}
	putchar(lineBr);
}
