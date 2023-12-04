#include<stdio.h>

int main(){
    int num,i,check =0;
    printf("Enter number : ");
    scanf("%d", &num);
    for(int i = 1; i < num; i++)
    {
        if (num%i==0)
        {
            check++;
        }
    }
    if (check == 1)
    {
        printf("This is Prime");
    }else
    {
        printf("This is not Prime");
    }
    
    return 0;
}