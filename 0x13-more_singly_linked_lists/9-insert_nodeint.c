#include "lists.h"

/**
* insert_nodeint_at_index - inser new node in a link ls
* a given posi
* @head: ptr to the fir nd in the ls
* @idx: i where the new nd is added
* @n: data to inser in the new nd
* Return: ptr to the new node, or NULL
*/
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int index;
	listint_t *nouveau;
	listint_t *momen = *head;

	nouveau = malloc(sizeof(listint_t));
	if (!nouveau || !head)
		return (NULL);

	nouveau->n = n;
	nouveau->next = NULL;

	if (idx == 0)
	{
		nouveau->next = *head;
		*head = nouveau;
		return (nouveau);
	}

	for (index = 0; momen && index < idx; index++)
	{
		if (index == idx - 1)
		{
			nouveau->next = momen->next;
			momen->next = nouveau;
			return (nouveau);
		}
		else
			momen = momen->next;
	}

	return (NULL);
}
