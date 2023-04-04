#include <stdlib.h>
#include "lists.h"
/**
 * listint_len - finds the number of nodes in a list
 * @h: singly linked list
 *
 * Return: number of elements in a linked list
 */
size_t listint_len(const listint_t *h)
{
	int count = 0;

	while (h != 0)
	{
		count++;
		h = h->next;
	}
	return (count);
}
