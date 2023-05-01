#include "lists.h"

/**
* add_nodeint_end - + a nd at the end of a link ls
* @head: ptr to the first elem in the ls
* @n: data to insert in the new eleme
* Return: ptr to the new node, or NULL if it fails
*/
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *nouveau;
	listint_t *momen = *head;

	nouveau = malloc(sizeof(listint_t));
	if (!nouveau)
		return (NULL);

	nouveau->n = n;
	nouveau->next = NULL;

	if (*head == NULL)
	{
		*head = nouveau;
		return (nouveau);
	}

	while (momen->next)
		momen = momen->next;

	momen->next = nouveau;

	return (nouveau);
}
