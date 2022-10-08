#include <stdio.h>
#include <stdlib.h>
/**
 **string_nconcat-Entry point for *string_nconcat function
 *
 *@s1:char
 *
 *@s2:char
 *
 *@n:unsigned int
 *
 *Description:concatenates two strings.
 *
 *Return::Always 0 (Success)
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int i;
	unsigned int sizer = sizeof(s1) - 1;

	if (s1 == NULL)
	{
		return (NULL);
	}
	for (i = 0 ; i < n ; i++)
	{
		s1[sizer++] = s2[i];
	}

	return (s1);
}
