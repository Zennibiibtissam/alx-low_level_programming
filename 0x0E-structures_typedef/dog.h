#ifndef __DOG_H__
#define __DOG_H__

/**
  * struct dog - Structure.
  * @name: Name.
  * @age: Age.
  * @owner: Owner.
  */
struct dog
{
	char *name;
	float age;
	char *owner;
};

/**
  * dog_t - Typedef for struct dog.
  */
typedef struct dog dog_t;
dog_t *new_dog(char *name, float age, char *owner);
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
void free_dog(dog_t *d);
#endif
