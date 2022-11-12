#include <stdio.h>
#include <stdlib.h>
/**
 *binary_to_uint-entry point for binary_to_uint function
 *
 *@b:pointer to chars
 *
 *Description: function that converts a binary number to an unsigned int
 *
 *Return:unsigned int
 **/
unsigned int binary_to_uint(const char *b)
{
	int i;
	int k = 0;
	int sum = 0;
	int power;
	int exponent;
	unsigned int total;
	char c = b[0];

	while(c != '\0')
	{
		c = b[k++];
		sum++;
	}

	exponent = sum - 1;

	for (i = 0 ; i < sum ; i++)
	{
		if (b[i] == '1')
		{ 
			while (exponent != 0)
			{
				power = power * 2;
				exponent--;
			}
		total = total + power;
		}
	}
	return (total);
}
