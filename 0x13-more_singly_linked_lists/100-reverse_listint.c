#include "lists.h"

/**
* reverse_listint - This function reverses a linked list.
* @head: A head of a list.
* Return: pointer to the Frist node.
 */

listint_t *reverse_listint(listint_t **head)
{
	listint_t *i;
	listint_t *n;

	i = NULL;
	n = NULL;

	while (*head != NULL)
	{
		n = (*head)->next;
		(*head)->next = i;
		i = *head;
		*head = n;
	}

	*head = i;

	return (*head);
}
