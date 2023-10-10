#ifndef DOG_H
#define DOG_H

/*
 * File: dog.h
 * Desc: Header file that defines a new type struct dog.
 */

/**
 * struct dog - A new type describing a dog.
 * @name: Name of the dog.
 * @age: Age of the dog.
 * @owner: Owner of the dog.
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};

/**
 * dog_one - Typedef for struct dog
 */
typedef struct dog dog_one;

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_one *new_dog(char *name, float age, char *owner);
void free_dog(dog_one *d);

#endif
