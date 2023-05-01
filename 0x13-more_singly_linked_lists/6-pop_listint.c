#include "lists.h"

/**
* pop_listint - del the head nd of a link ls
* @head: ptr to the first elem in the lk ls
* Return: the data inside the elem that was dele
* or 0 if the list is empty
*/
int pop_listint(listint_t **head)
{
	listint_t *momen;
	int x;

	if (!head || !*head)
		return (0);

	x = (*head)->n;
	momen = (*head)->next;
	free(*head);
	*head = momen;

	return (x);
}
