#include "lists.h"

/**
* add_nodeint - + a new node at the beginning of a link ls
* @head: ptr to the fir node in the ls
* @n: data to insert in that new node
* Return: ptr to the new node, or NULL if it fails
*/
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *nouveau;

	nouveau = malloc(sizeof(listint_t));
	if (!new)
		return (NULL);

	nouveau->n = n;
	nouveau->next = *head;
	*head = nouveau;

	return (nouveau);
}
