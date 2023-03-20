#ifndef _DOG_H_
#define _DOG_H_

/**
 * struct dog - short description
 * @name: dog's name
 * @age: dog's age
 * @owner: owner's name
 * dog_t - Typedef for struct dog
 *
 * Description: Description: struct called "dog" that stores its name, its age
 */

typedef struct dog dog_t;

struct dog
{
	char *name;
	float age;
	char *owner;
};

#endif
