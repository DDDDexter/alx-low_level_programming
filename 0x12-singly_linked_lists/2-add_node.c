#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
* add_node - + a new nd at the begin of a lkd ls
* @head: double ptr > list_t ls
* @str: new str to + in the nd
* Return: addr of the new elem or NULL if it fails
*/
list_t *add_node(list_t **head, const char *str)
{
	list_t *appen;
	unsigned int len = 0;

	while (str[len])
		len++;

	appen = malloc(sizeof(list_t));
	if (!appen)
		return (NULL);

	appen->str = strdup(str);
	appen->len = len;
	appen->next = (*head);
	(*head) = appen;

	return (*head);
}
