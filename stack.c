#include<stdio.h>
#include<stdlib.h>

// struct node {
//     int data;
//     struct node *next;
//     struct node *prev;
// };


int main(){

    int stack[5];

    int top = -1;

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
                if(top == 4){
                    printf("Stack is full\n");
                } else {
                    printf("Enter the element to push : ");
                    scanf("%d", &element);
                    top++;
                    stack[top] = element;
                }
                break;
            case 2:
                if(top == -1){
                    printf("Stack is empty\n");
                } else {
                    printf("Popped element is %d\n", stack[top]);
                    top--;
                }
                break;
            case 3:
                if(top == -1){
                    printf("Stack is empty\n");
                } else {
                    printf("Stack elements are : \n");
                    for(int i = top; i >= 0; i--){
                        printf("%d\n", stack[i]);
                    }
                }
                break;
            case 4:
                printf("Exiting\n");
                break;
            default:
                printf("Invalid choice\n");
        }
    } while(choice != 4);


}
