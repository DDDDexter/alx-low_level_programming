#include "lists.h"

/**
* free_listint_safe - frees a lk ls
* @h: ptr to the first node in the link ls
* Return: num of elemes in the freed ls
*/
size_t free_listint_safe(listint_t **h)
{
	size_t longeur = 0;
	int difference;
	listint_t *momen;

	if (!h || !*h)
		return (0);

	while (*h)
	{
		difference = *h - (*h)->next;
		if (difference > 0)
		{
			momen = (*h)->next;
			free(*h);
			*h = momen;
			longeur++;
		}
		else
		{
			free(*h);
			*h = NULL;
			longeur++;
			break;
		}
	}

	*h = NULL;

	return (longeur);
}
