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
	char c = str[0];

	while (c != '\0')
	{
		sum++;
		c = str[i++];
	}

	for (k = 0 ; k <= sum ; k+=2)
	{
		char every = str[k];
		printf("%c" , every);
	}

}
