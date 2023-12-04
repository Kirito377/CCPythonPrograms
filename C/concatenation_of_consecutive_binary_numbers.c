#include<stdio.h>

int bin(int n);
int main(){
    int n = 4;
    printf("%d\n", n);
    printf("%d\n",bin(n));
    return 0;
}
int bin(int n){
    int binary=0,rem;
    while (n!=0)
    {
        rem = n%2;
        n/=2;
        binary = binary*10+rem;
    }
    return binary;
}