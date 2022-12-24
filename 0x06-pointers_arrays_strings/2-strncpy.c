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

	char *temp;

	temp = dest;

	for (i = 0; i < n; i++)
		*dest++ = *src++;
	return (temp);
}
