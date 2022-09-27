#include <stdio.h>
#include <stdlib.h>
/**
 **_strchr-Entry point for the *_strchr function
 *
 *@s:pointer to chars
 *
 *@c:chars
 *
 *Description:  locates a character in a string
 *
 *Return:Always 0 (Success)
 */
char *_strchr(char *s, char c)
{
	int i;
	int total = sizeof(s);

	char *ptr1;

	ptr1 = NULL;

	for (i = 0 ; i <= total ; )
	{
		i++;

		if (s[i] == c)
		{
			ptr1 = &s[i - 1];
		}
	}
	return (ptr1);
}
