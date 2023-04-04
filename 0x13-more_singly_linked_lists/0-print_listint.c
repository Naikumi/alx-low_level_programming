#include <stdio.h>
#include "lists.h"
#include <stdlib.h>
/**
  * print_listint - prints all the elements of a list_t list
  * @h: singly linked list to print
  *
  * Return: number of nodes in the list
  */
size_t print_listint(const listint_t *h)
{
	size_t n = 0;

	if (!h)
		return (0);
	while (h)
	{
		printf("%d\n", h->n);
		h = h->next;
		n++;
	}
	return (n);
}
