#include <stdio.h>
#include <stdlib.h>

// Define the structure for a linked list Node
struct Node {
    int data;
    struct Node* next;
};

// Function to create a new Node and add it to the linked list
struct Node* createNode(int data) {
    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
    if (newNode != NULL) {
        newNode->data = data;
        newNode->next = NULL;
    }
    return newNode;
}

// Function to append a Node to the end of the linked list
void appendNode(struct Node** head, int data) {
    struct Node* newNode = createNode(data);
    if (newNode == NULL) {
        printf("Memory allocation failed.\n");
        return;
    }

    if (*head == NULL) {
        *head = newNode;
    } else {
        struct Node* current = *head;
        while (current->next != NULL) {
            current = current->next;
        }
        current->next = newNode;
    }
}

// Function to print the linked list
void printList(struct Node* head) {
    struct Node* current = head;
    while (current != NULL) {
        printf("%d ", current->data);
        current = current->next;
    }
}

// Function to free the memory occupied by the linked list
void freeList(struct Node* head) {
    struct Node* current = head;
    struct Node* next;
    while (current != NULL) {
        next = current->next;
        free(current);
        current = next;
    }
}

struct Node *insertAtFirst(struct Node *head,int data){
    struct Node * ptr = (struct Node*)malloc(sizeof(struct Node));
    ptr->next = head;
    ptr->data = data;
}

struct Node *insertAtEnd(struct Node *head,int data){
    struct Node * ptr = (struct Node*)malloc(sizeof(struct Node));
    ptr->data = data;

    struct Node *p =head;

    while(p->next!=NULL){
        p=p->next;
    }
    p->next=ptr;
    ptr->next=NULL;
    return head;
}


struct Node *deletefirst(struct Node *head){
    struct Node *ptr = head;
    head = head->next;
    free(ptr);
    return head;
}

struct Node *deleteatend(struct Node *head){
    struct Node *p = head;
    struct Node *q = head->next;
    while(q->next!=NULL){
        p=p->next;
        q=q->next;
    }
    p->next=NULL;
    free(q);
    return head;
}

struct Node *deleteatindex(struct Node *head, int index){
    struct Node *p = head;
    struct Node *q = head->next;
    for(int i=0; i<index-2 ; i++){
        p=p->next;
        q=q->next;
    }
    p->next=q->next;
    free(q);
    return head;
}


int main() {
    int n, data;
    struct Node* head = NULL;

    printf("Enter the number of Nodes: ");
    scanf("%d", &n);

    printf("Enter data for %d Nodes:\n", n);
    for (int i = 0; i < n; i++) {
        printf("Enter data for Node %d: ", i + 1);
        scanf("%d", &data);
        appendNode(&head, data);
    }

    printf("\nLinked List: ");
    printList(head);

    printf("\nPerform the operations\n");
    int choice;
    

    while (1) {
        printf("\n\n1. Insert at the beginning\n");
        printf("2. Insert at the end\n");
        printf("3. Delete at the beginning\n");
        printf("4. Delete at first\n");
        printf("5. Delete at the end\n");
        printf("6. Delete after an existing element\n");
        printf("7. Search an element\n");
        printf("8. Print the linked list\n");
        printf("9. Exit\n");
        printf("\nEnter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
        case 1:
            printf("Enter data to insert at the beginning: ");
            scanf("%d", &data);
            head = insertAtFirst(head,data);
            printf("\nLinked List: ");
            printList(head);
            break;
        case 2:
            printf("Enter data to insert at the end: ");
            scanf("%d", &data);
            head = insertAtEnd(head,data);
            printf("\nLinked List: ");
            printList(head);
            break;
        case 3:
            head = deletefirst(head);
            printf("\nLinked List: ");
            printList(head);
            break;   
        case 4:
            printf("\nLinked List: ");
            printList(head);
            break;
        case 5:
            head = deleteatend(head);
            printf("\nLinked List: ");
            printList(head);
            break;
        case 6:
            printf("Enter Node index to be deleted: ");
            int Nodeindex;
            scanf("%d", &Nodeindex);
            head = deleteatindex(head,Nodeindex);
            printf("\nLinked List: ");
            printList(head);
            break;
        case 7:
            printf("Enter the element to search: ");
            scanf("%d", &data);
            break;
        case 8:
            printf("Linked List: ");
            printList(head);
            break;
        case 9:
            // Free the memory occupied by the linked list
            freeList(head);
            printf("Exiting the program.\n");
            return 0;
        default:
            printf("Invalid choice. Please try again.\n");
        }
    }
}
