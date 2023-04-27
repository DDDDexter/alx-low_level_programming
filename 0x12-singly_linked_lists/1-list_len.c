#include <stdlib.h>
#include "lists.h"

/**
* list_len - ret the num of elem in a likd ls
* @h: ptr > list_t list
* Return: num of eleme in h
*/
size_t list_len(const list_t *h)
{
	size_t y = 0;

	while (h)
	{
		y++;
		h = h->next;
	}
	return (y);
}
