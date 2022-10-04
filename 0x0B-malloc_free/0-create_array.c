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

	if (size > 0)
	{
		ar = malloc(sizeof(c) * size);
	}
	else if (size == 0)
	{
		return (NULL);
	}
	return (ar);
}
