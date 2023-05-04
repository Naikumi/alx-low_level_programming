#include "main.h"
/**
 * clear_bit - sets the value of a bit to zero
 * @n: pointer to number
 * @index: index to change
 * Return: 1 on Success and -1 on failure
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index >= sizeof(*n) * 8)
	{
		return (-1);
	}
	*n &= ~(1 << index);
	return (1);
}
