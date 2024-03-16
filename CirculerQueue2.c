#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

#define N 5
int queue[N];

int front = -1;
int rear = -1;

bool isFull(){
    if((rear+1)%N == front){
        return true;
    } else {
        return false;
    }
}

bool isEmpty(){
    if (front == -1 && rear == -1){
        return true;
    } else {
        return false;
    }
}

void enqueue(int data){
    if(isFull()){
        printf("Queue is full\n");
        return;
    } else if(isEmpty()){
        rear = 0;
        front = 0;
    } else{
        rear = (rear + 1) % N;
    }
    queue[rear] = data;
}

int dequeue(){
    int data;
    if(isEmpty()){
        printf("Queue is Empty\n");
        return;
    } else if (front == rear){
        data = queue[front];
        front = -1;
        rear = -1;
    } else {
        data = queue[front];
        front = (front + 1) % N;
    }


}
