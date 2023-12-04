#include<stdio.h>

int main(){
    int num,revnum=0,rem,temp;
    printf("All even numbers between 1 to 100 : ");
    for (int i = 1; i <= 100; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            if (i%j==0)
            {
                check++;
            }
        } 
    }
    
    return 0;
}