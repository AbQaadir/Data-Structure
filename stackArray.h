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

void display(){
    if (!isEmpty()){
        printf("Stack: ");
        for (int i = 0; i <= top; i++){
            printf("%d ", stack[i]);
        }
        printf("\n");
    } else {
        printf("Stack is empty!\n");
    }
}

int main(){
    push(1);
    push(2);
    push(3);
    display(); // Display the stack
    push(4);
    push(5);
    push(6); // Trying to push into a full stack

    display(); // Display the stack

    printf("Popped element: %d\n", pop());
    printf("Popped element: %d\n", pop());
    printf("Popped element: %d\n", pop());
    display(); // Display the stack after popping

    printf("Popped element: %d\n", pop());
    printf("Popped element: %d\n", pop());
    printf("Popped element: %d\n", pop()); // Trying to pop from an empty stack

    return 0;
}
