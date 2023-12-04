#include<stdio.h>
#include<stdlib.h>
struct Node{
    int data;
    struct Node *next;
};

void traverseNode(struct Node *node){
    struct Node *p = node;

    do{
        printf("%d ", p->data);
        p = p->next;
    }while (p != node);
    
}

int main(){
    struct Node *head;
    struct Node *second;
    struct Node *third;

    head = (struct Node*)malloc(sizeof(struct Node));
    second = (struct Node*)malloc(sizeof(struct Node));
    third = (struct Node*)malloc(sizeof(struct Node));

    head->data = 10;
    head->next = second;

    second->data = 20;
    second->next = third;

    third->data = 30;
    third->next = head;

    traverseNode(head);    
    
    free(third);
    free(second);
    free(head);

    return 0;
}