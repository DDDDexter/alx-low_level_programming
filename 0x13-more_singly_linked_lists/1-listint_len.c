#include "lists.h"

/**
* listint_len - ret num of elem in a link ls
* @h: link ls of type listint_t to traverse
* Return: nodes num
*/
size_t listint_len(const listint_t *h)
{
	size_t count = 0;

	while (h)
	{
		count++;
		h = h->next;
	}

	return (count);
}
