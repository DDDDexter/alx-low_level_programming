#include <stdlib.h>
#include "dog.h"

/**
* _strlen - ret len of a str
* @s: str > eval
* Return:len of the str
*/
int _strlen(char *s)
{
	int x;

	x = 0;

	while (s[x] != '\0')
	{
		x++;
	}

	return (x);
}

/**
* *_strcpy - cp str pnt to by src
* inclu the terminating null byte (\0)
* to the buffer ptd to by dest
* @dest: ptr to the buffer in which we cp the str
* @src: str to be cpd
* Return: the ptr to dest
*/
char *_strcpy(char *dest, char *src)
{
	int len, x;

	len = 0;

	while (src[len] != '\0')
	{
		len++;
	}

	for (x = 0; x < len; x++)
	{
		dest[x] = src[x];
	}
	dest[x] = '\0';

	return (dest);
}

/**
* new_dog - crea a new dog
* @name: nm of the dog
* @age: age of the dog
* @owner: owner of the dog
* Return: ptr to the new dog (Success), NULL otherwise
*/
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *dog;
	int len1, len2;

	len1 = _strlen(name);
	len2 = _strlen(owner);

	dog = malloc(sizeof(dog_t));
	if (dog == NULL)
		return (NULL);

	dog->name = malloc(sizeof(char) * (len1 + 1));
	if (dog->name == NULL)
	{
		free(dog);
		return (NULL);
	}
	dog->owner = malloc(sizeof(char) * (len2 + 1));
	if (dog->owner == NULL)
	{
		free(dog);
		free(dog->name);
		return (NULL);
	}
	_strcpy(dog->name, name);
	_strcpy(dog->owner, owner);
	dog->age = age;

	return (dog);
}
