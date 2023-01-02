#include "main.h"

/**
 * _memset - fill a block of memory with a specific value
 * @s: starting address of the memory
 * @b: constant byte
 * @n: number of bytes to be changed
 * Return: changed array with new value
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;
	
	for (i = 0; i < n; i++)
		*(s + i) = b;

	return (s);
}
