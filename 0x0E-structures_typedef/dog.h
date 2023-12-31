#ifndef _DOG_H_
#define _DOG_H_

#include <stdio.h>
/**
 *struct dog - dog properties
 *@name: name
 *@age: age
 *@owner: owner
 */
struct dog
{
	char *name;
	float  age;
	char *owner;
};
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
typedef struct dog dog_t;
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);
char *_strcpy(char *dest, char *src);
int _strlen(char *s);

#endif
