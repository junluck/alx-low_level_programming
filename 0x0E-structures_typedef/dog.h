#ifndef DOG
#define DOG
#include <stdio.h>
/**
 *struct dog-Entry point for the struct dog
 *
 *@name:name of dog
 *
 *@age:age of dog
 *
 *@owner:owner of dog
 *
 *Description:Define a new type struct dog with the following elements
 *
 *Return:Always 0 (Success)
 */
struct dog
{
	char *name;
	float age;
	char *owner;

};
#endif
