#include<stdio.h>
#include<stdlib.h>


typedef  struct Stack{
    int top;
    int max;
    int *arr;
}Stack;

int main(){
    Stack *s;
    
    s->top=-1;
    s->max=10;
    s->arr = (int *)malloc(s->max*sizeof(int));
    free(s->arr);
    free(s);
    return 0;
}