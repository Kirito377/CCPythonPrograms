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

void preorder(Node * root){
    if (root != NULL) {
        printf("%d ", root-> data);
        preorder(root->left);
        preorder(root->right);
    }
}

void postorder(Node * root){
    if (root != NULL) {
        postorder(root->left);
        postorder(root->right);
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
    root = create(10);
    n1 = create(20);
    n2 = create(30);
    n3 = create(40);

    root->left = n1;
    root->right = n2;
    n2->right = n3;

    // Traversing 
    // Three Methods of Traversing 
    // 1. Preorder
    preorder(root);
    printf("\n");
    // 2. Infix
    inorder(root);
    printf("\n");
    // 3. Postfix
    postorder(root);
    printf("\n");

    return 0;
}