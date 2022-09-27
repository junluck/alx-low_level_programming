#include <stdio.h>
#include <stdlib.h>
/**
 **_strpbrk-Entry point for the *_strpbrk function
 *
 *@s:pointer to chars
 *
 *@accept:chars to look for
 *
 *Description: searches a string for any of a set of bytes.
 *
 *Return:Always 0 (Success)
 */
char *_strpbrk(char *s, char *accept)
{
	int i;
	int total = sizeof(s);
	char *ptr1;

	for (i = 0 ; i <= total ; i++)
	{

		if (accept[i] == s[i])
		{
				ptr1 = &s[i];
		}
	}
	return (ptr1);
}
