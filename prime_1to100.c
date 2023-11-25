#include<stdio.h>

int main(){
    int check =0;
    for (int i = 1; i < 100; i++)
    {
        for (int j = 1; j < i; j++)
        {
            if (i%j==0)
            {
                check++;
            }
        }
        if (check == 1)
        {
            printf("%d\n",i);
        }
        check =0;
    }
    
    return 0;
}