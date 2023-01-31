#include "lists.h"

/**
 * add_nodeint - adda a new node to the beginning of the list
 * @head: pointer to the address of the head of the listint list
 * @n: integer
 * Return: if the function fails - NULL
 * otherwise - the address of the new element
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new;

	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);

	new->n = n;
	new->next = *head;

	*head = new;

	return (new);
}
