#include <stdio.h>
#include <stdlib.h>
/**
 *print_name-Entry point for print_name function
 *
 *@name:pointer to name 
 *
 *@f:pointer to function
 *
 *Description: a function that prints a name
 *
 *Return:Always 0 (Success)
 */
void print_name(char *name, void (*f)(char *))
{

	f = &print_name;
	int i;
	int sum = 0;
	int j = 0;
	while (c != 0)
	{
		c = name[j++];
		sum++;
	}
	for(i = 0 ; i < sum ; i++ )
	{
		printf("%c",name[i]);
	}

}

