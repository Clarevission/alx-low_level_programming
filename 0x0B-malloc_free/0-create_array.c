#include "main.h"
#include <stdlib.h>

/**
 * create_array - array for printing a string
 * @size: number element
 * @c: character
 *
 * Return: pointer
 */

char *create_array(unsigned int size, char c)
{
	char *array = malloc(size);

	if (size == 0 || array == 0)
		return (NULL);
	while (size--)
		array[size] = c;
	return (array);
}
