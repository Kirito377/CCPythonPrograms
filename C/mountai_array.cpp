#include<iostream>
using namespace std;

int mountainArray(int *arr,int size){

    int start = 0, end = size-1;
    int mid = start + (end - start)/2;
    
    while (start<end)
    {
        if(arr[mid] <= arr[mid+1]){
            start = mid+1;
        }else{
            end = mid;
        }
        mid = start + (end - start)/2;
    }
    return start;
}

int main(){
    int arr[6] = {0,1,7,16,18,7};
    cout << "Peak is : " << mountainArray(arr,6) << endl;
    return 0;
}