#include<iostream>
using namespace std;

void printarr(int *arr, int n) {
    for (int i = 0; i < n; i++){
        cout << arr[i] << " ";
    }  
}

void insertion(int *arr, int n){
    for(int i=1;i<n;i++){
        int j;
        int temp = arr[i];
        for (j=i-1;j>=0;j--) {
            if (arr[j] > temp) {
                arr[j+1] = arr[j];
            }else {
                break;
            }
        }
        arr[j+1] = temp;
    }
}

int main(){
    int arr[5] = {8,7,5,4,2};
    printarr(arr,5);
    insertion(arr,5);
    cout << endl;
    printarr(arr,5);
    return 0;
}
