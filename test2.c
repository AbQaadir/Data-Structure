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



int main(){
    int num;
    node * head = NULL;

    do{
        printf("Enter the data or to exit press -1 : ");
        scanf("%d", &num);

        if (num != -1){
            node * new_node = (node *)malloc(sizeof(node));
            new_node->data = num;

            if(head == NULL){
                head = new_node;
                new_node->next = head; // Pointing to itself as it's the only node
            } else {
                node * temp = head;

                while (temp->next != head){
                    temp = temp->next;
                }

                temp->next = new_node;
                new_node->next = head; // Making the new node point to the head
            }
        }

    } while(num != -1);



    display(head); // Displaying the circular linked list
    return 0;
}
