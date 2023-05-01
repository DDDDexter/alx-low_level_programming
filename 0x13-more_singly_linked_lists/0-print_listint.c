#include "lists.h"

/**
* print_listint - prompts all eleme of a link ls
* @h: link ls of type listint_t to prompt
* Return: node num
*/
size_t print_listint(const listint_t *h)
{
	size_t count = 0;

	while (h)
	{
		printf("%d\n", h->n);
		count++;
		h = h->next;
	}

	return (count);
}
