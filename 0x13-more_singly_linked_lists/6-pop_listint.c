#include <stdio.h>
#include "lists.h"

/**
 * pop_listint - deletes head node of a linked list
 * @head: pointer to first element in the linked list
 *
 * Return: the data inside the elements that was deleted
 */
int pop_listint(listint_t **head)
{
	listint_t *tempo;
	int num;

	if (!head || !*head)
		return (0);

	num = (*head)->n;
	tempo = (*head)->next;
	free(*head);
	*head = tempo;

	return (num);
}
