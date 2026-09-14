#include <iostream>

class Stack
{
private:
    int size;
    int *stack;
    int top = -1;

public:
    Stack(int n)
    {
        size = n;
        stack = new int[size];
    }

    void push(int val)
    {
        if (top == size - 1)
        {
            printf("Stack Overflow\n");
            return;
        }
        stack[++top] = val;
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

    void display()
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

    int Size(){
        return size;
    }
};

int main()
{
    Stack STACK(10);

    for(int i=1;i<=STACK.Size();i++){
        STACK.push(i);
    }
    STACK.display();
    std::cout << "After pop : "; STACK.pop();
    STACK.display();

    return 0;
}