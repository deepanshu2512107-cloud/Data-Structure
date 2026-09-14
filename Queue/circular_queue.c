#include<stdio.h>

#define MAX_SIZE 10
int CircularQueue[MAX_SIZE];
int front = -1;
int rear = -1;

void enqueue(int val){
    if((rear + 1) % MAX_SIZE == front){
        printf("Circular Queue is full");
        return;
    }
    if(front == -1){
        rear = front = 0;
    } else {
        rear = (rear + 1) % MAX_SIZE;
    }
    CircularQueue[rear] = val;
}

void dequque(){
    if(front == -1){
        printf("Queue is Empty\n");
        return;
    }
    if(front == rear){
        front = rear = -1;
    } else {
        front = (front + 1) % MAX_SIZE;
    }
}

void display(){
    if(front == -1){
        printf("Queue is Empty\n");
    }
    for(int i=0;i<=rear;i++){
        printf("%d ", CircularQueue[i]);
    }
    printf("\n");
}

int main(){
    for(int i=1;i<=7;i++){
        enqueue(i);
    }
    display();

    return 0;
}