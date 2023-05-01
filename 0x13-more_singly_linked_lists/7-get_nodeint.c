#include "lists.h"

/**
* get_nodeint_at_index - ret the nd at a certain i in a lk ls
* @head: fir node in the link ls
* @index: i of the node to ret
* Return: ptr to the node we're looking for, or NULL
*/
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int x = 0;
	listint_t *momen = head;

	while (momen && x < index)
	{
		momen = momen->next;
		x++;
	}

	return (momen ? momen : NULL);
}
