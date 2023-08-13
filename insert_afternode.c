#include<stdio.h>
#include<stdlib.h>

struct node{
    int data;
    struct node *next;
};

void linkedListTraversal(struct node *ptr){
    while(ptr!=NULL){
        printf("Element : %d \n",ptr->data);
        ptr = ptr->next;
    }
}


struct node *insertAfterNode(struct node *head,struct node *prevNode,int data){
    struct node * ptr = (struct node*)malloc(sizeof(struct node));
    ptr->data = data;

    ptr->next = prevNode->next;
    prevNode->next=ptr;
    return head;
}



int main(){

    struct node *head;
    struct node *second;
    struct node *third;

    head = (struct node*)malloc(sizeof(struct node));
    second = (struct node*)malloc(sizeof(struct node));
    third = (struct node*)malloc(sizeof(struct node));
    
    head->data = 7;
    head->next = second;

    second->data = 5;
    second->next =third;

    third->data= 45;
    third->next = NULL;

    printf("Linked list before insertion\n");
    linkedListTraversal(head);


    head = insertAfterNode(head,second,100);
    printf("\nLinked list after insertion\n");

    linkedListTraversal(head);

    return 0;
}