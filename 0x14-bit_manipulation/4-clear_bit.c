#include "main.h"

/**
 * clear_bit - Sets the value
 * @index: The index
 *
 * Return: null
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index >= (sizeof(unsigned long int) * 8))
		return (-1);

	*n &= ~(1 << index);

	return (1);
}
