#include "main.h"
#include <limits.h>

/**
 * print_number - print number 
 * @n: int
 * Return: void
 */
void print_number(int n)
{
	unsigned int i;

	if (n < 0)
	{
		_putchar('-');
		i = -n;
	}
	else
		i = n;
	if (i / 10)
	{
		print_number(i / 10);
	}
	_putchar('0' + i % 10);
}
