#include "queue.h"

/**
 * display - displays the queue elements according to LIFO rule.
 * @queue: queue data structure.
 *
 * Return: Nothing.
 */
void display(node *queue)
{
	struct node *tmp;

	tmp = queue;
	if (tmp == NULL)
		printf("Stack underflow\n");
	else
	{
		printf("The elements of the stack are:\n");
		while (tmp != NULL)
		{
			printf("%d\n", tmp->data);
			tmp = tmp->next;
		}
	}
}
