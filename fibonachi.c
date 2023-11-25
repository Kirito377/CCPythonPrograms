#include<stdio.h>

int main(){
    int a,b,c,n;
    printf("Enter the number : ");
    scanf("%d", &n);
    a=0;
    b=1;
    for (int i = 0; i < n; i++)
    {
        printf("%d ", a);
        c=a;
        a=b;
        b=a+c;
    }
    return 0;
}