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
	listint_t *backwardss = NULL;
	listint_t *forwardss = NULL;

	while (*head)
	{
		forwardss = (*head)->forwardss;
		(*head)->forwardss = backwardss;
		backwardss = *head;
		*head = forwardss;
	}

	*head = backwardss;

	return (*head);
}
