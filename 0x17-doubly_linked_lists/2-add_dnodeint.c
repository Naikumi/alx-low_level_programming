#include "lists.h"

/**
 * add_dnodeint - adds node at start of double linked list
 * @head: pointer to head
 * @n: integer
 *
 * Return: number of nodes
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new_node, *tmp;

	new_node = malloc(sizeof(dlistint_t));
	if (!new_node)
		return (NULL);
	new_node->n = n;
	new_node->prev = NULL;
	tmp = *head;
	if (!*head)
	{
		new_node->next = NULL;
	}
	else
	{
		new_node->next = tmp;
		tmp->prev = new_node;
	}
	*head = new_node;
	return (new_node);
}
