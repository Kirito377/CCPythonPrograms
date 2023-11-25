#include<stdio.h>

int pivot(int arr[],int n){

    int s=0,e=n-1;
    int mid = s+(s-e)/2;

    while (s<e) 
    {
        if (arr[mid] >= arr[0])
        {
            s=mid+1;
        }
        else
        {
            e=mid;
        }
        mid = s+(e-s)/2;        
    }
    
    return s;
}

int main(){
    int arr[6]={3,8,10,17,1};

    int c= pivot(arr,6);
    printf("%d", c);
    return 0;
}