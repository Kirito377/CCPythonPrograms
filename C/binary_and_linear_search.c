#include<stdio.h>
int linearSearch(int *n,int size, int target);
int binarySearch(int *n, int size, int target);
int main(){

    int find,n[10]={1,3,4,5,6,7,9,12,15,18};
    for (int i = 0; i < 10; i++){
        printf("%d ", n[i]);
    }
    printf("\nEnter number of index you want- ");
    scanf("%d", &find);

    printf("\nUsing Linear search \n");
    int lin = linearSearch(n,10,find);
    if (lin != -1){
        printf("The index is %d", lin);
    }else{
        printf("Not Found!");
    }

    printf("\nUsing Binary search \n");
    int bin = binarySearch(n,10,find);
    if (bin != -1){
        printf("The index is %d", bin);
    }else{
        printf("Not Found!");
    }
    return 0;
}

int linearSearch(int *n,int size, int target){
    for (int i = 0; i < size; i++){
        if (n[i]==target){
            return i;
        }
    }
    return -1;   
}

int binarySearch(int *n,int size, int target){
    int s=0;
    int e=size-1;
    int mid = s+(e-s)/2;
    while (s<=e){
        if (n[mid] == target){
            return mid;
        }else if (n[mid]<target){
            s=mid+1;
            mid = s+(e-s)/2;
        }else{
            e=mid-1;
            mid = s+(e-s)/2;
        }
    }
    return -1;
}