#include<stdio.h>
#include<stdlib.h>

struct node {
int data;
struct node *next;

};

typedef struct node node;


node * insertAtBeginning(node *head, int data){
    node * new_node = (node *)malloc(sizeof(node));
    new_node->data = data;

    new_node->next = head;
    head = new_node;
    return head;
}

void insertAtEnd(node *head, int data){
    node * new_node = (node *)malloc(sizeof(node));
    new_node->data = data;

    node * temp = head;
    while (temp->next != NULL){
        temp = temp->next;
    }

    temp->next = new_node;

}

void insertAtPosition(node * head, int data, int posistion){

    node * new_node = (node *)malloc(sizeof(node));
    new_node->data = data;

    node *temp = head;
    for (int i = 0; i < posistion - 1; i++){
        temp = temp->next;
    }
    new_node->next = temp->next;
    temp->next = new_node;
}

void display(node *head){
    for (node * ptr = head; ptr != NULL; ptr = ptr->next){
        printf("%d ", ptr->data);
    }
    printf("\n");

}

void deleteAtEnd(node * head){
    if (head == NULL){
        printf("List is empty");
    } else {
        node * temp = head;
        while (temp->next->next != NULL){
            temp = temp->next;
        }
        free(temp->next);
        temp->next = NULL;
    }
}

void deleteAtBeginning(node * head){
    if (head == NULL){
        printf("List is empty");
    } else {
        node * temp = head;
        head = head->next;
        free(temp);
    }   
}

void deleteAtPosition(node * head, int position){
    if (head == NULL){
        printf("List is empty");
    } else {
        node * temp = head;
        for (int i = 0; i < position - 1; i++){
            temp = temp->next;
        }
        node * temp2 = temp->next;
        temp->next = temp2->next;
        free(temp2);
    }  
}

void getLength(node * head){
    int count = 0;
    for (node * ptr = head; ptr != NULL; ptr = ptr->next){
        count++;
    }
    printf("Length of the list is %d\n", count);
}


node * reverse(node * head){
    node * prev = NULL;
    node * current = head;
    node * next = NULL;

    while (current != NULL){
        next = current->next;
        current->next = prev;
        prev = current;
        current = next;
    }
    head = prev;
    return head;
}







void main(){

    int num;
    node *head = NULL;
    node *new_node = NULL;
    node *temp = NULL;

    node *n1 = (node *)malloc(sizeof(node));
    n1->data = 45;
    n1->next = NULL;

    node *n2 = (node *)malloc(sizeof(node));
    n2->data = 98;
    n2->next = NULL;

    node *n3 = (node *)malloc(sizeof(node));
    n3->data = 35;
    n3->next = NULL;

    node *n4 = (node *)malloc(sizeof(node));
    n4->data = 78;
    n4->next = NULL;


    n1->next = n2;
    n2->next = n3;
    n3->next = n4;
    head = n1;

    display(head);
    getLength(head);

    head = reverse(head);
    display(head);

}
