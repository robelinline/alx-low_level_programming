#include "main.h"

/**
 * flip_bits - Number of bits needed to flip
 * @n: long int
 *
 * @m: unsigned int
 *
 * Return: 1 if works -1 on failure
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int mask = 0, index;

	index = n ^ m;

	while (index > 0)
	{
		if (index & 1)
		{
			mask++;
		}
		index >>= 1;
	}
	return (mask);
}
