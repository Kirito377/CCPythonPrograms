#include<iostream>
using namespace std;

int firstOccurrence(int *arr, int n, int key){
    int s=0;
    int e=n-1;
    int ans = -1;
    int mid = s+(e-s)/2;
    while (s<=e) {
        if(arr[mid] == key){
            ans = mid;
            e = mid-1;
        }else if(arr[mid]>key){
            e=mid-1;
        }else if (arr[mid] < key)
        {
            s=mid+1;
        }
        mid
    }
}

int lastOccurrence(int *arr, int n, int key){


}
int main(){
    int arr[10]={1,5,7,7,7,7,7,7,8,10};
    cout << "Index of first occurrence is "<< firstOccurrence(arr,10,7) << endl;
    cout << "Index of last occurrence is " << lastOccurrence(arr,10,7) << endl;
    cout << "Total number of occurrence is " << lastOccurrence(arr,10,7) - firstOccurrence(arr,10,7) +1 << endl;
    return 0;
}