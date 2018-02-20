#ifndef DOG_H
#define DOG_H

typedef struct dog
{
	char *name;
	float age;
	char *owner;
} DOG;
typedef struct dog dog_t;
int _putchar(char c);
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
#endif