#include <stdio.h>
#include <stdlib.h>
/**
 *main-entry point for the main function
 *
 *@argv:argument vector
 *
 *@argc:argument count
 *
 *Description:prints program name
 *
 *Return:Always 0 (Success)
 */
int main(int argc, char *argv[])
{
	int i;
	int counter;

	counter = -1;

	for (i = 0 ; i < argc ; i++)
	{
		if (*argv[i] != '\0')
		{
			counter++;
		}
	}

	printf("%i", counter);
	putchar(10);

	return (0);
}
