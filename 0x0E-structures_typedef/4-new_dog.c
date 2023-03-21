#include "dog.h"
#include <stdlib.h>

/**
 * new_dog - creates a new struct of type dog
 * @name: the name of the dog
 * @age: the age of a dog
 * @owner: the owner of the dog
 *
 * Return: Nothing
 */
dog_t *new_dog(char *name, float age, char *owner)
{
        int nlen, olen, i;
        dog_t *puppy;

        nlen = olen = 0;
        while (name[nlen++])
                ;
        while (owner[olen++])
                ;
        puppy = malloc(sizeof(dog_t));
        if (puppy == NULL)
                return (NULL);

        puppy->name = malloc(nlen * sizeof(puppy->name));
        if (puppy == NULL)
                return (NULL);
        for (i = 0; i < nlen; i++)
                puppy->name[i] = name[i];

        puppy->age = age;

        puppy->owner = malloc(olen * sizeof(puppy->owner));
        if (puppy == NULL)
                return (NULL);
        for (i = 0; i < olen; i++)
                puppy->owner[i] = owner[i];
        return (puppy);
}
