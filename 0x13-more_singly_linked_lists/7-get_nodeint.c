#include "lists.h"

/**
* get_nodeint_at_index - Function that returns the node at
*	a certain index in a linked list.
* @head: First node in the linked list.
* @index: An index of the node.
* Return: pointer to the node where looking for, OR NULL.
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int x = 0;
	listint_t *temp = head;

	while (temp && x < index)
	{
		temp = temp->next;
		x++;
	}

	return (temp ? temp : NULL);
}
