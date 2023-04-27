#include <stdlib.h>
#include "lists.h"

/**
* free_list - frees a likd ls
* @head: list_t ls to be freed
*/
void free_list(list_t *head)
{
	list_t *to_cl;

	while (head)
	{
		to_cl = head->next;
		free(head->str);
		free(head);
		head = to_cl;
	}
}
