#include "lists.h"

/**
 * pop_listint - deletes the node of a listint list
 * @head: pointer to the address of the head of the listint list
 * Return: 0 if linked list is empty
 * otherwise - head nodes data
 */
int pop_listint(listint_t **head)
{
	listint_t *tmp;
	int ret;

	if (*head == NULL)
		return (0);

	tmp = *head;
	ret = (*head)->n;
	*head = (*head)->next;

	free(tmp);

	return (ret);
}
