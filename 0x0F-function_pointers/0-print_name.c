#include <stdio.h>
#include <stdlib.h>
/**
 *print_name-Entry point for print_name function
 *
 *@name:pointer to name
 *
 *@f:pointer to function
 *
 *Description: a function that prints a name
 *
 *Return:Always 0 (Success)
 */
void print_name(char *name, void (*f)(char *))
{
	(*f)(name);

}
