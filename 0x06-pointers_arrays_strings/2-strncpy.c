#include "main.h"
#include <stdio.h>

/**
 * _strncpy - function that copies strings
 * @dest: input value
 * @src: input value
 * @n: input value
 * Retrun: string
 */

char *_strncpy(char *dest, char *src, int n)
{
	int i = 0;

	while (i < n && *(src + i) != '\0')
	{
		*(dest + i) = *(src + i);
		i++;
	}
	while (i != n)
		dest[i++] = '\0';
	return (dest);
}
