#include "dog.h"
/**
 *free_dog - a function that frees dogs
 *dog_t - structure
 *@d: pointer to the structure
 */
void free_dog(dog_t *d)
{
	if (d == NULL)
	{
		return;
	}
	free(d->name);
	free(d->owner);
	free(d);
}
