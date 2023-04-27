#include <stdio.h>
#include "lists.h"

/**
* print_list - prompt * elem of a lnkd ls
* @h: ptr to the list_t ls to prompt
* Return: the num of nd prompted
*/
size_t print_list(const list_t *h)
{
	size_t y = 0;

	while (h)
	{
		if (!h->str)
			printf("[0] (nil)\n");
		else
			printf("[%u] %s\n", h->len, h->str);
		h = h->next;
		y++;
	}

	return (y);
}
