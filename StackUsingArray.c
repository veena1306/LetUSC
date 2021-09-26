/******************************************************************************

                            Online C Debugger.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Debug" button to debug program.

*******************************************************************************/

#include <stdio.h>
#include <limits.h>
#include <stdlib.h>

struct stack
{
    int top;
    unsigned capacity;
    int *array;
};

struct stack* createStack(unsigned capacity)
{
   struct stack* stack = (struct stack*)malloc(sizeof(struct stack)); 
   stack->capacity = capacity;
   stack->top = -1;
   stack->array = (int*)malloc(stack->capacity * sizeof(stack->array));
   return stack;
}

int isFull(struct stack *stack)
{
    return stack->top == stack->capacity-1;
}

int isEmpty(struct stack *stack)
{
  return stack->top == -1;   
}

int peek(struct stack *stack)
{
  return stack->array[stack->top];
}

void push(struct stack *stack, int item)
{
    if(isFull(stack))
        return;
    stack->array[++stack->top] = item;
    printf("pushed item is : %d",item);
}

int pop(struct stack *stack)
{
    if(isEmpty(stack)){
        printf("stack is empty");
    }
  return stack->array[stack->top--];   
}


int main()
{
    struct stack *stack = createStack(5);
    push(stack,10);
    push(stack,20);
    push(stack,30);
    
    printf("element is :%d",pop(stack));
}
