#include<stdio.h>
#include<stdlib.h>

// Linked List
typedef struct Node {
    int data;
    struct Node* next;
}Node;

//Traversing
void traverse(Node *head){
    while (head != NULL){
        printf("%d ",head->data);
        head = head->next;
    }
    printf("\n");
}

//IsFull
int isFull(){
    Node *n = (Node*) malloc(sizeof(Node));
    if (n==NULL){
        return 1;
    }
    else{ 
        free(n);
        return 0;
    }

}

//Check if stack is empty 
int isEmpty(Node *head){
    if (head == NULL)
        return 1;
    else
        return 0;
}

// Push in Stack
Node * push(Node *head, int data){
    if (isFull())   {
        printf("Stack Overflow!\n");
    }else{
        Node *new = (Node*)malloc(sizeof(Node));
        new->data = data;
        new->next = head;
        head = new;
        return head;
    }
}

// Pop from stack
int pop(Node** head){

    if (isEmpty(*head)) {
        printf("Stack Underflow!\n");
    }else{   
        Node *n = (*head);
        int val = n->data;
        (*head) = (*head)->next;
        free(n);
        return val;
    }
    return -1;
}

void seek(Node *head,int index){
    for (int i = 1; ((i < index) && !(head ==NULL)); i++) {
        head = head->next;
    }
    if (head != NULL) {
        printf("Value of position %d is %d \n",index, head->data);
    }else {
        printf("Invalid index");
    }
    
}

int main(){
    Node *head = NULL;

    //Push in stack with linked list
    head = push(head, 10);
    head = push(head, 20);
    head = push(head, 30);
    head = push(head, 40);
    traverse(head);

    //Poping from stack
    printf("%d is poped from stack! \n",pop(&head));
    printf("%d is poped from stack! \n",pop(&head));
    traverse(head);

    seek(head,1);
    seek(head,2);
    return 0;
}