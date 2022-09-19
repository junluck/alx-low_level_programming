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
	int i = 0;
	char c = s[0];

	while (c != '\0')
	{
		sum++;
		c = s[i++];
		printf("%c",c)
	};
}
