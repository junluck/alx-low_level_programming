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
	int j = -1;
	int sum = 0;
	char c = b[0];
	int exponent;
	int result;
	int *ptr = malloc(sizeof(int));
	unsigned int total = 0;
	result = 1;
	exponent = -2;
	

	while(c != '\0')
	{
		c = b[k++];
		sum++;
		exponent++;
		j++;
	};

	for (i = 0 ; i < sum - 2; i++)
	{	
		if (b[i] == '1')
		{

			exponent -= i;
			while (exponent > 0)
			{
				result *=2;
				exponent--;

			}
			*ptr = result;
			total += *ptr;
		}
		
	};

	if (b[j - 1] == '1')
	{
		total += 1;
	};

	free(ptr);
	return (total);
	
}
