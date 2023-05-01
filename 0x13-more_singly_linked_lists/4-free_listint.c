#include "lists.h"

/**
* free_listint - frees a link ls
* @head: listint_t ls to be freed
*/
void free_listint(listint_t *head)
{
	listint_t *momen;

	while (head)
	{
		momen = head->next;
		free(head);
		head = momen;
	}
}
