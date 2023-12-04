#include<stdio.h>

int main(){
    int  a=2, b=3;
    a=a+b;
    b=a-b;
    a=a-b;

    printf("%d", a);
    printf("%d", b);
    return 0;
}