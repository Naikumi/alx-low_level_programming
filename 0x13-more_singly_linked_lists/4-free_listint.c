#include "lists.h"
#include <stdlib.h>
/**
 * free_listint - frees all nodes in a list
 * @head: pointer to a list
 */
void free_listint(listint_t *head)
{
	if (head == NULL)
		return;
	free_listint(head->next);
	free(head);
}
