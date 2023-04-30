#include <stdio.h>
#include "lists.h"

/**
 * delete_nodeint_at_index - deletes node in linked list at a particular index
 * @head: pointer to first element in the list
 * @index: index of node to delete
 *
 * Return: 1 (Success), or -1 (Fail)
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *tempo = *head;
	listint_t *present = NULL;
	unsigned int i = 0;

	if (*head == NULL)
		return (-1);

	if (index == 0)
	{
		*head = (*head)->next;
		free(tempo);
		return (1);
	}

	while (i < index - 1)
	{
		if (!tempo || !(tempo->next))
			return (-1);
		tempo = tempo->next;
		i++;
	}


	present = tempo->next;
	tempo->next = present->next;
	free(present);

	return (1);
}

