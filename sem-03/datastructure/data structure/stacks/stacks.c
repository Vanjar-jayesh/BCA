#include <stdio.h>
#include <limits.h>
#include <stdlib.h>

struct stack
{
    int top;
    unsigned capacity;
    int *arr;
};
struct stack *createstack(unsigned capacity)
{
    // int  stack;
    struct stack *stack = (struct stack *)malloc(sizeof(struct stack));
    stack->capacity = capacity;
    stack->top = -1;
    stack->arr = (int *)malloc(stack->capacity * sizeof(int));
    return stack;
}
int full(struct stack *stack)
{
    return stack->top == stack->capacity - 1;
}
int empty(struct stack *stack)
{
    return stack->top == -1;
}
void push(struct stack *stack, int item)
{
    if (full(stack))
    {
        return;
    }
    stack->arr[++stack->top] = item;
    printf("%d pushed to stack \n", item);
}

int pop(struct stack *stack)
{
    if (empty(stack))
    {
        return INT_MIN;
    }
    return stack->arr[stack->top--];
}
int peek(struct stack *stack)
{
    if (empty(stack))
    {
        return INT_MIN;
    }
    return stack->arr[stack->top];
}

int main()
{
    struct stack *stack = createstack(100);
    for (int i = 1; i <= 10; i++)
    {
        push(stack, i);

        // printf("%d popped from stack\n", pop(stack));
    }
    for (int i = 1; i <= 3; i++)
    {
        printf("\n\n\n%d popped from stack\n", pop(stack));
    }

    return 0;
}