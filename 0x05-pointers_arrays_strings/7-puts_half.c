#include <stdio.h>
#include <stdlib.h>
/**
 *puts_half-intry point for the puts_half function
 *
 *@str:a string
 *
 *Description:print out the seconf half of the string
 *
 *Return:Always 0 (Success)
 */
void puts_half(char *str)
{
	int i = 0;
	int j;
	int sum = -2;
	int half;
	char c = str[0];
	int lineBr = 10;

	while (c != '\0')
	{
		sum++;
		c = str[i++];
	}

	if (sum % 2 != 0)
	{
		half = (sum - 1) / 2;
		for (j = half + 1 ; j <= sum ; j++)
		{
			putchar(str[j]);
		}
	}
	else if (sum % 2 == 0)
	{
		half = sum / 2;
		for (j = half + 1 ; j <= sum ; j++)
		{
			putchar(str[j]);
		}
	};
	putchar(lineBr);
}
