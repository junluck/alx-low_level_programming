#include <stdio.h>
#include <stdlib.h>
/**
 **_memcpy-Entry point for the *_memcpy function
 *
 *@dest:pointer to chars
 *
 *@src: pointer to chars
 *
 *@n:unsigned int
 *
 *Description: copies memory area
 *
 *Return:Always 0 (Success)
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	int i;
	int total = sizeof(char) * n;

	for (i = 0 ; i < total ; i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}
