#include<stdio.h>
#include<stdlib.h>

typedef struct Node{
    int data;
    struct Node *next;
}Node;

void show(Node *head){
    while (head != NULL)
    {
        printf("%d ", head->data);
        head = head->next;
    }
}

Node *addEnd(Node *ptr, int data){
    
    Node *p = ptr;
    Node *newNode = (Node *)malloc(sizeof(Node));

    while (p->next != NULL){
        p=p->next;
    }

    p->next=newNode;
    newNode->data = data;
    newNode->next = NULL;
    return ptr;
}

int main(){
    Node *head;
    Node *node1;
    Node *node2;

    head = (Node *)malloc(sizeof(Node));
    node1 = (Node *)malloc(sizeof(Node));
    node2 = (Node *)malloc(sizeof(Node));

    head->data = 10;
    head->next = node1;

    node1->data = 20;
    node1->next = node2;

    node2->data = 30;
    node2->next = NULL;

    head = addEnd(head,22);
    head = addEnd(head,23);
    head = addEnd(head,5);
    head = addEnd(head,56);
    head = addEnd(head,7);

    show(head);
    free(head);
    free(node1);
    free(node2);
}