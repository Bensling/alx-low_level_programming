#ifndef DOG_H
#define DOG_H

/**
 * struct dog - a structure representing a dog
 * @name: a pointer to a character string representing the dog's name
 * @age: the age of the dog as a floating-point number
 * @owner:  the owner
 * Description: This struct is for dog
 */

struct dog
{
	char *name;
	float age;
	char *owner;
};

typedef struct dog dog_t;
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);

#endif /*DOG_H*/
