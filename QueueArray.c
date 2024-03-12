#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

#define N 20

int Queue[N];
int front = -1;
int rear = -1;

bool isEmpty() {
    return front == -1;
}

bool isFull() {
    return rear == N - 1;
}

void enqueue(int data) {
    if (!isFull()) {
        rear++;
        Queue[rear] = data;
    } else {
        printf("Queue overflow\n");
        exit(EXIT_FAILURE);
    }
}

int dequeue() {
    if (!isEmpty()) {
        int num = Queue[front];
        front++;
        if (front > rear) { // Reset front and rear when queue becomes empty
            front = rear = -1;
        }
        return num;
    } else {
        printf("Underflow condition\n");
        exit(EXIT_FAILURE);
    }
}

void display() {
    if (isEmpty()) {
        printf("Queue is empty\n");
    } else {
        for (int i = front; i <= rear; i++) {
            printf("%d\n", Queue[i]);
        }
    }
}

int main() {
    int choice, element;
    bool flag = true;
    while (flag) {
        printf("1. Enqueue\n");
        printf("2. Dequeue\n");
        printf("3. Display\n");
        printf("4. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);
        switch (choice) {
            case 1:
                printf("Enter the element to enqueue: ");
                scanf("%d", &element);
                enqueue(element);
                break;

            case 2:
                if (isEmpty()) {
                    printf("Queue is empty\n");
                } else {
                    printf("Dequeued element is: %d\n", dequeue());
                }
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
