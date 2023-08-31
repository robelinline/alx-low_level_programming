#include "main.h"
/**
 * set_bit - Sets the value
 * @n: A pointer 
 * @index: The index
 *
 * Return: 1
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	if (index >= (sizeof(unsigned long int) * 8))
		return (-1);

	*n ^= (1 << index);

	return (1);
}
