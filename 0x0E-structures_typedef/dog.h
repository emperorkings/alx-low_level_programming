#ifndef DOG_H
#define DOG_H

/**
 * struct dog - Structure to store basic information about a dog.
 * @name: The name of the dog.
 * @age: The age of the dog.
 * @owner: The owner's name.
 *
 * Description: This structure holds essential data about a dog
 */
struct dog
{
	char *name;	/* Dog's name */
	float age;	/* Dog's age */
	char *owner;	/* Owner's name */
};

/**
 * dog_t - simplifying the declaration of dog variables.
 */
typedef struct dog dog_t;

/**
 * init_dog - Initializes a dog structure with provided values.
 * @d: Pointer to the dog structure.
 * @name: The dog's name.
 * @age: The dog's age.
 * @owner: The owner's name.
 */
void init_dog(struct dog *d, char *name, float age, char *owner);

/**
 * print_dog - Prints the details of a dog.
 * @d: Pointer to the dog structure.
 */
void print_dog(struct dog *d);

/**
 * new_dog - Creates a new dog structure and returns a pointer to it.
 * @name: The dog's name.
 * @age: The dog's age.
 * @owner: The owner's name.
 * Return: A pointer to the newly created dog structure.
 */
dog_t *new_dog(char *name, float age, char *owner);

/**
 * free_dog - Frees memory allocated for a dog structure.
 * @d: Pointer to the dog structure.
 */
void free_dog(dog_t *d);

/**
 * _strcpy - Custom string copy function.
 * @dest: The destination string.
 * @src: The source string.
 * Return: A pointer to the destination string.
 */
char *_strcpy(char *dest, char *src);

/**
 * _strlen - Custom string length function.
 * @s: The input string.
 * Return: The length of the string.
 */
int _strlen(char *s);

#endif

