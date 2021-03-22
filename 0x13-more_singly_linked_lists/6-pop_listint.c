#include "lists.h"
#include <stdlib.h>
#include <stdio.h>
/**
 *pop_listint - deletes the head node and returns its data
 *@head:pointer to listint
 *Return:head data
 */
int pop_listint(listint_t **head)
{
	int data = 0;
	listint_t *tmp;

	tmp = *head;
	if (tmp)
	{
		data = tmp->next;
		*head = tmp->next;
		free(tmp);
	}
	return (data);
}
