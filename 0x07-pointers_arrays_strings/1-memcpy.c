#include "main.h"
/**
 * _memcpy - Copy n characters from src memory area to dest
 * @n: number of characters
 * @src: pointer memory area source
 * @dest: pointer to memory area destinated
 * Return: pointer dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i = 0;

	while (src != '\0' && i < n)
	{
	dest[i] = src[i];
	i++;
	}
	return (dest);
}
