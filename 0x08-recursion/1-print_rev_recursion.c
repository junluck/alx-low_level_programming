#include <stdio.h>
#include <stdlib.h>
/**
 *_print_rev_recursion-Entry point for the _print_rev_recursion function
 *
 *@s:pointer to chars
 *
 *Description:prints a string in reverse using recursion
 *
 *Return: Always 0.
 */
void _print_rev_recursion(char *s)
{

	if (*s != '\0')
	{
		_print_rev_recursion(s + 1);
		putchar(*s);
	};
	if (*s == '\0')
	{
		putchar(10);
	}
}
