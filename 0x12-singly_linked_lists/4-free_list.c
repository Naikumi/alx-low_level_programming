#include "lists.h"
#include <stdlib.h>
/**
 * free_list - free a list_t list
 *
 * @head: head of list to free
 *
 * Return: void
 */
void free_list(list_t *head)
{
	if (head == NULL)
		return;
	free_list(head->next);
	free(head->str);
	free(head);
}
