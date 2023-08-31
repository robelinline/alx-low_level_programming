#include "main.h"

/**
 * flip_bits - Counts 
 * @n: The number.
 * @m: The number to flip 
 *
 * Return: num
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int xor = n ^ m, bits = 0;

	while (xor > 0)
	{
		bits += (xor & 1);
		xor >>= 1;
	}

	return (bits);
}
