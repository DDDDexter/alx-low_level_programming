#include "lists.h"

/**
* free_listint2 - frees a link ls
* @head: ptr to the listint_t list to be freed
*/
void free_listint2(listint_t **head)
{
	listint_t *momen;

	if (head == NULL)
		return;

	while (*head)
	{
		momen = (*head)->next;
		free(*head);
		*head = momen;
	}

	*head = NULL;
}
