#include "lists.h"

/**
 * get_nodeint_at_index - Function return to nth of the node
 * @head: my structure
 * @index: index
 * Return: .......
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int count = 0;

	while (head != NULL)
	{
		if (count == index)
			return (head);
		count++;
		head = head->next;
	}
	return (NULL);
}
