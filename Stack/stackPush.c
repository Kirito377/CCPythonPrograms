#include<stdio.h>
#include<stdlib.h>

typedef struct Satck{
    int top;
    int max;
    int *arr;
}Stack;


int isEmpty(Stack *s){
    if (s->top == -1)
        return 1;
    else
        return 0;
}

int isFull(Stack *s){
    if (s->top == s->max-1)
        return 1;
    else
        return 0;
}

void push(Stack *s, int data){
    if(isFull(s)){
        printf("Stack Overflow! cann't push %d\n", data);
    }else{
        s->top++;
        s->arr[s->top] = data;
        printf("Pushed %d \n", data);
    }
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
    push(s,11); // --> Overflow!
    push(s,12); // --> Overflow!
    push(s,13); // --> Overflow!
    return 0;
    free(s->arr);
    free(s);
}