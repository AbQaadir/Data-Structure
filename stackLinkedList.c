#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>


struct node
{
    int data;
    struct node * next;
};

typedef struct node node;

int main(){
    node * top = NULL;
    int choice, element;
    bool flag = true;
    while(flag){
        printf("1. Push\n");
        printf("2. Pop\n");
        printf("3. Display\n");
        printf("4. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);
        switch(choice){
            case 1:
                printf("Enter the element to push: ");
                scanf("%d", &element);
                node * newNode = (node *)malloc(sizeof(node));
                newNode->data = element;
                newNode->next = top;
                top = newNode;
                break;

            case 2:
                if(top == NULL){
                    printf("Stack is empty\n");
                }else{
                    printf("Popped element is: %d\n", top->data);
                    top = top->next;
                }
                break;

            case 3:
                if(top == NULL){
                    printf("Stack is empty\n");
                }else{
                    node * temp = top;
                    while(temp != NULL){
                        printf("%d\n", temp->data);
                        temp = temp->next;
                    }
                }
                break;

            case 4:
                flag = false;
                break;
                
            default:
                printf("Invalid choice\n");
        }
    }
    return 0;
}



