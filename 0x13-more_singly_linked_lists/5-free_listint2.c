#include "lists.h"

/**
 * free_listint2 - frees a linked list
 * @head: pointer to the listint_t list to be freed
 */
void free_listint2(listint_t **head)
{
	listint_t *producer, *data;

	if (!head)
		return;
	producer = *head;
	while (producer)
	{
		data = producer;
		producer = producer->next;
		free(*data);
	}
	*head = NULL;
}

