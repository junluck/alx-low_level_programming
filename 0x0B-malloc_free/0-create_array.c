#include <stdio.h>
#include <stdlib.h>
/**
 **create_array-Entry point for the create_array function
 *
 *@size: size of the array
 *
 *@c:The char
 *
 *Description:creating a array with malloc
 *
 *Return:Always 0 (Success)
 */
char *create_array(unsigned int size, char c)
{
	char *ar;
	unsigned int i;

	if (size > 0)
	{
		ar = malloc(sizeof(c) * size);
		if (ar == NULL)
		{
			printf("Array not allocated");
		}
		for (i = 0 ; i < size ; i++)
		{
			ar[i] = c;
		}
	}
	else if (size == 0)
	{
		return (NULL);
	}

	return (ar);
}
