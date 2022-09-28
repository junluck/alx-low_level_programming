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
	int size = sizeof(s);
	int counter = 0;
	
	putchar(s[counter]);
	counter++;
		
	if (counter < size)
	{
		_puts_recursion(s);
	{
}
