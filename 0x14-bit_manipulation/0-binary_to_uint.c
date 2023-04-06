#include <stdio.h>
#include "main.h"
/**
 * binary_to_uint - converts a binary number to an unsigned integer
 * @b: pointer to a string of 0 and 1 chars
 *
 * Return: the converted number or zero
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int n = 0;
	int i;

	if (b == 0)
		return (0);
	for (i = 0; b[i] == '0' || b[i] == '1'; i++)
	{
		n <<= 1;
		n += b[i] - '0';
	}
	return (n);
}
