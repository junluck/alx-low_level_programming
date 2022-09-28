#include <stdio.h>
#include <stdlib.h>
/**
 *_puts_recursion-Entry point for the _puts_recursion function
 *
 *@s-pointer to chars
 *
 *Description:prints a string, followed by a new line.
 *
 *Return: Always 0.
 */
void _puts_recursion(char *s)
{

	if (*s != '\0')
	{
		_puts_recursion(s + 1);
		putchar(*s);
	};
	if (*s == '\0')
	{
		putchar(10);
	}
}
