#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
* _r - Function that make reallocates memory for
* an array of pointers to the nodes in a linked list.
* @list: The old list.
* @size: A size of the new list.
* @new: A new node of list.
* Return: Pointer to the new list.
 */

const listint_t **_r(const listint_t **list, size_t size, const listint_t *new)
{
	const listint_t **newlist;
	size_t i;

	newlist = malloc(size * sizeof(listint_t *));
	if (newlist == NULL)
	{
		free(list);
		exit(98);
	}
	for (i = 0; i < size - 1; i++)
		newlist[i] = list[i];
	newlist[i] = new;
	free(list);

	return (newlist);
}
/**
* print_listint_safe - A funcion to print an elements in a linked list.
* @head: A pointer at start of the list.
* Return: A number of nodes in the list.
 */

size_t print_listint_safe(const listint_t *head)
{
	size_t i, nnodes = 0;
	const listint_t **list = NULL;

	while (head != NULL)
	{
		for (i = 0; i < nnodes; i++)
		{
			if (head == list[i])
			{
				printf("-> [%p] %d\n", (void *)head, head->n);
				free(list);
				return (nnodes);
			}
		}
		nnodes++;
		list = _r(list, nnodes, head);
		printf("[%p] %d\n", (void *)head, head->n);
		head = head->next;
	}
	free(list);

	return (nnodes);
}
