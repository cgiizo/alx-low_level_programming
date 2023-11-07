#ifndef DOG_H
#define DOG_H

/**
 * struct dog - Defines attributes of a dog
 * @name: Dog's name
 * @age: Dog's age
 * @owner: Dog's owner
 *
 * Description: Defines a structure with
 * elements representing a dog's attributes.
 */

struct dog
{
	char *name;
	float age;
	char *owner;
};

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);

#endif /* DOG_H */
