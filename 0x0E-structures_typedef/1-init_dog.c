#include <stdlib.h>
#include "dog.h"

/**
 * init_dog - initialize a variable of type struct dog
 *@d: array
 *@name: a pointer to a character string representing the name
 *@age: the age of the floating-point number
 *@owner: owner
 * Description: This struct is for dog
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == NULL)
		return;

	else
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}

}
