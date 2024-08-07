#include "main.h"

/**
 * _memset - fills memory with a constant byte
 * @s: buffer array
 * @b: constant byte
 * @n: unsigned int
 * Return: Pointer to memory area `s`
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int count = 0;

	while (count < n)
	{
		s[count] = b;
		count++;
	}

	return (s);
}
