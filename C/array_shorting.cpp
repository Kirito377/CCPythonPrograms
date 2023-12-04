#include<iostream>
using namespace std;

void ascendingOrder(int *arr, int size){
    for (int i = 0; i < size; i++){
        for (int j = i; j < size; j++){
            if (arr[i]>arr[j]){
                swap(arr[i], arr[j]);
            }
        }
    }
    for (int i = 0; i < size; i++){
        cout << arr[i] << " ";
    }
    
}

void decendingOrder(int *arr,int size){
    for (int i = 0; i < size; i++){
        for (int j = i; j < size; j++){
            if (arr[i]<arr[j]){
                swap(arr[i], arr[j]);
            }
        } 
    }
    for(int i=0;i<size;i++){
        cout << arr[i] << " ";
    }
}


int main(){
    int ascending[10] = {12,32,43,2,4,453,2,323,132,1};
    int decending[10] = {12,32,43,2,4,453,2,323,132,1};
    for (int i = 0; i < 10; i++)
    {
        cout << ascending[i] << " ";
    }
    cout  << endl << "Ascending order : ";
    ascendingOrder(ascending,10);
    cout << endl << "Decending Order : ";
    decendingOrder(decending,10);
    return 0;
}