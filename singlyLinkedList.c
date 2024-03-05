#include<stdio.h>
#include<stdlib.h>

typedef struct node node;

struct node
{
    int data;
    struct node *next;
};


void main() {
    int num;
    node *head = NULL;
    node *new_node = NULL;
    node *temp = NULL;


    do
    {

        printf("Enter the number: ");
        scanf("%d", &num);

        if (num != -1)
        {
            new_node = (node *)malloc(sizeof(node));
            new_node->data = num;
            new_node->next = NULL;

            if (head == NULL)
            {
                head = new_node;
            }
            else
            {
                temp = head;
                while (temp->next != NULL)
                {
                    temp = temp->next;
                }
                temp->next = new_node;
            }
        }
        
    } while (num != -1);



    printf("The linked list is: \n");
    for (node *ptr = head; ptr != NULL; ptr = ptr->next)
    {
        printf("%d\n", ptr->data);
    }
    
}