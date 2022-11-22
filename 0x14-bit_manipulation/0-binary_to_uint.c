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
	int j = -1;
	int k = 0;
	int l = -2;
	int sum = 0;
	char c = b[0];
	int result = 1;
	int *ptr = malloc(sizeof(int));
	unsigned int total = 0;

	while(c != '\0')
	{
		c = b[k++];
		sum++;
		j++;
		l++;
	};

	for (i = 0 ; i < sum - 2; i++)
	{	
		if (b[i] == '1')
		{	
			l -= i;
			while (l != 0)
			{
				result*=2;
				l--;
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
