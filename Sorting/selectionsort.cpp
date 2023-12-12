#include<iostream>
using namespace std;

void printarr(int arr[], int n) {
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

void sort(int arr[], int n) {
    for (int i = 0; i < n; i++) {
        for (int j = i; j < n; j++) {
            if (arr[i] >= arr[j]) {
                swap(arr[i], arr[j]);
            }
        }
    }
}

int main(){
    int arr[5] = {12,23,35,4,4};
    int n = 5;
    printarr(arr, n);
    sort(arr,n);
    printarr(arr, n);
    return 0;
}