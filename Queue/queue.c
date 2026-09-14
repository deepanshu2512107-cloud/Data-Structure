#include <stdio.h>

#define MAX_SIZE 10
int Queue[MAX_SIZE];
int front = -1;
int rear = -1;

void enqueue(int val)
{
    if (front == -1)
    {
        front++;
        Queue[front] = val;
        rear++;
        return;
    }
    if (rear == MAX_SIZE - 1)
    {
        printf("Queue is full\n");
        return;
    }
    else
    {
        rear++;
        Queue[rear] = val;
    }
}

void dequque()
{
    if (front == -1)
    {
        printf("Queue is Empty\n");
        return;
    }
    rear--;
}

void display()
{
    if (front == -1)
    {
        printf("Queue is Empty\n");
    }
    for (int i = 0; i <= rear; i++)
    {
        printf("%d ", Queue[i]);
    }
    printf("\n");
}

int main()
{
    for (int i = 1; i <= 7; i++)
    {
        enqueue(i);
    }
    display();

    return 0;
}