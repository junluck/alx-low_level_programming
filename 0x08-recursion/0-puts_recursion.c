#include <stdio.h>
#include <stdlib.h>
/**
 *_puts_recursion-Entry point for the _puts_recursion function
 *
 *@s:pointer to chars
 *
 *Description:prints out string using recursion.
 */
void _puts_recursion(char *s)
{

	if (*s != '\0')
	{
		putchar(*s);
		_puts_recursion(s + 1);
	};
	if (*s == '\0')
	{
		putchar(10);
	};

}
