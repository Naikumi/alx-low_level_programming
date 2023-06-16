#include "lists.h"

/**
 * insert_dnodeint_at_index - inserts node at nth index of double linked list
 * @h: pointer to head
 * @idx: integer
 * @n: integer
 * Return: address of node inserted at the nth index or null if failed
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *new, *tmp, *store;
	unsigned int j = 0;
	unsigned int number_of_nodes = 0;

	tmp = *h;
	while (tmp)
	{
		number_of_nodes += 1;
		tmp = tmp->next;
	}
	new = malloc(sizeof(dlistint_t));
	if (!new)
		return (NULL);
	if (idx == 0)
		return (add_dnodeint(h, n));
	if (idx == number_of_nodes)
		return (add_dnodeint_end(h, n));
	new->n = n;
	tmp = *h;
	while (tmp)
	{
		if (j == idx - 1)
		{
			store = tmp->next;
			tmp->next = new;
			new->prev = tmp;
			new->next = store;
			store->prev = new;
			return (new);
		}
		tmp = tmp->next;
		j++;
	}
	return (NULL);
}
