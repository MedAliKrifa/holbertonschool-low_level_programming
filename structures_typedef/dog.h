#ifndef _DOG_H
#define _DOG_H
/**
 * struct dog - dog is the information of a dog
 * @owner: owner name of type char (pointer)
 * @age: age of dog type float
 * @name: name of dog of type char (pointer)
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
typedef struct dog dog_t;
dog_t *new_dog(char *name, float age, char *owner);
int _strlen(char *s);
char *_strcpy(char *dest, char *src);
void free_dog(dog_t *d);
#endif
