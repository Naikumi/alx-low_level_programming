#include "lists.h"

/**
  * delete_dnodeint_at_index - deletes a node at an index
  * @head: double pointer to the head of the list
  * @index: index of the node to delete
  * Return: value of the node deleted
  */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *tmp;
	unsigned int j = 0;

	if (!*head)
		return (-1);
	tmp = *head;
	if (index == 0)
	{
		if (tmp->next)
		{
			tmp->next->prev = NULL;
			*head = tmp->next;
		}
		else
			*head = NULL;
		free(tmp);
		return (1);
	}
	while (tmp)
	{
		if (j == index)
		{
			if (tmp->next)
			{
				tmp->prev->next = tmp->next;
				tmp->next->prev = tmp->prev;
			}
			else
				tmp->prev->next = NULL;
			free(tmp);
			return (1);
		}
		tmp = tmp->next;
		j++;
	}
	return (-1);
}
