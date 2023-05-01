#include "lists.h"

/**
* delete_nodeint_at_index - del a nd in a lnk ls at a certain i
* @head: ptr to the fir elem in the ls
* @index: i of the node to del
* Return: 1 (Success), or -1 (Fail)
*/
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *momen = *head;
	listint_t *courrant = NULL;
	unsigned int i = 0;

	if (*head == NULL)
		return (-1);

	if (index == 0)
	{
		*head = (*head)->next;
		free(momen);
		return (1);
	}

	while (i < index - 1)
	{
		if (!momen || !(momen->next))
			return (-1);
		momen = momen->next;
		i++;
	}


	courrant = momen->next;
	momen->next = courrant->next;
	free(courrant);

	return (1);
}
