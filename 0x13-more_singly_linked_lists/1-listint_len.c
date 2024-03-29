#include "lists.h"
#include <stdio.h>

/**
 * listint_len - number of elements in a linked list
 * @h: pointer to the head of the list
 *
 * Return: Number of elements in the list
 */

size_t listint_len(const listint_t *h)
{
	size_t nodes = 0;

	while (h)
	{
		nodes++;
		h = h->next;
	}

	return (nodes);
}
