#include <stdio.h>
#include <stdlib.h>
/**
 **_strdup-Entry point for the _strdup function
 *
 *@str:pointer to string
 *
 *Description:duplicate string
 *
 *Return:Always 0 (Success)
 */
char *_strdup(char *str)
{
	char *ar;
	int i;
	int sizer = sizeof(*str) * sizeof(char);

	if (str != NULL)
	{
		ar = malloc(sizeof(*str) * sizeof(char));
		for (i = 0 ; i <= sizer; i++)
		{
			ar[i] = str[i];
		}
	}
	else if (str == NULL)
	{
		return (NULL);
	}

	return (ar);
}
