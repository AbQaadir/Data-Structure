#include<stdio.h>
#include<stdlib.h>

typedef struct node node;

struct node
{
    int data;
    struct node *next;
};

void display(node *head);
void insertAtEnd(node *head, int data);
node *insertAtBeginning(node *head, int data);
void insertAtPosition(node *head, int data, int position);


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

    n1->next = n2;
    n2->next = n3;
    head = n1; 


    display(head);
    insertAtEnd(head, 100);
    display(head);

    head = insertAtBeginning(head, 99);
    display(head);

    insertAtPosition(head, 101, 4);
    display(head);



}


// Display the linked list function

void display(node *head)
{
    printf("The linked list is: \n");
    for (node *ptr = head; ptr != NULL; ptr = ptr->next)
    {
        printf("%d  ", ptr->data);
    }
    printf("\n");
    printf("\n");

}

// Insertion at the end of the linked list function
void insertAtEnd(node *head, int data)
{
    node *new_node = (node *)malloc(sizeof(node));
    new_node->data = data;
    new_node->next = NULL;

    node *temp = head;
    while (temp->next != NULL)
    {
        temp = temp->next;
    }
    temp->next = new_node;
}

// Insertion at the beginning of the linked list function
node *insertAtBeginning(node *head, int data)
{
    node *new_node = (node *)malloc(sizeof(node));
    new_node->data = data;
    new_node->next = head;
    head = new_node;
    return head;
}

// Insertion at a given position of the linked list function
void insertAtPosition(node *head, int data, int position)
{
    node *new_node = (node *)malloc(sizeof(node));
    new_node->data = data;
    new_node->next = NULL;

    node *temp = head;
    for (int i = 0; i < position - 1; i++)
    {
        temp = temp->next;
    }
    new_node->next = temp->next;
    temp->next = new_node;
}