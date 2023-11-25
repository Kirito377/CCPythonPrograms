#include<stdio.h>

int pivot(int *arr){
    int n = 6;
    int s=0,e=n-1;
    int mid=s+(e-s)/2;
    while (s<e)
    {
        if (arr[mid]>=arr[0])
        {
            s=mid+1;
        }else
        {
            e=mid;
        }
        mid=s+(e-s)/2;
    }
    return mid;
}

int mian(){
    int arr[6]={4,6,7,1,2,3};
    printf("Pivot index is = %d", pivot(arr));
    return 0;
}