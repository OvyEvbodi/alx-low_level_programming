#include "lists.h"

/**
 * print_listint_safe - prints a listint_t linked list
 * @head: the head node
 * 
 * Return: the number of nodes in the list
*/

size_t print_listint_safe(const listint_t *head)
{
	size_t count = 0;
	if (head)
	{
		count++;
		printf("[%p] %d\n", (void *)head, head->n);
		if (head > head->next)
			count += print_listint_safe(head->next);
		else
			printf("-> [%p] %d\n", (void *)head->next, head->next->n);
	} 
	return (count);
}