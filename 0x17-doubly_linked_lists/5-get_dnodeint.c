#include "lists.h"

/**
  * get_dnodeint_at_index - gets the node at an index
  * @head: head of the list
  * @index: index to get
  *
  * Return: pointer to the index
  */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int j = 0;

	while (head)
	{
		if (index == j)
			return (head);
		head = head->next;
		j++;
	}
	return (NULL);
}
