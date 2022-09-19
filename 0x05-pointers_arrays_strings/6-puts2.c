#include <stdio.h>
#include <stdlib.h>
/**
 *puts2-Entry point for the puts2 function
 *
 *@str:print out ever second character
 *
 *Description:print out the whole string in reverse
 *
 *Return:Always 0 (Success)
 */
void puts2(char *str)
{
	int i = 0;
	int sum = -2;
	int k;
	int j = 0;
	char c = s[0];

	while (c != '\0')
	{
		sum++;
		c = str[i++];
	}

	for (k = 0 ; k <= sum)
	{
		char every = str[k + 2];
		printf("%c" , every);
	}

}
