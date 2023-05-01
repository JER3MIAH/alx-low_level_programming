#include <stdio.h>
#include "lists.h"

/**
 * find_listint_loop - finds loop in linked list
 * @head: list to be found
 *
 * Return: address of node where loop starts or 0
 */
listint_t *find_listint_loop(listint_t *head)
{
	listint_t *slug = head;
	listint_t *quick = head;

	if (!head)
		return (NULL);

	while (slug && quick && quick->next)
	{
		quick = quick->next->next;
		slug = slug->next;
		if (quick == slug)
		{
			slug = head;
			while (slug != quick)
			{
				slug = slug->next;
				quick = quick->next;
			}
			return (quick);
		}
	}

	return (NULL);
}
