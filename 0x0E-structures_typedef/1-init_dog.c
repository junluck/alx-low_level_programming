#include <stdio.h>
#include <stdlib.h>
/**
 *init_dog-Entry point for the init_dog function
 *
 *@d:pointer to dog
 *
 *@name:pointer to name of dog
 *
 *@age:age of dog in float
 *
 *@owner:pointer to owner
 *
 *Description:initialize a variable of type struct dog
 *
 *Return:Always 0 (Success)
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	struct dog 
	{
		char *name;
		float age;
		char *owner;
	};
	d->name = name;
	d->age = age;
	d->owner = owner;
}
