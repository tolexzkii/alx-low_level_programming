#ifndef _DOG_H_
#define _DOG_H_

/**
 * dog_type - Typedef for struct dog
 */
typedef struct dog dog_type;

/**
 * struct dog - struct for dog information
 * @name: dog name
 * @age: dog age
 * @owner: dog owner
 * Description: struct called 'dog' that stores its name, age and owner
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};

#endif
