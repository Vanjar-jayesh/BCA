#include <stdio.h>
#include <stdlib.h>
#define SIZE 5

int stack[SIZE];

int top = -1;

void push(int element)
{
    if (top == SIZE - 1)
    {
        printf("stack is full");
    }
    else
    {
        top++;
        stack[top] = element;

        printf("element is pushed of stack :%d \n", element);
    }
}

void pop()
{
    if (top == -1)
    {
        printf("stack is emy");
    }
    else
    {
        printf("element is pooped:  %d\n", stack[top]);
        top--;
    }
}

void disple()
{

    int show = 0;

    if (top == -1)
    {
        printf("stack is empty");
    }
    else
    {

        while (show <= top)
        {
            printf("totel element of stack: %d\n", stack[show]);
            show++;
        }
    }
}

int lenght()
{
    int len = 0;
    // len = lenght();
    if (top == -1)
    {
        printf("stack is empty : ");
    }
    else
    {
        while (len <= top)
        {
            len++;
        }
    }
    return len;
}

void peek()
{
    if (top == -1)
    {
        printf("stack is empty");
    }
    else
    {
        printf("top of the stack : %d", stack[top]);
    }
}
void main()

{

    int chocies, element, len;

    while (1)
    {
        printf("1.push\n");
        printf("2.pop\n");
        printf("3.disple\n");
        printf("4.len\n");
        printf("5.peek\n");
        printf("0.exit\n");

        printf("enter of your chocies:");
        scanf("%d", &chocies);

        switch (chocies)
        {
        case 1:
            printf("enter element in pushed in stack: ");
            scanf("%d", &element);
            push(element);
            break;

        case 2:
            pop();
            break;

        case 3:
            disple();
            break;

        case 4:

            len = lenght();
            printf("totle len of stack : %d\n", len);
            break;

        case 5:
            peek();
            break;

        case 0:
            exit(1);

        default:
            printf("invelid choies");
            break;
        }
    }
}
