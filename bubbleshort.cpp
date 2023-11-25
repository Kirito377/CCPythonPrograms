#include<iostream>
using namespace std;

void printarr(int *arr, int n) {
    for (int i = 0; i < n; i++){
        cout << arr[i] << " ";
    }  
}

void bubbleshort(int *arr, int n) {
    for (int i = 1; i < n; i++) {
        for (int  j = 0; j < n-i; j++) {
            if (arr[j] >= arr[j+1]) {
                swap(arr[j],arr[j+1]);
            }
        }
    }

}

int main(){
    int arr[5] = {7,8,4,5,2};
    
    printarr(arr,5);
    bubbleshort(arr,5);
    cout << endl;
    printarr(arr,5);
    return 0;
}