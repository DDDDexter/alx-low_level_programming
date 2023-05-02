#include "lists.h"

/**
* reverse_listint - rev a lk ls
* @head: ptr to the first node in the ls
* Return: ptr to the first node in the new ls
*/
listint_t *reverse_listint(listint_t **head)
{
	listint_t *prece = NULL;
	listint_t *next = NULL;

	while (*head)
	{
		next = (*head)->next;
		(*head)->next = prece;
		prece = *head;
		*head = next;
	}

	*head = prece;

	return (*head);
}
