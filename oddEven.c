#include<stdio.h>

int main(){
    int num;
    printf("Enter num");
    scanf("%d", &num);
    if (num%2 != 0)
    {
        printf("%d is Odd", num);
    }
    else{
        printf("%d is Even", num);
    }
    
    return 0; 
}