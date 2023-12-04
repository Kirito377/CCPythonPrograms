#include<stdio.h>
#include<stdlib.h>

// Creating stack
typedef struct Satck{
    int top;
    int max;
    int *arr;
}Stack;

// Checking if stack is Empty or not
int isEmpty(Stack *s){
    if (s->top == -1)
        return 1;
    else
        return 0;
}

// Checking if stack is Full or Not
int isFull(Stack *s){
    if (s->top == s->max-1)
        return 1;
    else
        return 0;
}

// Pusing element in Stack
void push(Stack *s, int data){
    if(isFull(s)){
        printf("Stack Overflow! cann't push %d\n", data);
    }else{
        s->top++;
        s->arr[s->top] = data;
        printf("Pushed %d \n", data);
    }
}

// Poping Element from stack
int pop(Stack *s){
    if (isEmpty(s)) {
        printf("Stack Underflow! cann't pop from stack\n");
    }else{
        int val = s->arr[s->top];
        // s->arr[s->top] = NULL;
        s->top--;
        return val;
    }
    return -1;
}

int main(){
    Stack *s;
    s = (Stack *)malloc(sizeof(Stack));
    s->top = -1;
    s->max = 10;
    s->arr = (int*)malloc(s->max * sizeof(int));
    push(s,1);
    push(s,2);
    push(s,3);
    push(s,4);
    push(s,5);
    push(s,6);
    push(s,7);
    push(s,8);
    push(s,9);
    push(s,10); //--> Pushed 10 elements;
    
    printf("%d is Poped from stack\n", pop(s));
    printf("%d is Poped from stack\n", pop(s));

    free(s->arr);
    free(s);
    return 0;
}