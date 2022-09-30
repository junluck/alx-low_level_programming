#include <stdio.h>
#include <stdlib.h>
/**
 **_memset-Entry point for the *_memset function
 *
 *@s:pointer to chars
 *
 *@b:chars
 *
 *@n:unsigned int
 *
 *Description:fills memory with a constant byte
 *
 *Return:Always 0 (Success)
 */
char *_memset(char *s, char b, unsigned int n)
{
	int i;
	int total = sizeof(char) * n;

	for (i = 0 ; i < total ; i++)
	{
		s[i] = b;
	}
	return (s);
}
