#include <stdio.h>
#include "main.h"
/**
 * binary_to_uint - converts a binary to an unsigned integer
 * @b: pointer to a string of 0's and 1's
 * Return: the converted number or zero
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int n, i;

	if (b == NULL)
		return (0);
	n = i = 0;
	while (b[i])
	{
		if (b[i] > '1')
			return (0);
		else if (b[i] == '1')
		{
			n <<= 1;
			n += 1;
		}
		else
			n <<= 1;
		i++;
	}
	return (n);
}
