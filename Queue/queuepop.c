#include<stdio.h>
#include<stdlib.h>

typedef struct queue {
    int front;
    int rear;
    int max;
    int *arr;
}queue;

int isEmpty(queue *q){
    if (q->rear == -1 && q->front == -1)
        return 1;
    else
        return 0;
}

int isFull(queue *q) {
    if (q->rear == q->max-1)
        return 1;
    else
        return 0;
    
}

void push(queue *q, int data){
    if (isEmpty(q)){
        q->front = 0;
        q->rear = 0;
        q->arr[q->rear] = data;
    }else{
        if (isFull(q)){
            printf("Overflow! cann't push %d\n", data);
        } else {
            q->rear++;
            q->arr[q->rear] = data;
        }
    }
}

int pop(queue *q){
    if (isEmpty(q)){
        printf("Underflow!");
    }else {
        q->front = q->front+1;
        return (q->front);
    }
}

int seek(queue *s, int i){


    
    if (isEmpty(s))
    {
        printf("Underflow! Stack is empty");
        return -1;
    }else{
        if (i >s->rear+1)
        {
            printf("Invalid Index\n");
            return -1;
        }else{
            return s->arr[i-1];
        }
    }
}


int main(){
    queue *q;
    q=(queue*)malloc(sizeof(queue));  //Allocating memory for queue
    q->max = 3;  //Seting max size of queue
    q->front = -1;
    q->rear = -1;
    q->arr = (int*)malloc(q->max*sizeof(int));  //Alllocating memory for array of queue
    push(q,12); //Push element in queue
    push(q,14); //Push element in queue
    push(q,23); //Queue Full
    q->front = pop(q);
    for (int i = (q->front+1); i <= q->rear+1; i++){
        printf("%d ",seek(q,i)); // traversing an seeking data from queue
    }
    return 0;
}