#include <stdio.h>
#include <stdlib.h>
/**
 *_strlen_recursion-Entry point for the _strlen_recursion function
 *
 *@s:pointer to chars
 *
 *Description:returns number of characters
 *
 *Return: Always 0.
 */
int _strlen_recursion(char *s)
{	int counter;

	if (*s != '\0')
	{
		_strlen_recursion(s + 1);
		counter = sizeof (s + 1);

	};
	if (*s == '\0')
	{
		return (0);
	}

	return (counter);
}
