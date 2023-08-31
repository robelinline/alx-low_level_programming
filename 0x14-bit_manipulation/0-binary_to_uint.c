#include "main.h"
/**
 * binary_to_uint - Converts a binary num
 * @b: A pointer 
 *
 * Return: If b is NULL
 */
unsigned int binary_to_uint(const char *b)
{
	int base = 1;
	unsigned int temp = 0, result = 0;
	int len = 0;

	if (!b)
		return (0);
	while (b[len])
		len++;
	while (len > 0)
	{
		if (b[len - 1] != '0' && b[len - 1] != '1')
			return (0);
		temp = (b[len - 1] == '1') ? 1 : 0;
		result += (temp * base);
		base *= 2;
		len--;
	}
	return (result);
}
