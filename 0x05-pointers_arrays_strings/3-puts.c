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
	int sum = 0;
	int i = -1;
	char c = str[0];

	while (c != '\0')
	{
		sum++;
		c = str[i++];
		printf("%c",c);
	};
	printf("\n");
}
