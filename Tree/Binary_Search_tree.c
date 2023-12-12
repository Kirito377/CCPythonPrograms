#include<stdio.h>
#include<stdlib.h>

typedef struct Node {
    struct Node* left;
    struct Node* right;
    int data;
}Node;

Node* create(int data){
    Node* newNode = (Node*)malloc(sizeof(Node));
    newNode->data = data;
    newNode->left = NULL;
    newNode->right = NULL;
}

void prefix(Node * root){
    if (root != NULL) {
        printf("%d ", root-> data);
        prefix(root->left);
        prefix(root->right);
    }
}

void postfix(Node * root){
    if (root != NULL) {
        postfix(root->left);
        postfix(root->right);
        printf("%d ", root-> data);
    }
}

void inorder(Node * root){
    if (root != NULL) {
        inorder(root->left);
        printf("%d ", root-> data);
        inorder(root->right);
    }
}

int main(){
    Node* root;
    Node* n1;
    Node* n2;
    Node* n3;
    Node* n4;

    root = create(5);
    n1 = create(3);
    n2 = create(6);
    n3 = create(1);
    n4 = create(4);

    //      5
    //     / \
    //    3   6
    //   / \
    //  1   4

    root->left = n1;
    root->right = n2;
    n1->left = n3;
    n1->right = n4;

    inorder(root);
    printf("\n");
  

    return 0;
}