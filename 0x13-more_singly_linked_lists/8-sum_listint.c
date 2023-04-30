#include <stdio.h>
#include "lists.h"

/**
 * sum_listint - calculates sum of data in listint_t list
 * @head: first node in linked list
 *
 * Return: sum result
 */
int sum_listint(listint_t *head)
{
	int sum = 0;
	listint_t *tempo = head;

	while (temp)
	{
		sum += tempo->n;
		tempo = tempo->next;
	}

	return (sum);
}
