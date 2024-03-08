#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<stdbool.h>

#define N 20

int stack[N];
int top = -1;

bool isEmpty(){
    return top == -1;
}

bool isFull(){
    return top == N-1;
}

int pop(){

    if(isEmpty()){
        printf("Stack underflow\n");
        exit(EXIT_FAILURE);
    } else {
        int num = stack[top];
        --top;
        return num;
    }
}

void display(){
    if(isEmpty()){
        printf("Stack is empty\n");
    } else {
        printf("Stack elements are : \n");
        for(int i = top; i >= 0; i--){
            printf("%d\n", stack[i]);
        }
    }
}


void push(int data){
    if(isFull()){
        printf("Stack Overflow\n");
    } else {
        ++top;
        stack[top] = data;
    }
}

int main(){
    
        int choice, element;
    
        do{
            printf("1. Push\n");
            printf("2. Pop\n");
            printf("3. Display\n");
            printf("4. Exit\n");
    
            printf("Enter your choice : ");
            scanf("%d", &choice);
    
            switch(choice){
                case 1:
                    printf("Enter the element to push : ");
                    scanf("%d", &element);
                    push(element);
                    break;
                    
                case 2:
                    printf("Popped element is %d\n", pop());
                    break;
    
                case 3:
                    display();
                    break;

                case 4:
                    printf("Exiting\n");
                    break;

                default:
                    printf("Invalid choice\n");
            }
        } while(choice != 4);
    
        return 0;
}
