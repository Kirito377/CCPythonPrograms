#include<stdio.h>
int main(){

    int i=1;
    table:
        if(i<=10){
            printf("5 x %d = %d\n",i,5*i);
            i++;
            goto table;
        }
    return 0;
}