#ifndef STACK
#define STACK

#include <stdlib.h>
#include <stdio.h>

#define LIMIT 100

void push(int stack[], int *top, int element);
void pop(int *top);
void display(int stack[], int *top);

#endif
