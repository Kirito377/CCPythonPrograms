#include<iostream>
using namespace std;
void printarray(int arr[], int n){
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    
}

void shortarr(int arr[],int n){
    for (int i = 0; i < n-1; i++){
        for (int j = i+1; j < n; j++)
        {
            if (arr[i]>=arr[j]){
                swap(arr[i],arr[j]);
            }
        }
    }
    

}
int main(){
    int n = 10;
    int arr[10]={9,8,7,6,5,4,1,2,3,0};
    printarray(arr,n);
    shortarr(arr,n);
    cout << endl;
    printarray(arr,n);

    return 0;
}