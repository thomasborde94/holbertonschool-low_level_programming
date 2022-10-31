#ifndef DOG
#define DOG

/**
 * struct dog - defines dog struct
 * @name: name of the dog
 * @age: age of the dog
 * @owner: owner of the dog
 * Description: defines dog struct
 */

typedef struct dog
{
	char *name;
	float age;
	char *owner;
} dog;


void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);

#endif
