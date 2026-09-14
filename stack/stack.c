//! Stack
#include <stdio.h>

#define MAX_SIZE 10
int stack[MAX_SIZE];
int top = -1;

void push(int val) //! push
{
    if (top == MAX_SIZE - 1)
    {
        printf("Stack Overflow\n");
        return;
    }
    top++;
    stack[top] = val;
}

void pop() //! pop
{
    if (top == -1)
    {
        printf("Stack is underflow\n");
        return;
    }
    --top;
}

void peek() //! peek
{
    if (top == -1)
    {
        printf("Stack is empty");
        return;
    }
    printf("top is %d\n", stack[top]);
}

void display() //! display
{
    if (top == -1)
    {
        printf("Stack is empty");
        return;
    }
    for (int i = 0; i <= top; i++)
    {
        printf("%d ", stack[i]);
    }
    printf("\n");
}

int main()
{
    for (int i = 1; i <= 10; i++)
    {
        push(i);
    }
    printf("Initially\n");
    display();
    printf("After a pop\n");
    pop();
    display();
    peek();

    return 0;
}