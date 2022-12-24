#include "main.h"
/**
 * _strncpy - function that copies strings with n
 * @dest: copy to
 * @src: copy from
 * @n: numbers of char to copy
 * Retrun: dest
 */

char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; i < n && src[i] != '\0'; i++)
		dest[i] = src[i];

	for ( ; i < n; i++)
		dest[i] = '\0';

	return (dest);
}
