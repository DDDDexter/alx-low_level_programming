#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
* add_node_end - + a new nd at the end of a lnkd ls
* @head: double ptr > list_t ls
* @str: str to put in the new nd
* Return: addr of the new elem or NULL if it failed
*/
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *appen;
	list_t *temp = *head;
	unsigned int len = 0;

	while (str[len])
		len++;

	appen = malloc(sizeof(list_t));
	if (!appen)
		return (NULL);

	appen->str = strdup(str);
	appen->len = len;
	appen->next = NULL;

	if (*head == NULL)
	{
		*head = appen;
		return (appen);
	}

	while (temp->next)
		temp = temp->next;

	temp->next = appen;

	return (appen);
}
