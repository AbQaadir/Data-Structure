#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>


struct Node
{
    int data;
    struct Node *next;
};

typedef struct Node Node;

Node *front = NULL;
Node *rear = NULL;

void Enqueue(int data)
{
    Node *newNode = (Node *)malloc(sizeof(Node));
    newNode->data = data;
    newNode->next = NULL;

    if(front == NULL && rear == NULL) {
        front = rear = newNode;
        rear->next = front;
    } else {
        rear->next = newNode;
        rear = newNode;
        rear->next = front;
    }
}

int Dequeue() {
    if(front == NULL && rear == NULL) {
        printf("Queue is empty\n");
        return -1;
    } else if(front == rear) {
        int data = front->data;
        free(front);
        front = rear = NULL;
        return data;
    } else {
        int data = front->data;
        Node *temp = front;
        front = front->next;
        rear->next = front;
        free(temp);
        return data;
    }
}