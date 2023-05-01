#include <stdio.h>
#include "lists.h"

/**
 * reverse_listint - reverses the linked list
 * @head: pointer to first node in the list
 *
 * Return: pointer to first node in new list
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *backwards = NULL;
	listint_t *forwards = NULL;

	while (*head)
	{
		forwards = (*head)->forwards;
		(*head)->forwards = backwards;
		backwards = *head;
		*head = forwards;
	}

	*head = backwards;

	return (*head);
}
