#include "lists.h"

/**
* print_listint - This function prints all the elements
*	of a linked list.
* @h: A linked list of type listint_t.
* Return: Number of nodes (count)
 */

size_t print_listint(const listint_t *h)
{
	size_t count =  0;

	while (h)
	{
		printf("%d\n", h->n);
		count++;
		h = h->next;
	}

	return (count);
}
