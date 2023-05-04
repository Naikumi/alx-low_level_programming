#include "main.h"
/**
  * set_bit - sets bit at index to 1
  * @n: pointer to number
  * @index: index to change
  * Return: Always 1 on success or -1 on failure
  */
int set_bit(unsigned long int *n, unsigned int index)
{
	if (index >= sizeof(n) * 8)
	{
		return (-1);
	}
	*n |= (1 << index);
	return (1);
}
