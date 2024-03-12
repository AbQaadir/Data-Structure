#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>


struct node
{
    int data;
    struct node * next;
};

typedef struct node node;


// queue implementation using linked list
node * front = NULL;
node * rear = NULL;

void display(){
    if(front == NULL){
        printf("Queue is empty\n");
    }else{
        node * temp = front;
        while(temp != NULL){
            printf("%d\n", temp->data);
            temp = temp->next;
        }
    }
}

bool isEmpty(){
    return front == NULL;
}

void enqueue(int data){
    node * newNode = (node *)malloc(sizeof(node));
    newNode->data = data;
    newNode->next = NULL;
    if(front == NULL){
        front = rear = newNode;
    }else{
        rear->next = newNode;
        rear = newNode;
    }
}

int dequeue(){
    if(isEmpty()){
        printf("Queue is empty\n");
        return -1;
    }else{
        node * temp = front;
        int data = temp->data;
        front = front->next;
        free(temp);
        return data;
    }
}


int main(){
    int choice, element;
    bool flag = true;
    while(flag){
        printf("1. Enqueue\n");
        printf("2. Dequeue\n");
        printf("3. Display\n");
        printf("4. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);
        switch(choice){
            case 1:
                printf("Enter the element to enqueue: ");
                scanf("%d", &element);
                enqueue(element);
                break;

            case 2:
                printf("Dequeued element is: %d\n", dequeue());
                break;

            case 3:
                display();
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
