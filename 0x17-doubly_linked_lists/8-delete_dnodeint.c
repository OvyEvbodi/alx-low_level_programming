#include "lists.h"

/**
 * delete_dnodeint_at_index - deletes the node
 * at index 'index' of a dlistint_t linked list
 *
 * @head: a pointer to the head node
 * @index: the index of the node to be deleted
 *
 * Return: 1 on success,
 * otherwise, -1
*/

int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *temp = *head, *temp_prev;

	if (!(*head) || !(head))
		return (-1);
	if (!(index))
	{
		(*head) = (*head)->next;
		if (temp->next)
		{
			temp->next->prev = NULL;
		}
		free(temp);
        temp = NULL;
		return (1);
	}
	while (index)
	{
		if (temp)
			temp = temp->next;
		else
		{
			free(temp);
            temp = NULL;
			break;
		}
		index--;
	}
	temp_prev = temp->prev;
	temp_prev->next = temp->next;
	temp->next = temp_prev;
	free(temp);
    temp = NULL;
	return (1);
}
