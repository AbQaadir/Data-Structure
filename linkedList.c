#include <stdio.h>
#include <stdlib.h>

typedef struct node node;

struct node
{
    int data;
    struct node *next;
};

void main() {

    node *head = NULL;

    node *n1 = (node *)malloc(sizeof(node));
    n1->data = 45;
    n1->next = NULL;
    head = n1;

    node *n2 = (node *)malloc(sizeof(node));
    n2->data = 98;
    n2->next = NULL;

    n1->next = n2;

    for (node *ptr = head; ptr != NULL; ptr = ptr->next)
    {
        printf("%d\n", ptr->data);
    }

    
}
