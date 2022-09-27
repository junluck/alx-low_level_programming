#include <stdio.h>
#include <stdlib.h>
/**
 *_strspn-Entry point for the _strspn function
 *
 *@s:pointer to chars
 *
 *@accept:chars to look for
 *
 *Description:locate the chars that are in s and return the amount
 *
 *Return:Always 0 (Success)
 */
unsigned int _strspn(char *s, char *accept)
{
	int i;
	int total = sizeof(s);

	unsigned int counter = 0;

	for (i = 0 ; i <= total ; i++)
	{

		if (accept == &s[i])
		{
			counter = counter + 1;
		}
	}
	return (counter);
}
