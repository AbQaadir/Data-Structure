#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

struct node
{
    int data;
    struct node *next;
};

typedef struct node node;

node *top = NULL;

void display() {
    for (node *ptr = top; ptr != NULL; ptr = ptr->next) {
        printf("%d ", ptr->data); 
    }
    printf("\n"); 
}

bool isEmpty() {
    return top == NULL;
}

int pop() {
    if (isEmpty()) {
        printf("Stack underflow!\n"); // Stack is empty, cannot pop
        return -1; // Return a sentinel value indicating failure
    }
    node *temp = top;
    int data = temp->data;

    top = top->next;
    free(temp);
    return data;
}

void push(int data){
    node * new_node = (node *)malloc(sizeof(node));
    new_node->data = data;
    new_node->next = top;
    top = new_node;

}

int main() {
    // Example usage
    push(1);
    push(2);
    push(3);
    display(); // Output: 3 2 1
    pop();
    display(); // Output: 2 1
    return 0;
}
