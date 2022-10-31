#include "dog.h"
#include <stdlib.h>

/**
 * init_dog - initializes a struct dog variable
 * Description: initializes a variable of type struct dog
 * @d: name of variable
 * @name: name of dog
 * @age: age of dog
 * @owner: owner of dog
 * Return: void
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d != NULL)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}
