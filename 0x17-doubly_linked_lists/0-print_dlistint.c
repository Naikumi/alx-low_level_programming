#include "lists.h"

/**
  * print_dlistint - prints a doubly linked list
  * @h: head of the list
  *
  * Return: the number of items in the linked list
  */
size_t print_dlistint(const dlistint_t *h)
{
	size_t j;

	for (j = 0; h; j++)
	{
		printf("%d\n", h->n);
		h = h->next;
	}
	return (j);
}
