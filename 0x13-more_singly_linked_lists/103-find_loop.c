#include "lists.h"

/**
* find_listint_loop - find loop in a lik ls
* @head: link ls to search for
* Return: addr of the node where the loop starts, or NULL
*/
listint_t *find_listint_loop(listint_t *head)
{
	listint_t *lent = head;
	listint_t *rapide = head;

	if (!head)
		return (NULL);

	while (lent && rapide && rapide->next)
	{
		rapide = rapide->next->next;
		lent = lent->next;
		if (rapide == lent)
		{
			lent = head;
			while (lent != rapide)
			{
				lent = lent->next;
				rapide = rapide->next;
			}
			return (rapide);
		}
	}

	return (NULL);
}
