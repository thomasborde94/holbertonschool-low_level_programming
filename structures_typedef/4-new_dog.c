#include "dog.h"
#include <stdio.h>


/**
 * _strcpy - copies a string
 * Description: copies a string
 * @dest: destination
 * @src: source
 * Return: pointer to string copied
 */

char *_strcpy(char *dest, char *src)
{
	int length = 0;
	int i;

	while (src[length])
		length++;

	for (i = 0; src[i]; i++)
		dest[i] = src[i];

	i = length;
	dest[i] = '\0';

	return (dest);
}

/**
 * new_dog - creates a new dog variable
 * Description: creates a new dog variable
 * @name: name of dog
 * @age: age of dog
 * @owner: owner of dog
 * Return: Null if function fails
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *dawg;

	dawg->name = _strcpy(dawg->name, name);
	dawg->age = age;
	dawg->owner = _strcpy(dawg->owner, owner);

	if (dawg == NULL)
		return (NULL);
	else
		return (dawg);
}
