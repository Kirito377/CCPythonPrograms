#include<stdio.h>
#include<stdlib.h>

struct Node{
    int data;
    struct Node *left;
    struct Node *right;
};

struct Node* create(int data){
    struct Node *temp = (struct Node*)malloc(sizeof(struct Node));
    temp->left = NULL;
    temp->right = NULL;
    temp->data = data;
    return temp;
};

void preorder(struct Node* root){
    if (root !=  NULL) {
        printf("%d ",root->data);
        preorder(root->left);
        preorder(root->right);
        return;
    }
}
int main(){
    struct Node *root,*n1,*n2,*n3;
    root=create(10);
    n1=create(20);
    n2=create(30);
    n3=create(40);

    root->left = n1;
    root->right = n2;
    n2->right = n3;

    preorder(root);
    return 0;
}