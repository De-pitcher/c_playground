#include "queue.h"

/**
 * pop - delete element from the stack and is done from the top.
 * @queue: pointer to the queue data structure
 *
 * Return: Nothing.
 */
void pop(node *queue)
{
	struct node *tmp;
	if (!queue)
		printf("Stack Underflow\n");
	else
	{
		tmp = queue;
		queue = queue->next;
		free(tmp);
	}
}
