// Circular Queue using Array

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

#define MAX 5

int queue[MAX];

int front = -1, rear = -1;

bool isEmpty() {
    if (front == -1 && rear == -1)
        return true;
    else
        return false;
}

bool isFull() {
    if ((rear + 1) % MAX == front)
        return true;
    else
        return false;
}

void enqueue(int data) {
    if (isFull()) {
        printf("Queue is Full\n");
        return;
    } else if (isEmpty()) {
        front = rear = 0;
    } else {
        rear = (rear + 1) % MAX;
    }
    queue[rear] = data;
}

int dequeue() {
    int data;
    if (isEmpty()) {
        printf("Queue is Empty\n");
        return -1;
    } else if (front == rear) {
        data = queue[front];
        front = rear = -1;
    } else {
        data = queue[front];
        front = (front + 1) % MAX;
    }
    return data;
}

void display(){
    int i = front;
    if (isEmpty()) {
        printf("Queue is Empty\n");
        return;
    }
    while (i != rear) {
        printf("%d ", queue[i]);
        i = (i + 1) % MAX;
    }
    printf("%d\n", queue[rear]);
}