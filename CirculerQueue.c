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