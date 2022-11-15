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
unsigned int binary_to_uint(const char  *b)
{
	int i;
	int k = 0;
	int sum = 0;
	char c = b[0];
	int exponent = -2;
	int result;
	result = 1;

	while(c != '\0')
	{
		c = b[k++];
		sum++;
		exponent++;
	}

	for (i = 0 ; i < sum ; i++)
	{
		if (b[i] == '1')
		{
			int difference = sum - i;
			if (difference > 0)
			{
				while (exponent != 0)
				{
					result *=2;
					exponent--;				
				}
			};

		}
	}
	return (result);
	
}
