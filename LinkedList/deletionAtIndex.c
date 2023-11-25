#include<stdio.h>
#include<stdlib.h>

typedef struct Node{
    int data;
    struct Node* next;
}Node;

void show(Node *n){
    while (n !=NULL){
        printf("%d ", n->data);
        n=n->next;
    }
    printf("\n");
}

Node *deleteIndex(Node *head, int n){
    Node *p = head;
    Node *q =  head->next;
    int i=0;
    while (i!=n-1){
        p=p->next;
        q=q->next;  
        i++;      
    }
    p->next = q->next;
    free(q); 
    return head;   
}

int main(){
    //declearation
    Node *head;
    Node *node1;
    Node *node2;
    Node *node3;
    Node *node4;

    //allocation 
    head = (Node*)malloc(sizeof(Node));
    node1 = (Node*)malloc(sizeof(Node));
    node2 = (Node*)malloc(sizeof(Node));
    node3 = (Node*)malloc(sizeof(Node));
    node4 = (Node*)malloc(sizeof(Node));

    //Values

    head->data = 10;
    head->next = node1;

    node1->data = 20;
    node1->next = node2;

    node2->data = 30;
    node2->next = node3;

    node3->data = 40;
    node3->next = node4;

    node4->data = 50;
    node4->next = NULL;

    show(head);
    head = deleteIndex(head,2);
    show(head);
    return 0;
}