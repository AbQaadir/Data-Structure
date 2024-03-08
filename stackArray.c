#include <stdio.h>
#include <stdbool.h> // for bool type

#define N 5

int stack[N];
int top = -1; // Initialize top of the stack

bool isFull(){
    return top == N - 1;
}

bool isEmpty(){
    return top == -1;
}

void push(int data){
    if (!isFull()){
        top++;
        stack[top] = data;
    } else {
        printf("Stack Overflow!\n");
    }
}

int pop(){
    if (!isEmpty()){
        int data = stack[top];
        top--;
        return data;
    } else {
        printf("Stack Underflow!\n");
        return -1; // Assuming -1 represents an error or invalid data
    }
}

int main(){

    pop();
    push(1);
    push(2);
    push(3);
    push(4);
    push(5);
    push(6); // Trying to push into a full stack

    printf("Popped element: %d\n", pop());
    printf("Popped element: %d\n", pop());
    printf("Popped element: %d\n", pop());
    printf("Popped element: %d\n", pop());
    printf("Popped element: %d\n", pop());
    printf("Popped element: %d\n", pop()); // Trying to pop from an empty stack

    return 0;
}
