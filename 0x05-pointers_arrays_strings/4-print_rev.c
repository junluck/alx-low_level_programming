#include <stdio.h>
#include <stdlib.h>
/**
 *print_rev-Entry point for the print_rev function
 *
 *@s:print out string
 *
 *Description:print out the whole string in reverse
 *
 *Return:Always 0 (Success)
 */
void print_rev(char *s)
{
	int i = 0;
	int sum = -1;
	int k;
	char c = s[0];
	int lineBr = 10;

	while (c != '\0')
	{
		sum++;
		c = s[i++];
	}
	for (k = sum ; k >= 0 ;)
	{
		c = s[k--];
		putchar(c);
	}
	putchar(lineBr);
}
