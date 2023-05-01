#include "lists.h"

/**
* sum_listint - calc the sum of all the data in a listint_t list
* @head: first node in the link ls
* Return: sum resul
*/
int sum_listint(listint_t *head)
{
	int total = 0;
	listint_t *momen = head;

	while (momen)
	{
		total += momen->n;
		momen = momen->next;
	}

	return (total);
}
