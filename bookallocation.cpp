#include<iostream>
using namespace std;
bool isans(int *arr,int n, int m, int mid){
    int stcount = 1;
    int total = 0;
    for (int i = 0; i < n; i++){
        if (total+arr[i] <= mid){
            total += arr[i];
        }
        else{
            stcount ++;
            if (stcount > m || arr[i] > mid){
                return false;
            }
            total = arr[i];
        }
    }
    return true;
}

int book(int *arr, int n, int m){
    int s=0;
    int sum=0;
    for (int  i = 0; i < n; i++){
        sum += arr[i];
    }
    int end = sum;
    int ans = -1;
    int mid= s+(end - s)/2;
    while (s<=end){
        if (isans(arr,n,m,mid)){
            ans = mid;
            end = mid-1;
        }else{
            s = mid+1;
        }
        mid = s+(end - s)/2;
    }
    return ans;    
}
int main(){
    int arr[4] = {4,5,45,3};
    cout << book(arr,4,2);
    return 0;
}