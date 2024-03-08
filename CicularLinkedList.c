#include<stdio.h>
#include<stdlib.h>

struct node {
    int data;
    struct node *next;
};

typedef struct node node;

void display(node * head){
    node * ptr = head;

    do{
        printf("%d\n", ptr->data);
        ptr = ptr->next;
    }while(ptr != head);
}


// insert a node at the beginning of the linked list

node * insertAtBeginning(node * head, int data){
    node * ptr = head;
    node * new_node = (node *)malloc(sizeof(node));
    new_node->data = data;

    while(ptr->next != head){
        ptr = ptr->next;
    }

    new_node->next = head;
    ptr->next = new_node;
    head = new_node;

    return head;
}


void main(){

    node * head = (node *)malloc(sizeof(node));
    node * second = (node *)malloc(sizeof(node));
    node * third = (node *)malloc(sizeof(node));
    node * fourth = (node *)malloc(sizeof(node));

    head->data = 7;
    head->next = second;

    second->data = 11;
    second->next = third;

    third->data = 41;
    third->next = fourth;

    fourth->data = 66;
    fourth->next = head;

    display(head);
    printf("\n");

    head = insertAtBeginning(head, 56);


    
    display(head);

    
}