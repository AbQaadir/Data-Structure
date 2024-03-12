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

    node * new_node = (node *)malloc(sizeof(node))

}
