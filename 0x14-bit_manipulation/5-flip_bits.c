#include "main.h"

/**
  * flip_bits - calculates the number of bits needed
  * to get from one number to another
  * @n: base number
  * @m: number to transform to
  *
  * * Return: the number of bit transformations needed
  */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned int res = 0;
	unsigned long int diff = n ^ m;

	while (diff != 0)
	{
		res += diff & 1;
		diff >>= 1;
	}
	return (res);
}
