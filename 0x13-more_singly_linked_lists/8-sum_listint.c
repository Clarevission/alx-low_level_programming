#include "lists.h"

/**
 * sum_listint - calculates the sum of all the data in a listint list
 * @head: pointer to the head of the listint_t list
 * Return: 0 if list is empty
 * otherwise retrun the sum of all data
 */
int sum_listint(listint_t *head)
{
	int sum = 0;

	while (head)
	{
		sum += head->n;
		head = head->next;
	}

	return (sum);
}
