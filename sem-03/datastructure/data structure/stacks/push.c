#include <stdio.h>
#define size 5
int top = -1;
int stack[size];

int push(int value)
{
    if (top == size - 1)
    {
        printf("stack is full\n");
    }
    else
    {

        top++;
        stack[top] = value;
        printf("element is pushed : %d \n", value);
    }

    return 0;
}

int pop()
{
    if (top == -1)
    {
        printf("stack is empty\n");
    }
    else
    {
        printf("element popped: %d\n", stack[top]);
        top--;
    }

    return 0;
}

int main()
{
    int choice, item;
    while (1)
    {
        printf("1.push\n");
        printf("2.pop\n");
        printf("0.exit\n");

        printf("enter of choice:\n");
        scanf("%d", &choice);

        switch (choice)
        {
        case 1:
            printf("enter of push:\n");
            scanf("%d", &item);
            push(item);
            break;

        case 2:
            pop();
            break;

        case 0:
            printf("bye bye \n\n");
            exit(1);

        default:
            printf("invalid choice");
            break;
        }
    }

    return 0;
}
