#include<stdio.h>
#include<stdlib.h>

struct node {
    int data;
    struct node *next;
    struct node *prev;
};

typedef struct node node;

// insert at End
void insertAtEnd(node * head, int data){
    node * ptr = head;

    while(ptr->next != 0){
        ptr = ptr->next;
    }
    node * new_node = (node *)malloc(sizeof(node));

    new_node->data = data;
    new_node->next = NULL;
    new_node->prev = ptr;
    ptr->next = new_node;

}



void display(node * head){
    node * ptr = head;

    for (ptr = head; ptr != 0; ptr = ptr->next){
        printf("%d\n", ptr->data);
    }
}



node * insertAtBeginning(node * head, int data){
    node * ptr = head;

    node * new_node = (node *)malloc(sizeof(node));

    new_node->data = data;
    new_node->next = ptr;
    new_node->prev = NULL;

    ptr->prev = new_node;
    head = new_node;

    return head;
}


void insertAtPosition(node * head, int data, int position){

    node * temp = head;

    node * new_node = (node *)malloc(sizeof(node));
    new_node->data = data;
    new_node->next = NULL;
    new_node->prev = NULL;


    for (int i = 0; i < position -1; i++){
        temp = temp->next;
    }

    new_node->next = temp->next;
    new_node->prev = temp;
    temp->next = new_node;
    new_node->next->prev = new_node;
}

void deleteAtEnd(node * head){
    node * ptr = head;

    while (ptr->next->next != NULL){
        ptr = ptr->next;
    }

    free(ptr->next);
    ptr->next = NULL;
}

node * deleteAtBeginning(node * head){

    node * ptr = head;
    head = head->next;
    free(ptr);

    return head;

}

void deleteAtPosition(node * head, int position){
    node * temp = head;

    for (int i = 0; i < position-1; i++){
        temp = temp->next;
    }

    node * temp2 = temp->next;
    temp->next = temp2->next;
    temp2->next->prev = temp;
    free(temp2);
}


void main(){
    node *head = NULL;


    node *new_node = (node *)malloc(sizeof(node));
    new_node->data = 10;
    new_node->next = NULL;
    new_node->prev = NULL;
    head = new_node;


    node *new_node1 = (node *)malloc(sizeof(node));
    new_node1->data = 20;
    new_node1->next = NULL;
    new_node1->prev = new_node;
    new_node->next = new_node1;


    node *new_node2 = (node *)malloc(sizeof(node));
    new_node2->data = 30;
    new_node2->next = NULL;
    new_node2->prev = new_node1;
    new_node1->next = new_node2;


    display(head);

    printf("\n");
    printf("\n");
    head = insertAtBeginning(head, 68);
    display(head);


    printf("\n");
    printf("\n");

    insertAtPosition(head, 50, 3);
    display(head);

    printf("\n");
    printf("\n");
    deleteAtEnd(head);
    display(head);


    printf("\n");
    printf("\n");
    head = deleteAtBeginning(head);
    display(head);


    printf("\n");
    printf("\n");
    deleteAtPosition(head, 2);
    display(head);

}

