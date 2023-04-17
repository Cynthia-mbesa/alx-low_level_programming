#include "dog.h"
/**
 *init_dog - initialize a variable of type struct dog
 *struct dog *d - structure description
 *@d: pointer to structure
 *@name: name of dog
 *@age: age of dog
 *@owner: owner of dog
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == NULL)
	{
		return;
	}
	d->name = name;
	d->age = age;
	d->owner = owner;
}
