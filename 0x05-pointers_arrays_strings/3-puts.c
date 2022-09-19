#include <stdio.h>
#include <stdlib.h>
/**
 *_puts-Entry point for the _puts function
 *
 *@str:print out string
 *
 *Description:print out the whole string
 *
 *Return:Always 0 (Success)
 */
void _puts(char *str)
{
	int sum = -1;
	int k;
	char c = str[0];
	int lineBr = 10;

	while (c != '\0')
	{
		sum++;
	}
	for(k = 0 ; k <= sum ; k++)
	{
		c = str[k];
		putchar(c);
	}
	putchar(lineBr);
}
