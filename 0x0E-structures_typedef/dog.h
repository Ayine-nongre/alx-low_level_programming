#ifndef _DOG_H_
#define _DOG_H_

/**
 * dog_t - Typedef for struct dog
 */

typedef struct dog dog_t;

/**
 * struct dog - short description
 * @name: dog's name
 * @age: dog's age
 * @owner: owner's name
 *
 * Description: Description: struct called "dog" that stores its name, its age
 */

struct dog
{
	char *name;
	float age;
	char *owner;
};

#endif
