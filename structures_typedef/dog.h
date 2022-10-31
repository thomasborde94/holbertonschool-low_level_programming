#ifndef DOG
#define DOG

/**
 * struct dog - defines dog struct
 * @name: name of the dog
 * @age: age of the dog
 * @owner: owner of the dog
 * Description: defines dog struct
 */

struct dog
{
	char *name;
	float age;
	char *owner;
};

/**
 * dog_t - typedef for struct dog
 */
typedef struct dog dog_t;


void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);

#endif
