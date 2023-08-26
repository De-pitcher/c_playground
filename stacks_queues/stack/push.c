#include "stack.h"

/**
 * push - Inserts elements into the stack from the top
 * @stack: stack data structure.
 * @top: pointer to the top element
 * @element: element to be inserted.
 *
 * Return: Nothing.
 */

void push(int stack[], int *top, int element)
{
	if (*top < LIMIT - 1)
	{
		(*top)++;
		stack[*top] = element;
	}
	else
	{
		printf("Stack is full\n");
	}
}
