#include "lists.h"

/**
 * sum_listint - sum all the data (n) of a list
 * @head: pointer to the head of the list
 *
 * Return: sum of all data
 */
int sum_listint(listint_t *head)
{
	int sum = 0;

	if (head == NULL)
		return (0);
	while (head != NULL)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}
