#include <stdio.h>
#include <stdlib.h>
/**
 **malloc_checked-Entry point for *malloc_checked function
 *
 *@b:unsigned int
 *
 *Description:allocate memory with malloc
 *
 *Return::Always 0 (Success)
 */
void *malloc_checked(unsigned int b)
{

	int *ptr1 = malloc(b);

	if (ptr1 == NULL)
	{
		exit(98);
	}

	return (ptr1);
}
