#include<stdio.h>
#include<stdlib.h>

typedef struct Node
{
    int data;
    struct Node *next;
}Node;

void traverse(Node *head){
    while (head != NULL){
        printf("Element %d\n",head->data);
        head = head->next;        
    }
    printf("\n");
}

Node *insertionAtBeginning(Node *ptr, int data){
    Node *newNode = (Node*)malloc(sizeof(Node));
    newNode->data = data;
    newNode->next = ptr;
    return newNode;
}

int main(){
    Node *head;
    Node *node2;

    head = (Node*)malloc(sizeof(Node));
    node2 = (Node*)malloc(sizeof(Node));

    head->data = 10;
    head->next = node2;

    node2->data = 20;
    node2->next = NULL;

    traverse(head);
    head = insertionAtBeginning(head, 5);
    traverse(head);

    free(head);
    free(node2);
    return 0;
}