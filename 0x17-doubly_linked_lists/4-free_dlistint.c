#include "lists.h"

/**
 * free_dlistint - frees nodes of double linked list
 * @head: pointer to head
 *
 * Return: Nothing
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *tmp, *aux;

	tmp = head;
	while (tmp)
	{
		aux = tmp->next;
		free(tmp);
		tmp = aux;
	}
}
