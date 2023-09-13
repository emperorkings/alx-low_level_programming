#include <stdlib.h>
#include <string.h>
#include "main.h"

/**
 * init_dog - Initializes a variable of type struct dog
 * @d: Pointer to struct dog to initialize
 * @name: Name to initialize
 * @age: Age to initialize
 * @owner: Owner to initialize
 *
 * Description: This function initializes a struct dog.
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == NULL)
		return;

	d->name = malloc(strlen(name) + 1);

	if (d->name != NULL)
	{
		strcpy(d->name, name);

	}
	else
	{

	}

	d->age = age;

	d->owner = malloc(strlen(owner) + 1);

	if (d->owner != NULL)
	{
		strcpy(d->owner, owner);
	}
	else
	{

	}
}

