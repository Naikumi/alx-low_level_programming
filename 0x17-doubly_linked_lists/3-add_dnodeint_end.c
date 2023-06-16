#include "lists.h"

/**
  * add_dnodeint_end - adds a node to the end of the list
  * @head: list's head
  * @n: value to add to the node
  *
  * Return: pointer to the element added
  */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new, *tmp;

	new = malloc(sizeof(dlistint_t));
	if (!new)
		return (NULL);
	new->n = n;
	new->next = NULL;
	tmp = *head;
	if (!*head)
	{
		new->prev = NULL;
		*head = new;
		return (new);
	}
	while (tmp->next)
		tmp = tmp->next;
	new->prev = tmp;
	tmp->next = new;

	return (new);
}

