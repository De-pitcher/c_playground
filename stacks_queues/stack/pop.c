#include "stack.h"

/**
 * pop - delete element from the stack and is done from the top.
 * @top: pointer to the top index.
 *
 * Return: Nothing.
 */
void pop(int *top)
{
	if (*top <= -1)
	{
		printf("This is an empty stack\n");
	}
	else
	{
		(*top)--;
	}
}
