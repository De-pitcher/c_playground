# stacks_queues
This folder contains materials for learning stacks and queues in C.
## Stack
A stack in C is a linear data structure that follows the LIFO rule (Last In First Out). In a stack, both insertion and deletion take place from one end, that is from the top. Stack can be implemented in 2 ways in C;
1. **Statically**: Array implementation of stacks allows the static memory allocation of its data elements. It is import to note that in this method, the stack acquires all of the features of an array.
2. **Dynamically**: Linked list implementation of stacks follow the dynamic memory allocation of its data elements. It is import to note that in thiis method, the stack inherits all the characteristics of a linked list in C.

### Array Implementation of Stack in C
1. **Insertion**: In stack operation it is referred to as pushing an element in the stack. The elements are inserted into the stack from the top and hence would compel the elements to shift.
```C
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
```
2. **Deletion**: In a stack, the operation of deleting an element into the stack is referred to as popping an element in the stack. The deletion of a data element from the stack is done from the top.
```C
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
```
3. **Display**:The stack data elements are displayed in the stack according to the LIFO rule
```C
#include "stack.h"

/**
 * display - displays the stack elements according to LIFO rule.
 * @stack: stack data structure.
 * @top: pointer to the top index.
 *
 * Return: Nothing.
 */
void display(int stack[], int *top)
{
        int i;

        if (*top <= -1)
                printf("Stack is empty\n");
        else
        {
                printf("The elements of the stack are:\n");
                for (i = *top; i >= 0; i--)
                        printf("%d\n", stack[i]);
        }
}
```
