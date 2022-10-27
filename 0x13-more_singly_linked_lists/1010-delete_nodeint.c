#include "lists.h"

/**
 * delete_nodeint_at_index - deletes the node at an index of a linked list
 * @head: the head node of the list
 * @index: the index of the node to be deleted
 *
 * Return: 1 if it succeeded,
 * otherwise, -1
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	unsigned int i = 0;
	listint_t *temp, *track;

	temp = *head;
	track = *head;
	if (!(temp))
		return (-1);
	if (index == 0)
	{
		free(*head);
		*head = temp->next;
		return (1);
	}
	while (temp && i++ < index)
	{
		track = temp;
		temp = temp->next;
	}
	track->next = temp->next->next;
	free(temp->next);
	return (1);


}

