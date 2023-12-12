#include<iostream>
#include<fstream>
using namespace std;
void printarray(int arr[], int n){
    
    for(int i=0; i<n;i++){
        cout << arr[i];
    }
}
int main(){
    int arr1[5] = {1,2,3,4,5};
    int arr2[3] = {1,2,3};
    int arr[5];

    int a=0,b=0,c=0;
    for(int i=0;i<5;i++){
        a *= 10;
        a += arr1[i];
    }
    printarray(arr1,5);
    cout << endl;
    for(int i=0;i<3;i++){
        b *= 10;
        b += arr2[i];
    }
    printarray(arr2,3);
    cout << endl;
    c = a+b;
    for(int i=4; i>=0;i--){
        arr[i] = c%10;
        c=c/10;
    }
    printarray(arr,5);
    cout << endl;
    return 0;
}