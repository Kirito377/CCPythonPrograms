#include<iostream>
using namespace std;

int isPossible(int *arr,int n, int m, int mid) {
    int pCount = 1;
    int sum = 0;
    
    for (int  i = 0; i < n; i++) {
        if (sum + arr[i]<= mid){
            sum += arr[i];
        }else{
            pCount++;
            if (pCount > m || arr[i] > mid){
                return false;
            }
            sum=arr[i];
        }
    }
    return true;
}
int pp(int *arr, int n, int m){
    int s = 0, sum = 0;
    for (int i = 0; i < n; i++)
    {
        sum += arr[i];
    }
    int e = sum;
    int mid = s=(e-s)/2;
    int ans = -1;
    while (s<=e){
        if (isPossible(arr,n,m,mid)){
            ans = mid;
            e = mid -1;
        }else{
            s = mid +1;
        }
        mid = s+(e-s)/2;
    }
    return ans;
}

int main(){

    int arr[4] = {4,4,45,3};
    cout << pp(arr,4,2);
}