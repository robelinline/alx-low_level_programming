#include "main.h"
/**
 * _memset - fill n bytes memory pointed by s with b
 * @s: pointer
 * @b: constant byte
 * @n: bytes to change
 * Return: pointer
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	i = 0;

	while (s != '\0' && i < n)
	{
		s[i] = b;

		i++;
	}
	return (s);
}
