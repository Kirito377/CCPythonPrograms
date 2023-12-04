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

int seek(Stack *s, int i){
    int index = s->top - i + 1;
    if (isEmpty(s))
    {
        printf("Underflow! Stack is empty");
        return -1;
    }else{
        if (i >s->top+1)
        {
            printf("Invalid Index\n");
            return -1;
        }else{
            return s->arr[index];
        }
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
    
    printf("\n\n");
    
    for (int i = 1; i <= s->top +1; i++)
    {
        printf("Value of index %d is %d \n",i , seek(s,i));
    }

    printf("\n\n");

    printf("%d is Poped from stack\n", pop(s));

    printf("\n\n");
    
    for (int i = 1; i <= s->top +1; i++)
    {
        printf("Value of index %d is %d \n",i , seek(s,i));
    }
    

    free(s->arr);
    free(s);
    return 0;
}