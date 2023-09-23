#include "lists.h"

/**
* free_listint2 - Function to make linked list free.
* @head: pointer to the listint_t to be free.
* Return: void.
*/

void free_listint2(listint_t **head)
{
	listint_t *temp;

	if (head == NULL)
		return;

	while (*head)
	{
		temp = (*head)->next;
		free(*head);
		*head = temp;
	}
	*head = NULL;
}
