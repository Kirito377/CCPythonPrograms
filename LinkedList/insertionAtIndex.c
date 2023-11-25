#include<stdio.h>
#include<stdlib.h>

typedef struct Node{
    int data;
    struct Node *next;
}Node;

void traverseNode(struct Node *node){
    while (node != NULL)
    {
        printf("%d ", node->data);
        node = node->next;
    }
    printf("\n");
}

Node *addIndex(Node *ptr, int data, int key){
    Node *newNode = (Node *)malloc(sizeof(Node));
    Node *p=ptr;
    int i=0;
    while (i<key-1){
        p=p->next;
        i++;
    }
    newNode->next = p->next;
    newNode->data = data;
    p->next = newNode;
    return ptr;
}

int main(){

    //Node PTR
    Node *head;
    Node *node1;
    Node *node2;
    Node *node3;

    //Allocation
    head = (Node *)malloc(sizeof(Node));
    node1 = (Node *)malloc(sizeof(Node));
    node2 = (Node *)malloc(sizeof(Node));
    node3 = (Node *)malloc(sizeof(Node));

    //Data Input

    head->data = 10;
    head->next = node1;

    node1->data = 20;
    node1->next = node2;

    node2->data = 30;
    node2->next = node3;

    node3->data = 40;
    node3->next = NULL;

    traverseNode(head);
    head = addIndex(head, 55, 3);
    traverseNode(head);

    return 0;
}