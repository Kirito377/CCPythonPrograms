#include<stdio.h>
#include<stdlib.h>
struct Node{
    int data;
    struct Node *next;
};

void traverseNode(struct Node *node){
    while (node != NULL)
    {
        printf("%d \n", node->data);
        node = node->next;
    }
    
}

int main(){
    struct Node *head;
    struct Node *second;
    struct Node *third;

    head = (struct Node*)malloc(sizeof(struct Node));
    second = (struct Node*)malloc(sizeof(struct Node));
    third = (struct Node*)malloc(sizeof(struct Node));

    head->data = 12;
    head->next = second;

    second->data = 111;
    second->next = third;

    third->data = 42;
    third->next = NULL;

    traverseNode(head);    
    return 0;
}