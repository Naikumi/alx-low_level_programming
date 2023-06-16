#include "lists.h"

/**
  * dlistint_len - prints length of the list
  * @h: list's head
  *
  * Return: number of items in the linked list
  */
size_t dlistint_len(const dlistint_t *h)
{
	size_t j;

	for (j = 0; h; j++)
		h = h->next;
	return (j);
}
